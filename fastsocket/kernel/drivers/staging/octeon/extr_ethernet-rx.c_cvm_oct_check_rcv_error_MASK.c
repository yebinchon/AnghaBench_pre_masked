
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pre_chk; } ;
union cvmx_gmxx_rxx_frm_ctl {TYPE_1__ s; int u64; } ;
typedef int uint8_t ;
struct TYPE_12__ {int err_code; } ;
struct TYPE_13__ {TYPE_4__ snoip; } ;
struct TYPE_10__ {int addr; } ;
struct TYPE_11__ {TYPE_2__ s; } ;
struct TYPE_14__ {int len; TYPE_5__ word2; int ipprt; TYPE_3__ packet_ptr; } ;
typedef TYPE_6__ cvmx_wqe_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(cvmx_wqe_t *VAR_1)
{
 if ((VAR_1->word2.snoip.err_code == 10) && (VAR_1->len <= 64)) {






 } else
     if (VAR_0
  && ((VAR_1->word2.snoip.err_code == 5)
      || (VAR_1->word2.snoip.err_code == 7))) {
  int VAR_2 = FUNC_4(VAR_1->ipprt);
  int VAR_3 = FUNC_3(VAR_1->ipprt);
  union cvmx_gmxx_rxx_frm_ctl VAR_4;
  VAR_4.u64 =
      FUNC_6(FUNC_0(VAR_3, VAR_2));
  if (VAR_4.s.pre_chk == 0) {

   uint8_t *VAR_5 =
       FUNC_5(VAR_1->packet_ptr.s.addr);
   int VAR_6 = 0;

   while (VAR_6 < VAR_1->len - 1) {
    if (*VAR_5 != 0x55)
     break;
    VAR_5++;
    VAR_6++;
   }

   if (*VAR_5 == 0xd5) {



    VAR_1->packet_ptr.s.addr += VAR_6 + 1;
    VAR_1->len -= VAR_6 + 5;
   } else if ((*VAR_5 & 0xf) == 0xd) {



    VAR_1->packet_ptr.s.addr += VAR_6;
    VAR_1->len -= VAR_6 + 4;
    for (VAR_6 = 0; VAR_6 < VAR_1->len; VAR_6++) {
     *VAR_5 =
         ((*VAR_5 & 0xf0) >> 4) |
         ((*(VAR_5 + 1) & 0xf) << 4);
     VAR_5++;
    }
   } else {
    FUNC_1("Port %d unknown preamble, packet "
        "dropped\n",
         VAR_1->ipprt);



    FUNC_2(VAR_1);
    return 1;
   }
  }
 } else {
  FUNC_1("Port %d receive error code %d, packet dropped\n",
      VAR_1->ipprt, VAR_1->word2.snoip.err_code);
  FUNC_2(VAR_1);
  return 1;
 }

 return 0;
}
