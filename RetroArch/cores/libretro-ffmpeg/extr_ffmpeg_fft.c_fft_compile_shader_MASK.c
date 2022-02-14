
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int log_info ;
typedef int fft_t ;
typedef int GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef int GLchar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *,char*) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (int ,int,int const**,int *) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static GLuint FUNC_6(fft_t *VAR_2, GLenum VAR_3, const char *VAR_4)
{
   GLint VAR_5 = 0;
   GLuint VAR_6 = FUNC_1(VAR_3);

   FUNC_4(VAR_6, 1, (const GLchar**)&VAR_4, ((void*)0));
   FUNC_0(VAR_6);

   FUNC_3(VAR_6, VAR_0, &VAR_5);

   if (!VAR_5)
   {
      char VAR_7[8 * 1024];
      GLsizei VAR_8;

      FUNC_5(VAR_1, "Failed to compile.\n");
      FUNC_2(VAR_6, sizeof(VAR_7), &VAR_8, VAR_7);
      FUNC_5(VAR_1, "ERROR: %s\n", VAR_7);
      return 0;
   }

   return VAR_6;
}
