
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int status; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ipw2100_priv*) ;
 int FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ipw2100_priv *VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 FUNC_0("Power cycling the hardware.\n");

 FUNC_1(VAR_11);


 FUNC_5(VAR_11->net_dev, VAR_4,
         VAR_2);



 VAR_13 = 5;
 do {
  FUNC_4(VAR_5);
  FUNC_3(VAR_11->net_dev, VAR_4, &VAR_12);

  if (VAR_12 & VAR_1)
   break;
 } while (--VAR_13);

 VAR_11->status &= ~VAR_9;

 if (!VAR_13) {
  FUNC_0
      ("exit - waited too long for master assert stop\n");
  return -VAR_0;
 }

 FUNC_5(VAR_11->net_dev, VAR_4,
         VAR_3);


 FUNC_2(VAR_11);


 VAR_11->status &= ~(VAR_10 | VAR_7 |
     VAR_6 | VAR_8);

 return 0;
}
