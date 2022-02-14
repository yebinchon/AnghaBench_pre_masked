
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int EGLenum ;
typedef scalar_t__ EGLImageKHR ;
typedef int EGLDisplay ;
typedef scalar_t__ EGLClientBuffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (char*,int ,unsigned int) ;

int FUNC_6(EGLDisplay VAR_4, EGLenum VAR_5,
                                   EGLClientBuffer VAR_6, GLuint *VAR_7, EGLImageKHR *VAR_8)
{
   FUNC_5("%s: mm_buf %u", VAR_3, (unsigned) VAR_6);
   FUNC_0(FUNC_3(VAR_2, *VAR_7));
   if (*VAR_8 != VAR_1)
   {

      FUNC_2(VAR_4, *VAR_8);
      *VAR_8 = VAR_1;
   }

   *VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_5, VAR_6, ((void*)0));
   FUNC_0(FUNC_4(VAR_2, *VAR_8));

   return 0;
}
