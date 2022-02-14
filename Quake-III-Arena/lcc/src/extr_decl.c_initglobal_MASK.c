
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_10__ {scalar_t__ sclass; TYPE_1__* type; } ;
struct TYPE_9__ {scalar_t__ size; struct TYPE_9__* type; } ;
typedef TYPE_2__* Symbol ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 char FUNC_1 () ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 char VAR_5 ;

__attribute__((used)) static void FUNC_5(Symbol VAR_6, int VAR_7) {
 Type VAR_8;

 if (VAR_5 == '=' || VAR_7) {
  if (VAR_6->sclass == VAR_4) {
   for (VAR_8 = VAR_6->type; FUNC_3(VAR_8); VAR_8 = VAR_8->type)
    ;
   FUNC_0(VAR_6, FUNC_4(VAR_8) ? VAR_3 : VAR_1);
  } else
   FUNC_0(VAR_6, VAR_1);
  if (VAR_5 == '=')
   VAR_5 = FUNC_1();
  VAR_8 = FUNC_2(VAR_6->type, 0);
  if (FUNC_3(VAR_6->type) && VAR_6->type->size == 0)
   VAR_6->type = VAR_8;
  if (VAR_6->sclass == VAR_2)
   VAR_6->sclass = VAR_0;
 }
}
