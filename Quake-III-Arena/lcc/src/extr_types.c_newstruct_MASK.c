
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_9__ {scalar_t__ scope; char src; TYPE_1__* type; int name; int defined; } ;
struct TYPE_8__ {int op; } ;
typedef TYPE_2__* Symbol ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (char*,int *,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_4 (char*,int ) ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 char* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int,int *,int ,int ,TYPE_2__*) ;
 int VAR_5 ;

Type FUNC_7(int VAR_6, char *VAR_7) {
 Symbol VAR_8;

 FUNC_0(VAR_7);
 if (*VAR_7 == 0)
  VAR_7 = FUNC_5(FUNC_2(1));
 else
  if ((VAR_8 = FUNC_4(VAR_7, VAR_5)) != ((void*)0) && (VAR_8->scope == VAR_2
  || VAR_8->scope == VAR_0 && VAR_2 == VAR_0+1)) {
   if (VAR_8->type->op == VAR_6 && !VAR_8->defined)
    return VAR_8->type;
   FUNC_1("redefinition of `%s' previously defined at %w\n",
    VAR_8->name, &VAR_8->src);
  }
 VAR_8 = FUNC_3(VAR_7, &VAR_5, VAR_2, VAR_1);
 VAR_8->type = FUNC_6(VAR_6, ((void*)0), 0, 0, VAR_8);
 if (VAR_8->scope > VAR_3)
  VAR_3 = VAR_8->scope;
 VAR_8->src = VAR_4;
 return VAR_8->type;
}
