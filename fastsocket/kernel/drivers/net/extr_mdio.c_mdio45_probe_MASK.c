
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_if_info {int (* mdio_read ) (int ,int,int,int ) ;int prtad; int mmds; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int ,int,int,int ) ;

int FUNC_3(struct mdio_if_info *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;



 for (VAR_8 = 1; VAR_8 <= 5; VAR_8++) {

  VAR_9 = VAR_6->mdio_read(VAR_6->dev, VAR_7, VAR_8, VAR_3);
  if (VAR_9 < 0 ||
      (VAR_9 & VAR_4) != VAR_5)
   continue;


  VAR_10 = VAR_6->mdio_read(VAR_6->dev, VAR_7, VAR_8, VAR_1);
  VAR_11 = VAR_6->mdio_read(VAR_6->dev, VAR_7, VAR_8, VAR_2);
  if (VAR_10 < 0 || VAR_11 < 0)
   continue;

  VAR_6->prtad = VAR_7;
  VAR_6->mmds = VAR_10 | (VAR_11 << 16);
  return 0;
 }

 return -VAR_0;
}
