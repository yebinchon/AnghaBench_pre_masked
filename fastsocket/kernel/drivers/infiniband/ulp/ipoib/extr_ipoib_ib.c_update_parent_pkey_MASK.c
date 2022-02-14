
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ipoib_dev_priv {int pkey; TYPE_1__* dev; int port; int ca; } ;
struct TYPE_2__ {int* broadcast; } ;


 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*,int,int) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct ipoib_dev_priv *VAR_0)
{
 int VAR_1;
 u16 VAR_2;

 VAR_2 = VAR_0->pkey;
 VAR_1 = FUNC_0(VAR_0->ca, VAR_0->port, 0, &VAR_0->pkey);
 if (VAR_1) {
  FUNC_2(VAR_0, "ib_query_pkey port %d failed (ret = %d)\n",
      VAR_0->port, VAR_1);
  return VAR_1;
 }

 VAR_0->pkey |= 0x8000;

 if (VAR_2 != VAR_0->pkey) {
  FUNC_1(VAR_0, "pkey changed from 0x%x to 0x%x\n",
     VAR_2, VAR_0->pkey);




  VAR_0->dev->broadcast[8] = VAR_0->pkey >> 8;
  VAR_0->dev->broadcast[9] = VAR_0->pkey & 0xff;
  return 0;
 }

 return 1;
}
