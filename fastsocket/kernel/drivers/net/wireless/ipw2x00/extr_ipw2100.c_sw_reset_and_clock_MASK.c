
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_10)
{
 int VAR_11;
 u32 VAR_12;


 FUNC_2(VAR_10->net_dev, VAR_7,
         VAR_5);


 for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  FUNC_1(VAR_9);


  FUNC_0(VAR_10->net_dev, VAR_7, &VAR_12);
  if (VAR_12 & VAR_4)
   break;
 }

 if (VAR_11 == 1000)
  return -VAR_0;



 FUNC_2(VAR_10->net_dev, VAR_6,
         VAR_3);


 for (VAR_11 = 0; VAR_11 < 10000; VAR_11++) {
  FUNC_1(VAR_8 * 4);


  FUNC_0(VAR_10->net_dev, VAR_6, &VAR_12);
  if (VAR_12 & VAR_1)
   break;
 }

 if (VAR_11 == 10000)
  return -VAR_0;


 FUNC_0(VAR_10->net_dev, VAR_6, &VAR_12);
 FUNC_2(VAR_10->net_dev, VAR_6,
         VAR_12 | VAR_2);

 return 0;
}
