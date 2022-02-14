
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mdio_if_info {int (* mdio_read ) (int ,int ,int ,int ) ;int prtad; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(const struct mdio_if_info *VAR_9, u16 VAR_10)
{
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_12 = VAR_9->mdio_read(VAR_9->dev, VAR_9->prtad, VAR_8, VAR_10);
 if (VAR_12 & VAR_7)
  VAR_11 |= VAR_3;
 if (VAR_12 & VAR_6)
  VAR_11 |= VAR_2;
 if (VAR_12 & VAR_5)
  VAR_11 |= VAR_1;
 if (VAR_12 & VAR_4)
  VAR_11 |= VAR_0;
 return VAR_11;
}
