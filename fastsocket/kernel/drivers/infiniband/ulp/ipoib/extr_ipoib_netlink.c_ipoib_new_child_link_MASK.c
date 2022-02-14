
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int pkey; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_dev_priv*,int,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct net_device*,struct nlattr**,struct nlattr**) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7,
          struct nlattr *VAR_8[], struct nlattr *VAR_9[])
{
 struct net_device *VAR_10;
 struct ipoib_dev_priv *VAR_11;
 u16 VAR_12;
 int VAR_13;

 if (!VAR_8[VAR_3])
  return -VAR_0;

 VAR_10 = FUNC_0(&VAR_6, FUNC_7(VAR_8[VAR_3]));
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_10);

 if (FUNC_8(VAR_4, &VAR_11->flags)) {
  FUNC_4(VAR_11, "child creation disallowed for child devices\n");
  return -VAR_0;
 }

 if (!VAR_9 || !VAR_9[VAR_2]) {
  FUNC_3(VAR_11, "no pkey specified, using parent pkey\n");
  VAR_12 = VAR_11->pkey;
 } else
  VAR_12 = FUNC_6(VAR_9[VAR_2]);

 if (VAR_12 == 0 || VAR_12 == 0x8000)
  return -VAR_0;





 VAR_12 |= 0x8000;

 VAR_13 = FUNC_1(VAR_11, FUNC_5(VAR_7), VAR_12, VAR_5);

 if (!VAR_13 && VAR_9)
  VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_9);
 return VAR_13;
}
