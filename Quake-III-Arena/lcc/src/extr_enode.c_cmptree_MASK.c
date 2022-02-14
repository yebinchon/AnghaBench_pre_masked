
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int Type ;
typedef TYPE_1__* Tree ;
struct TYPE_12__ {int type; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 TYPE_1__* FUNC_5 (int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static Tree FUNC_7(int VAR_3, Tree VAR_4, Tree VAR_5) {
 Type VAR_6;

 if (FUNC_3(VAR_4->type) && FUNC_3(VAR_5->type)) {
  VAR_6 = FUNC_0(VAR_4->type, VAR_5->type);
  VAR_4 = FUNC_1(VAR_4, VAR_6);
  VAR_5 = FUNC_1(VAR_5, VAR_6);
 } else if (FUNC_2(VAR_4->type, VAR_5->type)) {
  VAR_6 = VAR_1;
  VAR_4 = FUNC_1(VAR_4, VAR_6);
  VAR_5 = FUNC_1(VAR_5, VAR_6);
 } else {
  VAR_6 = VAR_2;
  FUNC_6(VAR_3, VAR_4, VAR_5);
 }
 return FUNC_5(FUNC_4(VAR_3,VAR_6), VAR_0, VAR_4, VAR_5);
}
