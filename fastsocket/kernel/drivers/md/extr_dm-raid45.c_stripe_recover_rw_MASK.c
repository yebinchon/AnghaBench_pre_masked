
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {TYPE_1__* recover; int key; } ;
struct TYPE_2__ {int pos; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct stripe*) ;
 scalar_t__ FUNC_2 (struct stripe*) ;
 scalar_t__ FUNC_3 (struct stripe*) ;
 int FUNC_4 (struct stripe*,int*) ;
 int FUNC_5 (struct stripe*,int ) ;
 int FUNC_6 (struct stripe*,int ) ;

__attribute__((used)) static int FUNC_7(struct stripe *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;


 if (FUNC_3(VAR_0)) {
  FUNC_1(VAR_0);
  VAR_0->key = VAR_0->recover->pos;
  VAR_1 = FUNC_5(VAR_0, FUNC_4(VAR_0, &VAR_2));
  FUNC_0(!VAR_1);
 } else if (FUNC_2(VAR_0)) {
  VAR_1 = FUNC_6(VAR_0, FUNC_4(VAR_0, &VAR_2));
  FUNC_0(!VAR_1);
 }

 FUNC_0(VAR_2);
 return VAR_1;
}
