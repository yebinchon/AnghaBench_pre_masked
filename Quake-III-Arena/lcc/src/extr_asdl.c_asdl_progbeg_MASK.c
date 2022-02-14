
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interfaces; int argv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_5 (int,int ,int ,int ,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(int VAR_4, char *VAR_5[]) {
 int VAR_6;




 VAR_2 = FUNC_5(1, 0, FUNC_1(0), FUNC_1(0), VAR_4, FUNC_1(0));
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_0(VAR_2->argv, FUNC_7(FUNC_2(VAR_5[VAR_6], FUNC_6(VAR_5[VAR_6]) + 1)));
 VAR_1 = VAR_2->interfaces;
}
