
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int width; } ;
struct TYPE_6__ {int pbo_readback_index; int* pbo_readback_valid; TYPE_1__ vp; int renderchain_data; int * pbo_readback; } ;
typedef TYPE_2__ gl_t ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(gl_t *VAR_4)
{




   GLenum VAR_5 = VAR_0;
   GLenum VAR_6 = VAR_3;


   FUNC_0(
         VAR_4->pbo_readback[VAR_4->pbo_readback_index++]);
   VAR_4->pbo_readback_index &= 3;


   VAR_4->pbo_readback_valid[VAR_4->pbo_readback_index] = 1;

   FUNC_1(VAR_4, VAR_4->renderchain_data,
         FUNC_3(VAR_4->vp.width * sizeof(uint32_t)),
         VAR_5, VAR_6, ((void*)0));
   FUNC_2();
}
