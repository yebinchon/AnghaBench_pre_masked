
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5, u32 VAR_6,
    u8 *VAR_7)
{
 char *VAR_8 = (char *)VAR_7;
 int VAR_9;

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_7, *VAR_4,
         VAR_2 * VAR_0);
  break;
 case 129:
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   FUNC_0(VAR_8, VAR_3[VAR_9].stat_string,
          VAR_0);
   VAR_8 += VAR_0;
  }
  break;
 }
}
