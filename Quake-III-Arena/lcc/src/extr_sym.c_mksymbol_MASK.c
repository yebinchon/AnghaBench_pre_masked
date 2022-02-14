
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int Type ;
struct TYPE_8__ {int (* defsymbol ) (TYPE_1__*) ;} ;
struct TYPE_7__ {int sclass; int defined; int type; int scope; int name; } ;
typedef TYPE_1__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;

Symbol FUNC_4(int VAR_5, const char *VAR_6, Type VAR_7) {
 Symbol VAR_8;

 if (VAR_5 == VAR_0)
  VAR_8 = FUNC_1(FUNC_2(VAR_6), &VAR_4, VAR_1, VAR_3);
 else {
  FUNC_0(VAR_8, VAR_3);
  VAR_8->name = FUNC_2(VAR_6);
  VAR_8->scope = VAR_1;
 }
 VAR_8->sclass = VAR_5;
 VAR_8->type = VAR_7;
 (*VAR_2->defsymbol)(VAR_8);
 VAR_8->defined = 1;
 return VAR_8;
}
