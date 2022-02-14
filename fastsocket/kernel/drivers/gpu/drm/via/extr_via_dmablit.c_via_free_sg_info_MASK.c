
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int state; int num_desc_pages; int num_pages; scalar_t__ free_on_sequence; struct page** bounce_buffer; struct page** pages; int direction; int ** desc_pages; } ;
typedef TYPE_1__ drm_via_sg_info_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;




 int VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page**) ;
 int FUNC_6 (struct pci_dev*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(struct pci_dev *VAR_2, drm_via_sg_info_t *VAR_3)
{
 struct page *VAR_4;
 int VAR_5;

 switch (VAR_3->state) {
 case 130:
  FUNC_6(VAR_2, VAR_3);
 case 131:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_desc_pages; ++VAR_5) {
   if (VAR_3->desc_pages[VAR_5] != ((void*)0))
    FUNC_2((unsigned long)VAR_3->desc_pages[VAR_5]);
  }
  FUNC_3(VAR_3->desc_pages);
 case 128:
  for (VAR_5 = 0; VAR_5 < VAR_3->num_pages; ++VAR_5) {
   if (((void*)0) != (VAR_4 = VAR_3->pages[VAR_5])) {
    if (!FUNC_0(VAR_4) && (VAR_0 == VAR_3->direction))
     FUNC_1(VAR_4);
    FUNC_4(VAR_4);
   }
  }
 case 129:
  FUNC_5(VAR_3->pages);
 default:
  VAR_3->state = VAR_1;
 }
 FUNC_5(VAR_3->bounce_buffer);
 VAR_3->bounce_buffer = ((void*)0);
 VAR_3->free_on_sequence = 0;
}
