
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int log_info ;
typedef int fft_t ;
typedef int GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int *,char*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static GLuint FUNC_8(fft_t *VAR_4,
      const char *VAR_5, const char *VAR_6)
{
   GLint VAR_7 = 0;
   GLuint VAR_8 = FUNC_2();
   GLuint VAR_9 = FUNC_0(VAR_4, VAR_2, VAR_5);
   GLuint VAR_10 = FUNC_0(VAR_4, VAR_0, VAR_6);

   FUNC_1(VAR_8, VAR_9);
   FUNC_1(VAR_8, VAR_10);
   FUNC_6(VAR_8);

   FUNC_5(VAR_8, VAR_1, &VAR_7);

   if (!VAR_7)
   {
      char VAR_11[8 * 1024];
      GLsizei VAR_12;

      FUNC_7(VAR_3, "Failed to link.\n");
      FUNC_4(VAR_8, sizeof(VAR_11), &VAR_12, VAR_11);
      FUNC_7(VAR_3, "ERROR: %s\n", VAR_11);
   }

   FUNC_3(VAR_9);
   FUNC_3(VAR_10);
   return VAR_8;
}
