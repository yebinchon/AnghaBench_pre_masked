
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct stripe {TYPE_1__ io; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stripe*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct stripe*,int ,int ,int) ;
 int FUNC_4 (struct stripe*) ;
 int FUNC_5 (struct stripe*) ;
 int FUNC_6 (struct stripe*) ;
 int FUNC_7 (struct stripe*,int) ;

__attribute__((used)) static int FUNC_8(struct stripe *VAR_1, int VAR_2)
{
 FUNC_0(FUNC_6(VAR_1));





 if (VAR_2 > -1) {
  FUNC_7(VAR_1, VAR_2);
  FUNC_3(VAR_1, VAR_1->io.size, 0, VAR_2);
  FUNC_2(FUNC_1(VAR_1, VAR_2), VAR_0);
 } else
  FUNC_4(VAR_1);

 return FUNC_5(VAR_1);
}
