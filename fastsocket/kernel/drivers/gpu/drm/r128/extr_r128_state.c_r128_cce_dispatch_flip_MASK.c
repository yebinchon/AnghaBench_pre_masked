
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {scalar_t__ current_page; TYPE_1__* sarea_priv; int front_offset; int back_offset; } ;
typedef TYPE_2__ drm_r128_private_t ;
struct TYPE_4__ {scalar_t__ pfCurrentPage; int last_frame; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_3)
{
 drm_r128_private_t *VAR_4 = VAR_3->dev_private;
 VAR_2;
 FUNC_3("page=%d pfCurrentPage=%d\n",
    VAR_4->current_page, VAR_4->sarea_priv->pfCurrentPage);







 FUNC_1(4);

 FUNC_5();
 FUNC_4(FUNC_2(VAR_0, 0));

 if (VAR_4->current_page == 0)
  FUNC_4(VAR_4->back_offset);
 else
  FUNC_4(VAR_4->front_offset);

 FUNC_0();





 VAR_4->sarea_priv->last_frame++;
 VAR_4->sarea_priv->pfCurrentPage = VAR_4->current_page =
     1 - VAR_4->current_page;

 FUNC_1(2);

 FUNC_4(FUNC_2(VAR_1, 0));
 FUNC_4(VAR_4->sarea_priv->last_frame);

 FUNC_0();
}
