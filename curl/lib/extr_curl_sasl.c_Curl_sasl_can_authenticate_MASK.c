
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ user_passwd; } ;
struct connectdata {TYPE_1__ bits; } ;
struct SASL {int authmechs; int prefmech; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(struct SASL *VAR_3, struct connectdata *VAR_4)
{

  if(VAR_4->bits.user_passwd)
    return VAR_2;


  if(VAR_3->authmechs & VAR_3->prefmech & VAR_1)
    return VAR_2;

  return VAR_0;
}
