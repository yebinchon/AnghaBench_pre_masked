
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int y; int x; } ;
struct TYPE_5__ {TYPE_1__ vp; } ;
typedef TYPE_2__ gl1_t ;
typedef int GLvoid ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(
      gl1_t *VAR_3,
      unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      void *VAR_7)
{

   FUNC_0(VAR_1, VAR_4);
   FUNC_0(VAR_2, 0);
   FUNC_1(VAR_0);

   FUNC_2(VAR_3->vp.x, VAR_3->vp.y,
         VAR_3->vp.width, VAR_3->vp.height,
         (GLenum)VAR_5, (GLenum)VAR_6, (GLvoid*)VAR_7);
}
