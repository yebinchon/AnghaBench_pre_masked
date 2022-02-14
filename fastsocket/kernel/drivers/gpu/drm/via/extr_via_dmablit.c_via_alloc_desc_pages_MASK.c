
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int descriptors_per_page; int num_desc_pages; int num_desc; int ** desc_pages; int state; } ;
typedef TYPE_1__ drm_via_sg_info_t ;
typedef int drm_via_descriptor_t ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int ** FUNC_2 (int,int,int ) ;

__attribute__((used)) static int
FUNC_3(drm_via_sg_info_t *VAR_4)
{
 int VAR_5;

 VAR_4->descriptors_per_page = VAR_2 / sizeof(drm_via_descriptor_t);
 VAR_4->num_desc_pages = (VAR_4->num_desc + VAR_4->descriptors_per_page - 1) /
  VAR_4->descriptors_per_page;

 if (((void*)0) == (VAR_4->desc_pages = FUNC_2(VAR_4->num_desc_pages, sizeof(void *), VAR_1)))
  return -VAR_0;

 VAR_4->state = VAR_3;
 for (VAR_5 = 0; VAR_5 < VAR_4->num_desc_pages; ++VAR_5) {
  if (((void*)0) == (VAR_4->desc_pages[VAR_5] =
        (drm_via_descriptor_t *) FUNC_1(VAR_1)))
   return -VAR_0;
 }
 FUNC_0("Allocated %d pages for %d descriptors.\n", VAR_4->num_desc_pages,
    VAR_4->num_desc);
 return 0;
}
