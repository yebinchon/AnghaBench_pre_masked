
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct if_sdio_card {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct sk_buff* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (char*,int *,unsigned int) ;
 char* FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct if_sdio_card *VAR_5,
  u8 *VAR_6, unsigned VAR_7)
{
 int VAR_8;
 struct sk_buff *VAR_9;
 char *VAR_10;

 FUNC_1(VAR_2);

 if (VAR_7 > VAR_3) {
  FUNC_3("response packet too large (%d bytes)\n",
   (int)VAR_7);
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_0(VAR_3 + VAR_4);
 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_7(VAR_9, VAR_4);

 VAR_10 = FUNC_6(VAR_9, VAR_7);

 FUNC_5(VAR_10, VAR_6, VAR_7);

 FUNC_4(VAR_5->priv, VAR_9);

 VAR_8 = 0;

out:
 FUNC_2(VAR_2, "ret %d", VAR_8);

 return VAR_8;
}
