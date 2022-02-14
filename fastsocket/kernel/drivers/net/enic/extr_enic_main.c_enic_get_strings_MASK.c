
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 unsigned int VAR_8;

 switch (VAR_6) {
 case 128:
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   FUNC_0(VAR_7, VAR_4[VAR_8].name, VAR_0);
   VAR_7 += VAR_0;
  }
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   FUNC_0(VAR_7, VAR_3[VAR_8].name, VAR_0);
   VAR_7 += VAR_0;
  }
  break;
 }
}
