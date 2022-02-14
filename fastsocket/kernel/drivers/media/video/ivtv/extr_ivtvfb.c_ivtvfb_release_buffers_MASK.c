
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {struct osd_info* pseudo_palette; TYPE_2__ cmap; } ;
struct osd_info {scalar_t__ fb_start_aligned_physaddr; scalar_t__ fb_end_aligned_physaddr; TYPE_1__ ivtvfb_info; } ;
struct ivtv {struct osd_info* osd_info; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct osd_info*) ;
 int FUNC_2 (int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (struct ivtv *VAR_0)
{
 struct osd_info *VAR_1 = VAR_0->osd_info;


 if (VAR_1->ivtvfb_info.cmap.len)
  FUNC_0(&VAR_1->ivtvfb_info.cmap);


 if (VAR_1->ivtvfb_info.pseudo_palette)
  FUNC_1(VAR_1->ivtvfb_info.pseudo_palette);
 FUNC_1(VAR_1);
 VAR_0->osd_info = ((void*)0);
}
