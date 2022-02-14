
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int label; } ;
struct TYPE_7__ {TYPE_1__ l; } ;
struct TYPE_8__ {char src; int defined; TYPE_2__ u; int name; int scope; } ;
typedef TYPE_3__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_3__* FUNC_5 (int ,int *,int ,int ) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(void) {
 Symbol VAR_6 = FUNC_6(VAR_5, VAR_3);

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_5(VAR_5, &VAR_3, 0, VAR_0);
  VAR_6->scope = VAR_1;
  VAR_6->u.l.label = FUNC_3(1);
  VAR_6->src = VAR_2;
 }
 if (VAR_6->defined)
  FUNC_1("redefinition of label `%s' previously defined at %w\n", VAR_6->name, &VAR_6->src);

 VAR_6->defined = 1;
 FUNC_0(VAR_6->u.l.label);
 VAR_4 = FUNC_4();
 FUNC_2(':');
}
