
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mdio_if_info {int (* mdio_read ) (int ,int,int,int ) ;int (* mdio_write ) (int ,int,int,int ,int) ;int dev; } ;


 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int,int,int ,int) ;

int FUNC_2(const struct mdio_if_info *VAR_0,
    int VAR_1, int VAR_2, u16 VAR_3, int VAR_4,
    bool VAR_5)
{
 int VAR_6 = VAR_0->mdio_read(VAR_0->dev, VAR_1, VAR_2, VAR_3);
 int VAR_7;

 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_5)
  VAR_7 = VAR_6 | VAR_4;
 else
  VAR_7 = VAR_6 & ~VAR_4;
 if (VAR_6 == VAR_7)
  return 0;
 return VAR_0->mdio_write(VAR_0->dev, VAR_1, VAR_2, VAR_3, VAR_7);
}
