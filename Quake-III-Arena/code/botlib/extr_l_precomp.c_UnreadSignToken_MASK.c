
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int subtype; int type; int string; scalar_t__ linescrossed; int endwhitespace_p; int whitespace_p; int line; } ;
typedef TYPE_2__ token_t ;
struct TYPE_9__ {TYPE_1__* scriptstack; } ;
typedef TYPE_3__ source_t ;
struct TYPE_7__ {int script_p; int line; } ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(source_t *VAR_2)
{
 token_t VAR_3;

 VAR_3.line = VAR_2->scriptstack->line;
 VAR_3.whitespace_p = VAR_2->scriptstack->script_p;
 VAR_3.endwhitespace_p = VAR_2->scriptstack->script_p;
 VAR_3.linescrossed = 0;
 FUNC_1(VAR_3.string, "-");
 VAR_3.type = VAR_1;
 VAR_3.subtype = VAR_0;
 FUNC_0(VAR_2, &VAR_3);
}
