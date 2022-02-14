
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tex_w; unsigned int tex_h; int base_size; int * empty_buf; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_6__ {scalar_t__ egl_images; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;
typedef int GLenum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int,unsigned int,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int,int,unsigned int,int ,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(
      gl_t *VAR_1,
      gl2_renderchain_data_t *VAR_2,
      unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6)
{







   if (VAR_2->egl_images)
      return;

   FUNC_0(VAR_0,
      0,
      (GLenum)VAR_4,
      VAR_1->tex_w, VAR_1->tex_h, 0,
      (GLenum)VAR_6,
      (GLenum)VAR_5,
      VAR_1->empty_buf ? VAR_1->empty_buf : ((void*)0));

}
