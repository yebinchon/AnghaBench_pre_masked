
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kind; int data1; unsigned char data2; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, unsigned char VAR_3, unsigned char VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_1[VAR_5].kind != VAR_0; VAR_5++) {



  if ((((VAR_1[VAR_5].data1 & 0x0f) == (VAR_3 & 0x0f))) &&
      ((((VAR_1[VAR_5].data1 >> 4) -
         (VAR_3 >> 4) + VAR_2) & 0x0f) == 0x0f) &&
      (VAR_1[VAR_5].data2 == VAR_4))
   return VAR_5;

 }
 return -1;
}
