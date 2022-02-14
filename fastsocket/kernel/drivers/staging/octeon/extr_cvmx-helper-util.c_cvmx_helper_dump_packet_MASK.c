
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int offset; } ;
union cvmx_pip_ip_offset {TYPE_2__ s; void* u64; } ;
struct TYPE_13__ {scalar_t__ nip_shf; } ;
union cvmx_pip_gbl_cfg {TYPE_5__ s; void* u64; } ;
struct TYPE_9__ {int wqe_pool; } ;
union cvmx_ipd_wqe_fpa_queue {TYPE_1__ s; void* u64; } ;
struct TYPE_14__ {int size; int addr; int back; int pool; int i; } ;
union cvmx_buf_ptr {TYPE_6__ s; scalar_t__ u64; } ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ bufs; int ip_offset; int is_v6; int not_IP; } ;
struct TYPE_12__ {TYPE_3__ s; } ;
struct TYPE_15__ {scalar_t__ len; union cvmx_buf_ptr packet_ptr; TYPE_4__ word2; int packet_data; int qos; int ipprt; } ;
typedef TYPE_7__ cvmx_wqe_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(cvmx_wqe_t *VAR_3)
{
 uint64_t VAR_4;
 uint64_t VAR_5;
 union cvmx_buf_ptr VAR_6;
 uint64_t VAR_7;
 uint8_t *VAR_8;
 uint8_t *VAR_9;

 FUNC_0("Packet Length:   %u\n", VAR_3->len);
 FUNC_0("    Input Port:  %u\n", VAR_3->ipprt);
 FUNC_0("    QoS:         %u\n", VAR_3->qos);
 FUNC_0("    Buffers:     %u\n", VAR_3->word2.s.bufs);

 if (VAR_3->word2.s.bufs == 0) {
  union cvmx_ipd_wqe_fpa_queue VAR_10;
  VAR_10.u64 = FUNC_3(VAR_0);
  VAR_6.u64 = 0;
  VAR_6.s.pool = VAR_10.s.wqe_pool;
  VAR_6.s.size = 128;
  VAR_6.s.addr = FUNC_2(VAR_3->packet_data);
  if (FUNC_4(!VAR_3->word2.s.not_IP)) {
   union cvmx_pip_ip_offset VAR_11;
   VAR_11.u64 = FUNC_3(VAR_2);
   VAR_6.s.addr +=
       (VAR_11.s.offset << 3) -
       VAR_3->word2.s.ip_offset;
   VAR_6.s.addr += (VAR_3->word2.s.is_v6 ^ 1) << 2;
  } else {






   union cvmx_pip_gbl_cfg VAR_12;
   VAR_12.u64 = FUNC_3(VAR_1);
   VAR_6.s.addr += VAR_12.s.nip_shf;
  }
 } else
  VAR_6 = VAR_3->packet_ptr;
 VAR_5 = VAR_3->len;

 while (VAR_5) {
  VAR_7 =
      ((VAR_6.s.addr >> 7) - VAR_6.s.back) << 7;
  FUNC_0("    Buffer Start:%llx\n",
        (unsigned long long)VAR_7);
  FUNC_0("    Buffer I   : %u\n", VAR_6.s.i);
  FUNC_0("    Buffer Back: %u\n", VAR_6.s.back);
  FUNC_0("    Buffer Pool: %u\n", VAR_6.s.pool);
  FUNC_0("    Buffer Data: %llx\n",
        (unsigned long long)VAR_6.s.addr);
  FUNC_0("    Buffer Size: %u\n", VAR_6.s.size);

  FUNC_0("\t\t");
  VAR_8 = (uint8_t *) FUNC_1(VAR_6.s.addr);
  VAR_9 = VAR_8 + VAR_6.s.size;
  VAR_4 = 0;
  while (VAR_8 < VAR_9) {
   if (VAR_5 == 0)
    break;
   else
    VAR_5--;
   FUNC_0("%02x", (unsigned int)*VAR_8);
   VAR_8++;
   if (VAR_5 && (VAR_4 == 7)) {
    FUNC_0("\n\t\t");
    VAR_4 = 0;
   } else
    VAR_4++;
  }
  FUNC_0("\n");

  if (VAR_5)
   VAR_6 = *(union cvmx_buf_ptr *)
    FUNC_1(VAR_6.s.addr - 8);
 }
 return 0;
}
