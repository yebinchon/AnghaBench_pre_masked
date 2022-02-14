
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RASPITEX_STATE ;
typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(RASPITEX_STATE *VAR_2)
{
   int VAR_3 = 30 * 15;
   (void) VAR_2;
   VAR_0 = (VAR_1 * 360) / (GLfloat) VAR_3;
   VAR_1 = (VAR_1 + 1) % VAR_3;

   return 0;
}
