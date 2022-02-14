
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lbs_private {scalar_t__ resp_idx; unsigned int* resp_len; int driver_lock; int * resp_buf; } ;
struct if_sdio_card {struct lbs_private* priv; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct lbs_private*,size_t) ;
 int FUNC_5 (int ,size_t*,unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct if_sdio_card *VAR_3,
  u8 *VAR_4, unsigned VAR_5)
{
 struct lbs_private *VAR_6 = VAR_3->priv;
 int VAR_7;
 unsigned long VAR_8;
 u8 VAR_9;

 FUNC_1(VAR_2);

 if (VAR_5 > VAR_1) {
  FUNC_3("response packet too large (%d bytes)\n",
   (int)VAR_5);
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_6(&VAR_6->driver_lock, VAR_8);

 VAR_9 = (VAR_6->resp_idx == 0) ? 1 : 0;
 FUNC_0(VAR_6->resp_len[VAR_9]);
 VAR_6->resp_len[VAR_9] = VAR_5;
 FUNC_5(VAR_6->resp_buf[VAR_9], VAR_4, VAR_5);
 FUNC_4(VAR_6, VAR_9);

 FUNC_7(&VAR_3->priv->driver_lock, VAR_8);

 VAR_7 = 0;

out:
 FUNC_2(VAR_2, "ret %d", VAR_7);
 return VAR_7;
}
