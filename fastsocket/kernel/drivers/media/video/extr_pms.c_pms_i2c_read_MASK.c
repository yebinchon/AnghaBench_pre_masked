
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slave; int sub; int data; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4=0;
 for(VAR_4=0;VAR_4<VAR_0;VAR_4++)
 {
  if(VAR_1[VAR_4].slave==VAR_2 && VAR_1[VAR_4].sub==VAR_3)
   return VAR_1[VAR_4].data;
 }
 return 0;
}
