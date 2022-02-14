
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct texture_image {int pixels; int height; int width; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;
typedef int GLuint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int ,int ,int ,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(
      struct texture_image *VAR_1,
      enum texture_filter_type VAR_2,
      uintptr_t *VAR_3)
{

   FUNC_1(1, (GLuint*)VAR_3);
   FUNC_0((GLuint)*VAR_3,
         VAR_0, VAR_2,
         4 ,
         VAR_1->width, VAR_1->height, VAR_1->pixels,
         sizeof(uint32_t)
         );
}
