
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
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct ipw2100_priv *VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8;

 u32 VAR_9 = 0x76543210;
 u32 VAR_10 = 0xFEDCBA98;


 for (VAR_8 = VAR_3;
      VAR_8 < VAR_2; VAR_8 += sizeof(u32)) {
  FUNC_0(VAR_5->net_dev, VAR_8, &VAR_6);
  if (VAR_6 != VAR_1)
   return -VAR_0;
 }


 for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {

  FUNC_1(VAR_5->net_dev, VAR_4 + 0x32,
          VAR_9);
  FUNC_1(VAR_5->net_dev, VAR_4 + 0x36,
          VAR_10);
  FUNC_0(VAR_5->net_dev, VAR_4 + 0x32,
         &VAR_6);
  FUNC_0(VAR_5->net_dev, VAR_4 + 0x36,
         &VAR_7);
  if (VAR_9 == VAR_6 && VAR_10 == VAR_7)
   return 0;
 }

 return -VAR_0;
}
