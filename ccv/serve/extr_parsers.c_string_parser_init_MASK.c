
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cursor; int state; int string; } ;
typedef TYPE_1__ string_parser_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;

void FUNC_1(string_parser_t* VAR_1)
{
 FUNC_0(VAR_1->string, 0, sizeof(VAR_1->string));
 VAR_1->state = VAR_0;
 VAR_1->cursor = 0;
}
