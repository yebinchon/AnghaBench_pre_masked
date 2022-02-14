
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const bytes; } ;
typedef TYPE_1__ TestFileInfo ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(const int VAR_2)
{
 TestFileInfo *VAR_3;
 TestFileInfo *VAR_4;

 VAR_4 = VAR_1 + VAR_0;
 for (VAR_3=VAR_1; VAR_3<VAR_4; VAR_3++)
 {
  if (VAR_2 == VAR_3->bytes)
  {
   return VAR_3 - VAR_1;
  }
 }

 return -1;
}
