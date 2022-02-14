
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VIDTEX_T ;
typedef scalar_t__ GLenum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(VIDTEX_T *VAR_2, uint32_t VAR_3)
{
   GLenum VAR_4 = FUNC_0();
   int VAR_5 = 0;
   while (VAR_4 != VAR_0)
   {
      FUNC_1("GL error: line %d error 0x%04x", VAR_3, VAR_4);
      VAR_5 = 1;
      VAR_4 = FUNC_0();
   }
   if (VAR_5)
      FUNC_2(VAR_2, VAR_1);
}
