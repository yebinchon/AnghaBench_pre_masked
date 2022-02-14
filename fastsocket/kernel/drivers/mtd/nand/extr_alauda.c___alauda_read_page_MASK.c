
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mtd_info {int writesize; struct alauda* priv; } ;
struct alauda_sg_request {int ** urb; int comp; } ;
struct alauda {int pagemask; int port; int card_mutex; int bulk_in; int dev; int bulk_out; TYPE_1__* card; } ;
typedef int loff_t ;
struct TYPE_2__ {int blockshift; int pageshift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int ,void*,int,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_7, loff_t VAR_8, void *VAR_9,
  void *VAR_10)
{
 struct alauda_sg_request VAR_11;
 struct alauda *VAR_12 = VAR_7->priv;
 u32 VAR_13 = VAR_8 >> VAR_12->card->blockshift;
 u32 VAR_14 = (VAR_8 >> VAR_12->card->pageshift) & VAR_12->pagemask;
 u8 VAR_15[] = {
  VAR_0, VAR_1, FUNC_0(VAR_13),
  FUNC_2(VAR_13), 0, FUNC_1(VAR_13) + VAR_14, 1, 0, VAR_12->port
 };
 int VAR_16, VAR_17;

 for (VAR_16=0; VAR_16<3; VAR_16++)
  VAR_11.urb[VAR_16] = ((void*)0);

 VAR_17 = -VAR_2;
 for (VAR_16=0; VAR_16<3; VAR_16++) {
  VAR_11.urb[VAR_16] = FUNC_6(0, VAR_4);
  if (!VAR_11.urb[VAR_16])
   goto out;
 }
 FUNC_3(&VAR_11.comp);
 FUNC_7(VAR_11.urb[0], VAR_12->dev, VAR_12->bulk_out, VAR_15, 9,
   VAR_6, ((void*)0));
 FUNC_7(VAR_11.urb[1], VAR_12->dev, VAR_12->bulk_in, VAR_9, VAR_7->writesize,
   VAR_6, ((void*)0));
 FUNC_7(VAR_11.urb[2], VAR_12->dev, VAR_12->bulk_in, VAR_10, 16,
   VAR_6, &VAR_11.comp);

 FUNC_4(&VAR_12->card_mutex);
 for (VAR_16=0; VAR_16<3; VAR_16++) {
  VAR_17 = FUNC_10(VAR_11.urb[VAR_16], VAR_4);
  if (VAR_17)
   goto cancel;
 }
 if (!FUNC_11(&VAR_11.comp, VAR_5)) {
  VAR_17 = -VAR_3;
cancel:
  for (VAR_16=0; VAR_16<3; VAR_16++) {
   FUNC_9(VAR_11.urb[VAR_16]);
  }
 }
 FUNC_5(&VAR_12->card_mutex);

out:
 FUNC_8(VAR_11.urb[0]);
 FUNC_8(VAR_11.urb[1]);
 FUNC_8(VAR_11.urb[2]);
 return VAR_17;
}
