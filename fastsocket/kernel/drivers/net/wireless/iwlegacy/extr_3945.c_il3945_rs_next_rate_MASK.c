
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sta_supp_rates; } ;
struct il_priv {int band; TYPE_1__ _3945; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct il_priv*) ;

int
FUNC_2(struct il_priv *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_0(VAR_7);

 switch (VAR_6->band) {
 case 128:
  if (VAR_7 == VAR_2)
   VAR_8 = VAR_5;
  else if (VAR_7 == VAR_4)
   VAR_8 = VAR_4;
  break;
 case 129:
  if (!(VAR_6->_3945.sta_supp_rates & VAR_0) &&
      FUNC_1(VAR_6)) {
   if (VAR_7 == VAR_1)
    VAR_8 = VAR_3;
  }
  break;

 default:
  break;
 }

 return VAR_8;
}
