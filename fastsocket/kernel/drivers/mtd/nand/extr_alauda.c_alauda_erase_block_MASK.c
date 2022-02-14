
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mtd_info {struct alauda* priv; } ;
struct alauda_sg_request {int ** urb; int comp; } ;
struct alauda {int port; int card_mutex; int bulk_in; int dev; int bulk_out; TYPE_1__* card; } ;
typedef int loff_t ;
struct TYPE_2__ {int blockshift; } ;


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
 int FUNC_7 (int *,int ,int ,int*,int,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_7, loff_t VAR_8)
{
 struct alauda_sg_request VAR_9;
 struct alauda *VAR_10 = VAR_7->priv;
 u32 VAR_11 = VAR_8 >> VAR_10->card->blockshift;
 u8 VAR_12[] = {
  VAR_0, VAR_1, FUNC_0(VAR_11),
  FUNC_2(VAR_11), 0, FUNC_1(VAR_11), 0x02, 0, VAR_10->port
 };
 u8 VAR_13[2];
 int VAR_14, VAR_15;

 for (VAR_14=0; VAR_14<2; VAR_14++)
  VAR_9.urb[VAR_14] = ((void*)0);

 VAR_15 = -VAR_2;
 for (VAR_14=0; VAR_14<2; VAR_14++) {
  VAR_9.urb[VAR_14] = FUNC_6(0, VAR_4);
  if (!VAR_9.urb[VAR_14])
   goto out;
 }
 FUNC_3(&VAR_9.comp);
 FUNC_7(VAR_9.urb[0], VAR_10->dev, VAR_10->bulk_out, VAR_12, 9,
   VAR_6, ((void*)0));
 FUNC_7(VAR_9.urb[1], VAR_10->dev, VAR_10->bulk_in, VAR_13, 2,
   VAR_6, &VAR_9.comp);

 FUNC_4(&VAR_10->card_mutex);
 for (VAR_14=0; VAR_14<2; VAR_14++) {
  VAR_15 = FUNC_10(VAR_9.urb[VAR_14], VAR_4);
  if (VAR_15)
   goto cancel;
 }
 if (!FUNC_11(&VAR_9.comp, VAR_5)) {
  VAR_15 = -VAR_3;
cancel:
  for (VAR_14=0; VAR_14<2; VAR_14++) {
   FUNC_9(VAR_9.urb[VAR_14]);
  }
 }
 FUNC_5(&VAR_10->card_mutex);

out:
 FUNC_8(VAR_9.urb[0]);
 FUNC_8(VAR_9.urb[1]);
 return VAR_15;
}
