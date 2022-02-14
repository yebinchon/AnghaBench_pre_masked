
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_user_dma {int page_count; int * map; scalar_t__ SG_length; int SGlist; } ;
struct ivtv {int pdev; struct ivtv_user_dma udma; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ivtv*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ivtv *VAR_1)
{
 struct ivtv_user_dma *VAR_2 = &VAR_1->udma;
 int VAR_3;

 FUNC_0("ivtv_unmap_user_dma\n");


 if (VAR_2->page_count == 0)
  return;


 if (VAR_2->SG_length) {
  FUNC_2(VAR_1->pdev, VAR_2->SGlist, VAR_2->page_count, VAR_0);
  VAR_2->SG_length = 0;
 }

 FUNC_1(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_2->page_count; VAR_3++) {
  FUNC_3(VAR_2->map[VAR_3]);
 }
 VAR_2->page_count = 0;
}
