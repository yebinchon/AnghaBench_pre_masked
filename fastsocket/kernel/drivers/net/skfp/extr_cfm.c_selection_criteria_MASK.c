
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s_smc {TYPE_2__* y; } ;
struct s_phy {void* wc_flag; TYPE_1__* mib; } ;
struct TYPE_4__ {int cf_join; } ;
struct TYPE_3__ {int fddiPORTMy_Type; } ;


 void* VAR_0 ;
 size_t VAR_1 ;


 int FUNC_0 (struct s_smc*) ;

 void* VAR_2 ;


__attribute__((used)) static void FUNC_1 (struct s_smc *VAR_3, struct s_phy *VAR_4)
{

 switch (VAR_4->mib->fddiPORTMy_Type) {
 case 131:
  if ( !FUNC_0(VAR_3) && VAR_3->y[VAR_1].cf_join ) {
   VAR_4->wc_flag = VAR_2 ;
  } else {
   VAR_4->wc_flag = VAR_0 ;
  }

  break;
 case 130:

  VAR_4->wc_flag = VAR_0 ;
  break;
 case 128:
  VAR_4->wc_flag = VAR_0 ;
  break;
 case 129:
  VAR_4->wc_flag = VAR_0 ;
  break;
 }

}
