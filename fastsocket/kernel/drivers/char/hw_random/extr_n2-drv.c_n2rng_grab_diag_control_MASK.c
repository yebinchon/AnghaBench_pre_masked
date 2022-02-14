
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n2rng {TYPE_1__* op; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct n2rng*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct n2rng *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = -VAR_1;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 != -VAR_0)
   break;

  if (++VAR_4 > 100) {
   FUNC_0(&VAR_2->op->dev,
    "Grab diag control timeout.\n");
   return -VAR_1;
  }

  FUNC_2(1);
 }

 return VAR_5;
}
