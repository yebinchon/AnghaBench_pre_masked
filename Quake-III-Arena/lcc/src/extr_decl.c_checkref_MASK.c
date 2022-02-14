
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scope; int addressed; double ref; scalar_t__ sclass; char* name; int type; scalar_t__ defined; } ;
typedef TYPE_1__* Symbol ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_6(Symbol VAR_10, void *VAR_11) {
 if (VAR_10->scope >= VAR_5
 && (FUNC_4(VAR_10->type) || FUNC_2(VAR_10->type)))
  VAR_10->addressed = 1;
 if (VAR_1 >= 2 && VAR_10->defined && VAR_10->ref == 0) {
  if (VAR_10->sclass == VAR_7)
   FUNC_5("static `%t %s' is not referenced\n",
    VAR_10->type, VAR_10->name);
  else if (VAR_10->scope == VAR_5)
   FUNC_5("parameter `%t %s' is not referenced\n",
    VAR_10->type, VAR_10->name);
  else if (VAR_10->scope >= VAR_4 && VAR_10->sclass != VAR_2)
   FUNC_5("local `%t %s' is not referenced\n",
    VAR_10->type, VAR_10->name);
 }
 if (VAR_10->sclass == VAR_0
 && (VAR_10->scope == VAR_5 && VAR_9 == 0
  || VAR_10->scope >= VAR_4)
 && !VAR_10->addressed && FUNC_3(VAR_10->type) && VAR_10->ref >= 3.0)
  VAR_10->sclass = VAR_6;
 if (VAR_8 == VAR_3 && VAR_10->sclass == VAR_7 && !VAR_10->defined
 && FUNC_2(VAR_10->type) && VAR_10->ref)
  FUNC_1("undefined static `%t %s'\n", VAR_10->type, VAR_10->name);
 FUNC_0(!(VAR_8 == VAR_3 && VAR_10->sclass == VAR_7 && !VAR_10->defined && !FUNC_2(VAR_10->type)));
}
