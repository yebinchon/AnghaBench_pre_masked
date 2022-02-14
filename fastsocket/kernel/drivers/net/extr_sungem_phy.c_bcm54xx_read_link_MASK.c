
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {scalar_t__ duplex; int pause; int speed; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__** VAR_10 ;
 int FUNC_0 (struct mii_phy*,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_phy *VAR_11)
{
 int VAR_12;
 u16 VAR_13;

 if (VAR_11->autoneg) {
      VAR_13 = FUNC_0(VAR_11, VAR_3);
  VAR_12 = ((VAR_13 & VAR_4) >>
        VAR_5);
  VAR_11->duplex = VAR_10[VAR_12][0] ?
   VAR_0 : VAR_1;
  VAR_11->speed = VAR_10[VAR_12][2] ?
    VAR_9 :
    (VAR_10[VAR_12][1] ?
     VAR_8 : VAR_7);
  VAR_13 = FUNC_0(VAR_11, VAR_6);
  VAR_11->pause = (VAR_11->duplex == VAR_0) &&
   ((VAR_13 & VAR_2) != 0);
 }




 return 0;
}
