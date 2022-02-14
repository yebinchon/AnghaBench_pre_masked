
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ model; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_7, unsigned long VAR_8, void *VAR_9)
{
 char *VAR_10;

 if (VAR_6)
  return VAR_2;

 VAR_6 = 1;
 switch (VAR_8) {
 case 128: VAR_10 = "SYSTEM RESTART";
    break;
 case 130: VAR_10 = "SYSTEM HALT";
    break;
 case 129: VAR_10 = "SYSTEM POWER OFF";
    break;
 default: return VAR_1;
 }


 if (VAR_5) {
  FUNC_0(&VAR_4);
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }

 if (VAR_3.model == VAR_0)
  FUNC_2(VAR_10);
 else
  if (&FUNC_3)
   FUNC_3(0xff);

 return VAR_2;
}
