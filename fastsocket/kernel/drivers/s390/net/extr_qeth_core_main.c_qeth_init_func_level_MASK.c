
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int func_level; } ;
struct TYPE_3__ {int enabled; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ ipato; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct qeth_card *VAR_3)
{
 switch (VAR_3->info.type) {
 case 130:
  if (VAR_3->ipato.enabled)
   VAR_3->info.func_level =
    VAR_1;
  else
   VAR_3->info.func_level =
    VAR_0;
  break;
 case 129:
 case 128:
  VAR_3->info.func_level = VAR_2;
  break;
 default:
  break;
 }
}
