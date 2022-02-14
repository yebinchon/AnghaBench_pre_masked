
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct frame {int descriptor_pool_dma; int descriptor_pool; int descriptor_pool_size; TYPE_2__* video; int header_pool_dma; int header_pool; } ;
struct TYPE_4__ {TYPE_1__* ohci; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct frame*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct frame *VAR_1)
{
 FUNC_1(VAR_1->video->ohci->dev, VAR_0, VAR_1->header_pool, VAR_1->header_pool_dma);
 FUNC_1(VAR_1->video->ohci->dev, VAR_1->descriptor_pool_size, VAR_1->descriptor_pool, VAR_1->descriptor_pool_dma);
 FUNC_0(VAR_1);
}
