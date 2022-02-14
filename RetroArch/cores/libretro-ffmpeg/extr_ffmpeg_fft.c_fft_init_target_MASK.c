
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int tex; int fbo; } ;
typedef int fft_t ;
typedef int GLuint ;
typedef int GLint ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,scalar_t__,unsigned int,unsigned int,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int const*) ;
 int FUNC_4 (int ,int ,int const*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static void FUNC_8(fft_t *VAR_7, struct target *VAR_8, GLenum VAR_9,
      unsigned VAR_10, unsigned VAR_11, unsigned VAR_12, GLenum VAR_13, GLenum VAR_14)
{
   FUNC_0(VAR_7, &VAR_8->tex, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
   FUNC_7(1, &VAR_8->fbo);
   FUNC_1(VAR_3, VAR_8->fbo);

   FUNC_6(VAR_3, VAR_1, VAR_6,
      VAR_8->tex, 0);

   if (VAR_9 == VAR_5)
   {
      FUNC_5(0, 0, 0, 0);
      FUNC_2(VAR_2);
   }
   else if (VAR_9 == VAR_4)
   {
      static const GLint VAR_15[] = { 0, 0, 0, 0 };
      FUNC_3(VAR_0, 0, VAR_15);
   }
   else
   {
      static const GLuint VAR_16[] = { 0, 0, 0, 0 };
      FUNC_4(VAR_0, 0, VAR_16);
   }
   FUNC_1(VAR_3, 0);
}
