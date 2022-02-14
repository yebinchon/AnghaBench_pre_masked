
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videobuf_buffer {int size; } ;
struct mx1_camera_dev {TYPE_1__* res; int dma_chan; TYPE_4__* active; TYPE_3__* icd; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct videobuf_buffer vb; } ;
struct TYPE_6__ {struct device* parent; } ;
struct TYPE_7__ {TYPE_2__ dev; } ;
struct TYPE_5__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct videobuf_buffer*) ;

__attribute__((used)) static int FUNC_4(struct mx1_camera_dev *VAR_3)
{
 struct videobuf_buffer *VAR_4 = &VAR_3->active->vb;
 struct device *VAR_5 = VAR_3->icd->dev.parent;
 int VAR_6;

 if (FUNC_2(!VAR_3->active)) {
  FUNC_0(VAR_5, "DMA End IRQ with no active buffer\n");
  return -VAR_2;
 }


 VAR_6 = FUNC_1(VAR_3->dma_chan,
  FUNC_3(VAR_4),
  VAR_4->size, VAR_3->res->start +
  VAR_0, VAR_1);
 if (FUNC_2(VAR_6))
  FUNC_0(VAR_5, "Failed to setup DMA sg list\n");

 return VAR_6;
}
