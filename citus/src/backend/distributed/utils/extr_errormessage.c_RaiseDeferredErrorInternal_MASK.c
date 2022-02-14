
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int functionname; int linenumber; scalar_t__ filename; scalar_t__ hint; scalar_t__ detail; scalar_t__ message; int code; } ;
struct TYPE_6__ {int elevel; int assoc_context; int funcname; int lineno; void* filename; void* hint; void* detail; void* message; int sqlerrcode; } ;
typedef TYPE_1__ ErrorData ;
typedef TYPE_2__ DeferredErrorMessage ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;

void
FUNC_3(DeferredErrorMessage *VAR_1, int VAR_2)
{
 ErrorData *VAR_3 = FUNC_1(sizeof(ErrorData));

 VAR_3->sqlerrcode = VAR_1->code;
 VAR_3->elevel = VAR_2;
 VAR_3->message = FUNC_2(VAR_1->message);
 if (VAR_1->detail)
 {
  VAR_3->detail = FUNC_2(VAR_1->detail);
 }
 if (VAR_1->hint)
 {
  VAR_3->hint = FUNC_2(VAR_1->hint);
 }
 VAR_3->filename = FUNC_2(VAR_1->filename);
 VAR_3->lineno = VAR_1->linenumber;
 VAR_3->funcname = VAR_1->functionname;

 VAR_3->assoc_context = VAR_0;

 FUNC_0(VAR_3);
}
