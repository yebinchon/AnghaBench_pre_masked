
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct lm8323_chip {TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lm8323_chip *VAR_1, u8 VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5;





 VAR_5 = FUNC_2(VAR_1->client, &VAR_2, 1);
 if (FUNC_3(VAR_5 == -VAR_0))
  VAR_5 = FUNC_2(VAR_1->client, &VAR_2, 1);
 if (FUNC_3(VAR_5 != 1)) {
  FUNC_0(&VAR_1->client->dev, "sending read cmd 0x%02x failed\n",
   VAR_2);
  return 0;
 }

 VAR_5 = FUNC_1(VAR_1->client, VAR_3, VAR_4);
 if (FUNC_3(VAR_5 != VAR_4))
  FUNC_0(&VAR_1->client->dev, "wanted %d bytes, got %d\n",
   VAR_4, VAR_5);

 return VAR_5;
}
