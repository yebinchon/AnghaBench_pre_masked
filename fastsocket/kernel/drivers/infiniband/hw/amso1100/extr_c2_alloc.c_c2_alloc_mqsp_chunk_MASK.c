
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sp_chunk {int* shared_ptr; scalar_t__ head; int * next; int dma_addr; } ;
struct c2_dev {TYPE_1__* pcidev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sp_chunk* FUNC_0 (int *,int,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sp_chunk*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct c2_dev *VAR_3, gfp_t VAR_4,
          struct sp_chunk **VAR_5)
{
 int VAR_6;
 struct sp_chunk *VAR_7;
 dma_addr_t VAR_8;

 VAR_7 = FUNC_0(&VAR_3->pcidev->dev, VAR_1,
          &VAR_8, VAR_4);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->dma_addr = VAR_8;
 FUNC_1(VAR_7, VAR_2, VAR_7->dma_addr);

 VAR_7->next = ((void*)0);
 VAR_7->head = 0;


 for (VAR_6 = 0;
      VAR_6 < (VAR_1 - sizeof(struct sp_chunk) -
    sizeof(u16)) / sizeof(u16) - 1;
      VAR_6++) {
  VAR_7->shared_ptr[VAR_6] = VAR_6 + 1;
 }

 VAR_7->shared_ptr[VAR_6] = 0xFFFF;

 *VAR_5 = VAR_7;
 return 0;
}
