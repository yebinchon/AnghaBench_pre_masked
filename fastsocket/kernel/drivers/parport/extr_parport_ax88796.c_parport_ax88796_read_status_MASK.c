
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct ax_drvdata {int spp_spr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct ax_drvdata* FUNC_0 (struct parport*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned char
FUNC_2(struct parport *VAR_10)
{
 struct ax_drvdata *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12 = FUNC_1(VAR_11->spp_spr);
 unsigned int VAR_13 = 0;

 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_6;

 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_5;

 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_7;

 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_9;

 if (VAR_12 & VAR_3)
  VAR_13 |= VAR_8;

 return VAR_13;
}
