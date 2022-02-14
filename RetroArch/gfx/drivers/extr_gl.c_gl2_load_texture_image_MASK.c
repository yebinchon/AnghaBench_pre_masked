
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gl_capability_enum { ____Placeholder_gl_capability_enum } gl_capability_enum ;
typedef int GLvoid ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;
typedef int GLenum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int ,scalar_t__,int ,int ,int const*) ;
 int FUNC_2 (int ,int,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(GLenum VAR_4,
      GLint VAR_5,
      GLint VAR_6,
      GLsizei VAR_7,
      GLsizei VAR_8,
      GLint VAR_9,
      GLenum VAR_10,
      GLenum VAR_11,
      const GLvoid * VAR_12)
{




   enum gl_capability_enum VAR_13 = VAR_2;


   if (FUNC_4(VAR_13) && VAR_6 != VAR_0)
   {
      FUNC_0(&VAR_6);



      FUNC_2 (VAR_4, 1, VAR_6, VAR_7, VAR_8);

   }
   else

   {



         FUNC_0(&VAR_6);
      FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
            VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
   }
}
