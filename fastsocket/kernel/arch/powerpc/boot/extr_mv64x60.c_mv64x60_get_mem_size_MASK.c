
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 TYPE_1__* VAR_2 ;

u32 FUNC_1(u8 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = 0;

 VAR_4 = FUNC_0((u32 *)(VAR_3 + VAR_1)) & 0xf;

 for (VAR_5=0; VAR_5<VAR_0; VAR_5++)
  if (!(VAR_4 & (1<<VAR_5))) {
   VAR_6 = FUNC_0((u32*)(VAR_3
      + VAR_2[VAR_5].size));
   VAR_6 = ((VAR_6 & 0xffff) + 1) << 16;
   VAR_7 += VAR_6;
  }

 return VAR_7;
}
