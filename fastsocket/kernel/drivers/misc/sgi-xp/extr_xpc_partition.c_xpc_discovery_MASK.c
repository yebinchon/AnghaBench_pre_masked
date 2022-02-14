
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_rsvd_page {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* request_partition_activation ) (struct xpc_rsvd_page*,unsigned long,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (void*) ;
 unsigned long* FUNC_5 (int,int ) ;
 int FUNC_6 (struct xpc_rsvd_page*,unsigned long,int) ;
 scalar_t__ FUNC_7 (int,unsigned long*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int,unsigned long*,struct xpc_rsvd_page*,unsigned long*) ;
 struct xpc_rsvd_page* FUNC_9 (scalar_t__,int ,void**) ;
 unsigned long* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long* VAR_11 ;
 scalar_t__ VAR_12 ;

void
FUNC_10(void)
{
 void *VAR_13;
 struct xpc_rsvd_page *VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 struct xpc_rsvd_page *VAR_20;
 unsigned long *VAR_21;
 enum xp_retval VAR_22;

 VAR_14 = FUNC_9(VAR_1 +
        VAR_8,
        VAR_0, &VAR_13);
 if (VAR_14 == ((void*)0))
  return;

 VAR_21 = FUNC_5(sizeof(long) * VAR_9,
        VAR_0);
 if (VAR_21 == ((void*)0)) {
  FUNC_4(VAR_13);
  return;
 }

 VAR_20 = (struct xpc_rsvd_page *)VAR_12;






 VAR_17 = VAR_4;

 if (FUNC_3())
  VAR_18 = 256;
 else {
  VAR_18 = 64;

  switch (VAR_17) {
  case 128:
   VAR_18 *= 2;
  case 64:
   VAR_18 *= 2;
  case 32:
   VAR_18 *= 2;
   VAR_17 = 16;
   FUNC_0(!FUNC_2());
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {

  if (VAR_6)
   break;

  FUNC_1(VAR_10, "searching region %d\n", VAR_16);

  for (VAR_19 = (VAR_16 * VAR_17 * 2);
       VAR_19 < ((VAR_16 + 1) * VAR_17 * 2); VAR_19 += 2) {

   if (VAR_6)
    break;

   FUNC_1(VAR_10, "checking nasid %d\n", VAR_19);

   if (FUNC_7(VAR_19 / 2, VAR_11)) {
    FUNC_1(VAR_10, "PROM indicates Nasid %d is "
     "part of the local partition; skipping "
     "region\n", VAR_19);
    break;
   }

   if (!(FUNC_7(VAR_19 / 2, VAR_7))) {
    FUNC_1(VAR_10, "PROM indicates Nasid %d was "
     "not on Numa-Link network at reset\n",
     VAR_19);
    continue;
   }

   if (FUNC_7(VAR_19 / 2, VAR_21)) {
    FUNC_1(VAR_10, "Nasid %d is part of a "
     "partition which was previously "
     "discovered\n", VAR_19);
    continue;
   }



   VAR_22 = FUNC_8(VAR_19, VAR_21,
      VAR_14, &VAR_15);
   if (VAR_22 != VAR_3) {
    FUNC_1(VAR_10, "unable to get reserved page "
     "from nasid %d, reason=%d\n", VAR_19,
     VAR_22);

    if (VAR_22 == VAR_2)
     break;

    continue;
   }

   VAR_5.request_partition_activation(VAR_14,
        VAR_15, VAR_19);
  }
 }

 FUNC_4(VAR_21);
 FUNC_4(VAR_13);
}
