
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Type ;
struct TYPE_4__ {int sclass; int temporary; int generated; int type; scalar_t__ scope; int name; } ;
typedef TYPE_1__* Symbol ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

Symbol FUNC_2(int VAR_4, Type VAR_5) {
 Symbol VAR_6;

 FUNC_0(VAR_6, VAR_0);
 VAR_6->name = FUNC_1(++VAR_3);
 VAR_6->scope = VAR_2 < VAR_1 ? VAR_1 : VAR_2;
 VAR_6->sclass = VAR_4;
 VAR_6->type = VAR_5;
 VAR_6->temporary = 1;
 VAR_6->generated = 1;
 return VAR_6;
}
