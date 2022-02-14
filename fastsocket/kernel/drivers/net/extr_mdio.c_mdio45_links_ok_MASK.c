
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdio_if_info {int (* mdio_read ) (int ,int ,int,int ) ;int prtad; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;

int FUNC_4(const struct mdio_if_info *VAR_9, u32 VAR_10)
{
 int VAR_11, VAR_12;

 if (!VAR_10) {

  VAR_12 = VAR_9->mdio_read(VAR_9->dev, VAR_9->prtad,
          VAR_2, VAR_7);
  return VAR_12 >= 0 && !(VAR_12 & VAR_8);
 }

 for (VAR_11 = 0; VAR_10; VAR_11++) {
  if (VAR_10 & (1 << VAR_11)) {
   VAR_10 &= ~(1 << VAR_11);


   VAR_9->mdio_read(VAR_9->dev, VAR_9->prtad,
     VAR_11, VAR_4);
   if (VAR_11 == VAR_3 || VAR_11 == VAR_1 ||
       VAR_11 == VAR_2 || VAR_11 == VAR_0)
    VAR_9->mdio_read(VAR_9->dev, VAR_9->prtad,
      VAR_11, VAR_7);


   VAR_12 = VAR_9->mdio_read(VAR_9->dev, VAR_9->prtad,
           VAR_11, VAR_4);
   if (VAR_12 < 0 ||
       (VAR_12 & (VAR_5 | VAR_6)) !=
       VAR_6)
    return 0;
  }
 }

 return 1;
}
