
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int largest_pbuffer; int mipmap_texture; int mipmap_level; int swap_behavior; int multisample_resolve; int texture_format; int texture_target; int width; int type; int config; int colorspace; int alphaformat; } ;
typedef int EGLint ;
typedef TYPE_1__ EGL_SURFACE_T ;
typedef int EGLBoolean ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;

EGLBoolean FUNC_1(EGL_SURFACE_T *VAR_11, EGLint VAR_12, EGLint *VAR_13)
{
   switch (VAR_12) {
   case 130:
      if (VAR_11->alphaformat == VAR_8)
         *VAR_13 = VAR_4;
      else
         *VAR_13 = VAR_5;
      return VAR_2;
   case 129:
      if (VAR_11->colorspace == VAR_10)
         *VAR_13 = VAR_7;
      else
         *VAR_13 = VAR_6;
      return VAR_2;
   case 143:
      *VAR_13 = (EGLint)(size_t)VAR_11->config;
      return VAR_2;
   case 142:
      *VAR_13 = VAR_11->height;
      return VAR_2;
   case 141:
   case 131:
      *VAR_13 = VAR_3;
      return VAR_2;
   case 140:

      if (VAR_11->type == VAR_9)
         *VAR_13 = VAR_11->largest_pbuffer;
      return VAR_2;
   case 138:


      if (VAR_11->type == VAR_9)
         *VAR_13 = VAR_11->mipmap_texture;
      return VAR_2;
   case 139:


      if (VAR_11->type == VAR_9)
         *VAR_13 = VAR_11->mipmap_level;
      return VAR_2;
   case 136:
      *VAR_13 = VAR_0;
      return VAR_2;
   case 135:
      *VAR_13 = FUNC_0(VAR_11);
      return VAR_2;
   case 134:
      *VAR_13 = VAR_11->swap_behavior;
      return VAR_2;
   case 137:
      *VAR_13 = VAR_11->multisample_resolve;
      return VAR_2;
   case 133:


      if (VAR_11->type == VAR_9)
         *VAR_13 = VAR_11->texture_format;
      return VAR_2;
   case 132:


      if (VAR_11->type == VAR_9)
         *VAR_13 = VAR_11->texture_target;
      return VAR_2;
   case 128:
      *VAR_13 = VAR_11->width;
      return VAR_2;
   default:
      return VAR_1;
   }
}
