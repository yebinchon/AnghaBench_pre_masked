
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_buffer {int page_count; int direction; int ** pages; } ;
struct fw_card {int device; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int **) ;
 int ** FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct fw_iso_buffer *VAR_5, struct fw_card *VAR_6,
         int VAR_7, enum dma_data_direction VAR_8)
{
 int VAR_9, VAR_10;
 dma_addr_t VAR_11;

 VAR_5->page_count = VAR_7;
 VAR_5->direction = VAR_8;

 VAR_5->pages = FUNC_6(VAR_7 * sizeof(VAR_5->pages[0]),
    VAR_2);
 if (VAR_5->pages == ((void*)0))
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_5->page_count; VAR_9++) {
  VAR_5->pages[VAR_9] = FUNC_1(VAR_2 | VAR_1 | VAR_4);
  if (VAR_5->pages[VAR_9] == ((void*)0))
   goto out_pages;

  VAR_11 = FUNC_2(VAR_6->device, VAR_5->pages[VAR_9],
           0, VAR_3, VAR_8);
  if (FUNC_3(VAR_6->device, VAR_11)) {
   FUNC_0(VAR_5->pages[VAR_9]);
   goto out_pages;
  }
  FUNC_8(VAR_5->pages[VAR_9], VAR_11);
 }

 return 0;

 out_pages:
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = FUNC_7(VAR_5->pages[VAR_10]);
  FUNC_4(VAR_6->device, VAR_11,
          VAR_3, VAR_8);
  FUNC_0(VAR_5->pages[VAR_10]);
 }
 FUNC_5(VAR_5->pages);
 out:
 VAR_5->pages = ((void*)0);

 return -VAR_0;
}
