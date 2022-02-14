
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txx9dmac_dev {int descsize; } ;
struct TYPE_2__ {int flags; int phys; } ;
struct txx9dmac_desc {TYPE_1__ txd; int desc_node; } ;
struct list_head {int dummy; } ;
struct txx9dmac_chan {int chan; struct list_head queue; struct txx9dmac_dev* ddev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct txx9dmac_chan*,struct txx9dmac_desc*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct list_head*) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (struct txx9dmac_chan*) ;
 struct txx9dmac_desc* FUNC_7 (struct txx9dmac_chan*) ;
 struct txx9dmac_desc* FUNC_8 (struct txx9dmac_desc*) ;

__attribute__((used)) static void FUNC_9(struct txx9dmac_chan *VAR_2, struct list_head *VAR_3)
{
 struct txx9dmac_dev *VAR_4 = VAR_2->ddev;
 struct txx9dmac_desc *VAR_5;
 struct txx9dmac_desc *VAR_6 = ((void*)0);

 FUNC_0(!FUNC_4(VAR_3));
 do {
  VAR_5 = FUNC_7(VAR_2);
  if (VAR_6) {
   FUNC_2(VAR_2, VAR_6, VAR_5->txd.phys);
   FUNC_3(FUNC_1(&VAR_2->chan),
    VAR_6->txd.phys, VAR_4->descsize,
    VAR_1);
  }
  VAR_6 = FUNC_8(VAR_5);
  FUNC_5(&VAR_5->desc_node, VAR_3);

  if ((VAR_5->txd.flags & VAR_0) &&
      !FUNC_6(VAR_2))
   break;
 } while (!FUNC_4(&VAR_2->queue));
}
