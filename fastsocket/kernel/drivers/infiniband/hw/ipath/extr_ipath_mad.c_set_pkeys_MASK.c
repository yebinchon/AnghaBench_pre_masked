
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ipath_portdata {int* port_pkeys; } ;
struct ipath_devdata {TYPE_1__* ipath_kregs; scalar_t__* ipath_pkeys; struct ipath_portdata** ipath_pd; } ;
struct TYPE_2__ {int kr_partitionkey; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct ipath_devdata*,int) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (struct ipath_devdata*,int ,int) ;
 int FUNC_4 (struct ipath_devdata*,int) ;

__attribute__((used)) static int FUNC_5(struct ipath_devdata *VAR_1, u16 *VAR_2)
{
 struct ipath_portdata *VAR_3;
 int VAR_4;
 int VAR_5 = 0;


 VAR_3 = VAR_1->ipath_pd[0];

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->port_pkeys); VAR_4++) {
  u16 VAR_6 = VAR_2[VAR_4];
  u16 VAR_7 = VAR_3->port_pkeys[VAR_4];

  if (VAR_6 == VAR_7)
   continue;




  if (VAR_7 & 0x7FFF)
   VAR_5 |= FUNC_4(VAR_1, VAR_7);
  if (VAR_6 & 0x7FFF) {
   int VAR_8 = FUNC_1(VAR_1, VAR_6);

   if (VAR_8 < 0)
    VAR_6 = 0;
   else
    VAR_5 |= VAR_8;
  }
  VAR_3->port_pkeys[VAR_4] = VAR_6;
 }
 if (VAR_5) {
  u64 VAR_9;

  VAR_9 = (u64) VAR_1->ipath_pkeys[0] |
   ((u64) VAR_1->ipath_pkeys[1] << 16) |
   ((u64) VAR_1->ipath_pkeys[2] << 32) |
   ((u64) VAR_1->ipath_pkeys[3] << 48);
  FUNC_2(VAR_0, "p0 new pkey reg %llx\n",
      (unsigned long long) VAR_9);
  FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_partitionkey,
     VAR_9);
 }
 return 0;
}
