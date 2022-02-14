
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLenum ;



 int VAR_0 ;



 int VAR_1 ;


 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1( GLenum VAR_2, size_t VAR_3)
{
   switch (VAR_2) {
   case 133:
   case 129:
      return VAR_1;
   case 130:
   case 128:
      return (VAR_3 & 1) == 0;
   case 132:
   case 131:
      return (VAR_3 & 3) == 0;
   default:
      FUNC_0();
      return VAR_0;
   }
}
