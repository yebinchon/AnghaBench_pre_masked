
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {int flags; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stat_string; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 TYPE_1__* VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_10, u32 VAR_11, u8 * VAR_12)
{
 struct qlcnic_adapter *VAR_13 = FUNC_2(VAR_10);
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_11) {
 case 128:
  FUNC_1(VAR_12, *VAR_9,
         VAR_3 * VAR_0);
  break;
 case 129:
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
   FUNC_1(VAR_12 + VAR_14 * VAR_0,
          VAR_8[VAR_14].stat_string,
          VAR_0);
  }
  if (FUNC_3(VAR_13)) {
   VAR_16 = FUNC_0(VAR_6);
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++, VAR_14++)
    FUNC_1(VAR_12 + VAR_14 * VAR_0,
           VAR_6[VAR_15],
           VAR_0);
   VAR_16 = FUNC_0(VAR_4);
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++, VAR_14++)
    FUNC_1(VAR_12 + VAR_14 * VAR_0,
           VAR_4[VAR_15],
           VAR_0);
   VAR_16 = FUNC_0(VAR_5);
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++, VAR_14++)
    FUNC_1(VAR_12 + VAR_14 * VAR_0,
           VAR_5[VAR_15],
           VAR_0);
   return;
  } else {
   VAR_16 = FUNC_0(VAR_4);
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++, VAR_14++)
    FUNC_1(VAR_12 + VAR_14 * VAR_0,
           VAR_4[VAR_15],
           VAR_0);
  }
  if (!(VAR_13->flags & VAR_1))
   return;
  VAR_16 = FUNC_0(VAR_7);
  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_14++, VAR_15++) {
   FUNC_1(VAR_12 + VAR_14 * VAR_0,
          VAR_7[VAR_15],
          VAR_0);
  }
 }
}
