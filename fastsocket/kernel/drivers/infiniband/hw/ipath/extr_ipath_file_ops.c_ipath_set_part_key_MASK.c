
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ipath_portdata {int* port_pkeys; int port_port; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int* ipath_pkeys; TYPE_1__* ipath_kregs; int * ipath_pkeyrefs; } ;
typedef int atomic_t ;
struct TYPE_4__ {int* sps_pkeys; } ;
struct TYPE_3__ {int kr_partitionkey; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (char*,int ,int) ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (struct ipath_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ipath_portdata *VAR_7, u16 VAR_8)
{
 struct ipath_devdata *VAR_9 = VAR_7->port_dd;
 int VAR_10, VAR_11 = 0, VAR_12 = -1;
 u16 VAR_13 = VAR_8 & 0x7FFF;
 int VAR_14;

 if (VAR_13 == (VAR_3 & 0x7FFF)) {

  VAR_14 = 0;
  goto bail;
 }

 FUNC_4(VAR_5, "p%u try to set pkey %hx, current keys "
     "%hx:%x %hx:%x %hx:%x %hx:%x\n",
     VAR_7->port_port, VAR_8, VAR_9->ipath_pkeys[0],
     FUNC_3(&VAR_9->ipath_pkeyrefs[0]), VAR_9->ipath_pkeys[1],
     FUNC_3(&VAR_9->ipath_pkeyrefs[1]), VAR_9->ipath_pkeys[2],
     FUNC_3(&VAR_9->ipath_pkeyrefs[2]), VAR_9->ipath_pkeys[3],
     FUNC_3(&VAR_9->ipath_pkeyrefs[3]));

 if (!VAR_13) {
  FUNC_4(VAR_4, "p%u tries to set key 0, not allowed\n",
      VAR_7->port_port);
  VAR_14 = -VAR_2;
  goto bail;
 }







 VAR_8 |= 0x8000;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7->port_pkeys); VAR_10++) {
  if (!VAR_7->port_pkeys[VAR_10] && VAR_12 == -1)
   VAR_12 = VAR_10;
  if (VAR_7->port_pkeys[VAR_10] == VAR_8) {
   FUNC_4(VAR_5, "p%u tries to set same pkey "
       "(%x) more than once\n",
       VAR_7->port_port, VAR_8);
   VAR_14 = -VAR_1;
   goto bail;
  }
 }
 if (VAR_12 == -1) {
  FUNC_5("All pkeys for port %u already in use, "
     "can't set %x\n", VAR_7->port_port, VAR_8);
  VAR_14 = -VAR_0;
  goto bail;
 }
 for (VAR_11 = VAR_10 = 0; VAR_10 < FUNC_0(VAR_9->ipath_pkeys); VAR_10++) {
  if (!VAR_9->ipath_pkeys[VAR_10]) {
   VAR_11++;
   continue;
  }
  if (VAR_9->ipath_pkeys[VAR_10] == VAR_8) {
   atomic_t *VAR_15 = &VAR_9->ipath_pkeyrefs[VAR_10];

   if (FUNC_2(VAR_15) > 1) {
    VAR_7->port_pkeys[VAR_12] = VAR_8;
    FUNC_4(VAR_5, "p%u set key %x "
        "matches #%d, count now %d\n",
        VAR_7->port_port, VAR_8, VAR_10,
        FUNC_3(VAR_15));
    VAR_14 = 0;
    goto bail;
   } else {



    FUNC_1(VAR_15);
    FUNC_4(VAR_5, "Lost race, count was "
        "0, after dec, it's %d\n",
        FUNC_3(VAR_15));
    VAR_11++;
   }
  }
  if ((VAR_9->ipath_pkeys[VAR_10] & 0x7FFF) == VAR_13) {





   VAR_14 = -VAR_1;
   goto bail;
  }
 }
 if (!VAR_11) {
  FUNC_5("port %u, all pkeys already in use, "
     "can't set %x\n", VAR_7->port_port, VAR_8);
  VAR_14 = -VAR_0;
  goto bail;
 }
 for (VAR_11 = VAR_10 = 0; VAR_10 < FUNC_0(VAR_9->ipath_pkeys); VAR_10++) {
  if (!VAR_9->ipath_pkeys[VAR_10] &&
      FUNC_2(&VAR_9->ipath_pkeyrefs[VAR_10]) == 1) {
   u64 VAR_16;


   VAR_6.sps_pkeys[VAR_10] = VAR_13;
   VAR_7->port_pkeys[VAR_12] = VAR_9->ipath_pkeys[VAR_10] = VAR_8;
   VAR_16 =
    (u64) VAR_9->ipath_pkeys[0] |
    ((u64) VAR_9->ipath_pkeys[1] << 16) |
    ((u64) VAR_9->ipath_pkeys[2] << 32) |
    ((u64) VAR_9->ipath_pkeys[3] << 48);
   FUNC_4(VAR_4, "p%u set key %x in #%d, "
       "portidx %d, new pkey reg %llx\n",
       VAR_7->port_port, VAR_8, VAR_10, VAR_12,
       (unsigned long long) VAR_16);
   FUNC_6(
    VAR_9, VAR_9->ipath_kregs->kr_partitionkey, VAR_16);

   VAR_14 = 0;
   goto bail;
  }
 }
 FUNC_5("port %u, all pkeys already in use 2nd pass, "
    "can't set %x\n", VAR_7->port_port, VAR_8);
 VAR_14 = -VAR_0;

bail:
 return VAR_14;
}
