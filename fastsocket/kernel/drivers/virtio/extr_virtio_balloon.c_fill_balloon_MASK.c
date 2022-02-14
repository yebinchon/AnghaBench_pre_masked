
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_balloon {size_t num_pfns; int inflate_vq; int pages; int num_pages; int * pfns; TYPE_1__* vdev; } ;
struct page {int lru; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,char*,size_t) ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct virtio_balloon*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(struct virtio_balloon *VAR_6, size_t VAR_7)
{

 VAR_7 = FUNC_4(VAR_7, FUNC_0(VAR_6->pfns));

 for (VAR_6->num_pfns = 0; VAR_6->num_pfns < VAR_7; VAR_6->num_pfns++) {
  struct page *VAR_8 = FUNC_1(VAR_0 | VAR_3 |
     VAR_2 | VAR_4);
  if (!VAR_8) {
   if (FUNC_7())
    FUNC_2(VAR_1, &VAR_6->vdev->dev,
        "Out of puff! Can't get %zu pages\n",
        VAR_7);

   FUNC_5(200);
   break;
  }
  VAR_6->pfns[VAR_6->num_pfns] = FUNC_6(VAR_8);
  VAR_5--;
  VAR_6->num_pages++;
  FUNC_3(&VAR_8->lru, &VAR_6->pages);
 }


 if (VAR_6->num_pfns == 0)
  return;

 FUNC_8(VAR_6, VAR_6->inflate_vq);
}
