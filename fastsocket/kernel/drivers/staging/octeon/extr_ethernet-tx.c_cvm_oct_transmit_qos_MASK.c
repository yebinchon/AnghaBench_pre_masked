
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int back; int size; int pool; int addr; } ;
union cvmx_buf_ptr {TYPE_1__ s; scalar_t__ u64; } ;
struct TYPE_19__ {int tx_dropped; } ;
struct octeon_ethernet {TYPE_7__ stats; scalar_t__ queue; int port; } ;
struct net_device {int flags; int name; } ;
struct ethhdr {int dummy; } ;
struct TYPE_16__ {scalar_t__ IP_exc; scalar_t__ not_IP; int bufs; } ;
struct TYPE_17__ {TYPE_4__ s; } ;
struct TYPE_14__ {int back; int addr; } ;
struct TYPE_15__ {TYPE_2__ s; } ;
struct TYPE_20__ {TYPE_5__ word2; int len; TYPE_3__ packet_ptr; } ;
typedef TYPE_8__ cvmx_wqe_t ;
struct TYPE_18__ {int n2; int dontfree; int ipoffp1; int total_bytes; int segs; } ;
struct TYPE_21__ {TYPE_6__ s; scalar_t__ u64; } ;
typedef TYPE_9__ cvmx_pko_command_word0_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,TYPE_9__,union cvmx_buf_ptr,int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 struct octeon_ethernet* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct net_device *VAR_7, void *VAR_8,
    int VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 union cvmx_buf_ptr VAR_12;
 cvmx_pko_command_word0_t VAR_13;
 int VAR_14;
 struct octeon_ethernet *VAR_15 = FUNC_9(VAR_7);
 cvmx_wqe_t *VAR_16 = VAR_8;

 if (!(VAR_7->flags & VAR_6)) {
  FUNC_0("%s: Device not up\n", VAR_7->name);
  if (VAR_9)
   FUNC_2(VAR_16);
  return -1;
 }




 if ((VAR_4 > 1) ||
     (VAR_5 > 1)) {
  if (VAR_10 <= 0)
   VAR_10 = 0;
  else if (VAR_10 >= FUNC_4(VAR_15->port))
   VAR_10 = 0;
 } else
  VAR_10 = 0;


 VAR_14 = 0;

 FUNC_8(VAR_11);
 FUNC_6(VAR_15->port, VAR_15->queue + VAR_10,
         VAR_3);


 VAR_12.u64 = 0;
 VAR_12.s.addr = VAR_16->packet_ptr.s.addr;
 VAR_12.s.pool = VAR_0;
 VAR_12.s.size = VAR_1;
 VAR_12.s.back = VAR_16->packet_ptr.s.back;


 VAR_13.u64 = 0;
 VAR_13.s.n2 = 1;
 VAR_13.s.dontfree = !VAR_9;
 VAR_13.s.segs = VAR_16->word2.s.bufs;
 VAR_13.s.total_bytes = VAR_16->len;


 if (FUNC_10(VAR_16->word2.s.not_IP || VAR_16->word2.s.IP_exc))
  VAR_13.s.ipoffp1 = 0;
 else
  VAR_13.s.ipoffp1 = sizeof(struct ethhdr) + 1;


 if (FUNC_10
     (FUNC_5
      (VAR_15->port, VAR_15->queue + VAR_10, VAR_13, VAR_12,
       VAR_3))) {
  FUNC_0("%s: Failed to send the packet\n", VAR_7->name);
  VAR_14 = -1;
 }
 FUNC_7(VAR_11);

 if (FUNC_10(VAR_14)) {
  if (VAR_9)
   FUNC_2(VAR_16);
  VAR_15->stats.tx_dropped++;
 } else if (VAR_9)
  FUNC_3(VAR_16, VAR_2, FUNC_1(1));

 return VAR_14;
}
