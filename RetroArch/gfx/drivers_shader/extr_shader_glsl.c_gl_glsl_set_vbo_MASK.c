
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,int const*,int ) ;
 int FUNC_1 (int *,int const*,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(GLfloat **VAR_2, size_t *VAR_3,
      const GLfloat *VAR_4, size_t VAR_5)
{
   if (VAR_5 > *VAR_3)
   {
      GLfloat *VAR_6 = (GLfloat*)
         FUNC_2(*VAR_2, VAR_5 * sizeof(GLfloat));
      FUNC_3(VAR_6);
      *VAR_2 = VAR_6;
   }

   FUNC_1(*VAR_2, VAR_4, VAR_5 * sizeof(GLfloat));
   FUNC_0(VAR_0, VAR_5 * sizeof(GLfloat),
         VAR_4, VAR_1);
   *VAR_3 = VAR_5;
}
