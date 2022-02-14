
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ipath_portdata {int* port_pkeys; int port_port; } ;
struct ipath_devdata {int* ipath_pkeys; TYPE_1__* ipath_kregs; int * ipath_pkeyrefs; } ;
struct TYPE_4__ {int* sps_pkeys; } ;
struct TYPE_3__ {int kr_partitionkey; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,unsigned long long,...) ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (struct ipath_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ipath_portdata *VAR_2,
     struct ipath_devdata *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 u64 VAR_7;


 VAR_7 = (u64) VAR_3->ipath_pkeys[0] |
  ((u64) VAR_3->ipath_pkeys[1] << 16) |
  ((u64) VAR_3->ipath_pkeys[2] << 32) |
  ((u64) VAR_3->ipath_pkeys[3] << 48);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->port_pkeys); VAR_4++) {
  if (!VAR_2->port_pkeys[VAR_4])
   continue;
  FUNC_3(VAR_0, "look for key[%d] %hx in pkeys\n", VAR_4,
      VAR_2->port_pkeys[VAR_4]);
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->ipath_pkeys); VAR_5++) {

   if ((VAR_3->ipath_pkeys[VAR_5] & 0x7fff) !=
       (VAR_2->port_pkeys[VAR_4] & 0x7fff))
    continue;
   if (FUNC_1(&VAR_3->ipath_pkeyrefs[VAR_5])) {
    FUNC_3(VAR_0, "p%u clear key "
        "%x matches #%d\n",
        VAR_2->port_port,
        VAR_2->port_pkeys[VAR_4], VAR_5);
    VAR_1.sps_pkeys[VAR_5] =
     VAR_3->ipath_pkeys[VAR_5] = 0;
    VAR_6++;
   }
   else FUNC_3(
    VAR_0, "p%u key %x matches #%d, "
    "but ref still %d\n", VAR_2->port_port,
    VAR_2->port_pkeys[VAR_4], VAR_5,
    FUNC_2(&VAR_3->ipath_pkeyrefs[VAR_5]));
   break;
  }
  VAR_2->port_pkeys[VAR_4] = 0;
 }
 if (VAR_6) {
  u64 VAR_8 = (u64) VAR_3->ipath_pkeys[0] |
   ((u64) VAR_3->ipath_pkeys[1] << 16) |
   ((u64) VAR_3->ipath_pkeys[2] << 32) |
   ((u64) VAR_3->ipath_pkeys[3] << 48);
  FUNC_3(VAR_0, "p%u old pkey reg %llx, "
      "new pkey reg %llx\n", VAR_2->port_port,
      (unsigned long long) VAR_7,
      (unsigned long long) VAR_8);
  FUNC_4(VAR_3, VAR_3->ipath_kregs->kr_partitionkey,
     VAR_8);
 }
}
