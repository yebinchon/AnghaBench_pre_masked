
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; int pixmap; scalar_t__ egl_image; } ;
typedef int KHRN_IMAGE_WRAP_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
   KHRN_IMAGE_WRAP_T VAR_3;

   FUNC_4("send_bound_pixmap %d %d", VAR_2, (int)VAR_1[VAR_2].egl_image);

   FUNC_3(VAR_2 >= 0 && VAR_2 < VAR_0);
   FUNC_3(VAR_1[VAR_2].used);

   FUNC_1(VAR_1[VAR_2].pixmap, &VAR_3);
   FUNC_2(VAR_1[VAR_2].egl_image, &VAR_3);
   FUNC_0(VAR_1[VAR_2].pixmap, &VAR_3);
}
