
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* flags; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(void)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_2[VAR_5] = VAR_3[VAR_5] & ~VAR_1.flags[VAR_5];
  if (VAR_2[VAR_5])
   VAR_4 |= 1 << VAR_5;
 }

 return VAR_4;
}
