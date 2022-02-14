
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {int pitch; int current_page; int back_offset; int front_offset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_3__ {int pf_current_page; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_8)
{
 drm_i810_private_t *VAR_9 = VAR_8->dev_private;
 int VAR_10 = VAR_9->pitch;
 VAR_6;

 FUNC_2("page=%d pfCurrentPage=%d\n",
    VAR_9->current_page,
    VAR_9->sarea_priv->pf_current_page);

 FUNC_4(VAR_8);

 FUNC_1(2);
 FUNC_3(VAR_5 | VAR_4 | VAR_3);
 FUNC_3(0);
 FUNC_0();

 FUNC_1(VAR_2 + 2);




 FUNC_3(VAR_0 | (VAR_10 << 5) );
 if (VAR_9->current_page == 0) {
  FUNC_3(VAR_9->back_offset);
  VAR_9->current_page = 1;
 } else {
  FUNC_3(VAR_9->front_offset);
  VAR_9->current_page = 0;
 }
 FUNC_3(0);
 FUNC_0();

 FUNC_1(2);
 FUNC_3(VAR_1 | VAR_7);
 FUNC_3(0);
 FUNC_0();





 VAR_9->sarea_priv->pf_current_page = VAR_9->current_page;

}
