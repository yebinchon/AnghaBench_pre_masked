
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_17__ {scalar_t__ size; TYPE_12__* type; } ;
struct TYPE_16__ {int defined; scalar_t__ sclass; char* name; TYPE_5__* type; int generated; } ;
struct TYPE_15__ {int (* stabsym ) (TYPE_1__*) ;int (* space ) (scalar_t__) ;int (* import ) (TYPE_1__*) ;} ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_1__* Symbol ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_13__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* FUNC_0 (TYPE_12__*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,TYPE_5__*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(Symbol VAR_7, void *VAR_8) {
 if (!VAR_7->defined && (VAR_7->sclass == VAR_2
 || FUNC_4(VAR_7->type) && VAR_7->sclass == VAR_0))
  (*VAR_3->import)(VAR_7);
 else if (!VAR_7->defined && !FUNC_4(VAR_7->type)
 && (VAR_7->sclass == VAR_0 || VAR_7->sclass == VAR_5)) {
  if (FUNC_3(VAR_7->type)
  && VAR_7->type->size == 0 && VAR_7->type->type->size > 0)
   VAR_7->type = FUNC_0(VAR_7->type->type, 1, 0);
  if (VAR_7->type->size > 0) {
   FUNC_1(VAR_7, VAR_1);
   (*VAR_3->space)(VAR_7->type->size);
   if (VAR_6 > 0 && VAR_3->stabsym)
    (*VAR_3->stabsym)(VAR_7);
  } else
   FUNC_2("undefined size for `%t %s'\n",
    VAR_7->type, VAR_7->name);
  VAR_7->defined = 1;
 }
 if (VAR_4
 && !FUNC_4(VAR_7->type)
 && !VAR_7->generated && VAR_7->sclass != VAR_2)
  FUNC_5(VAR_7, VAR_7->type);
}
