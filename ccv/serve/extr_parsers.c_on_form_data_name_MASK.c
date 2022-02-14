
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t cursor; scalar_t__ name; } ;
typedef TYPE_1__ param_parser_t ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, const char* VAR_1, size_t VAR_2)
{
 param_parser_t* VAR_3 = (param_parser_t*)VAR_0;
 if (VAR_2 + VAR_3->cursor > 31)
  return;
 FUNC_0(VAR_3->name + VAR_3->cursor, VAR_1, VAR_2);
 VAR_3->cursor += VAR_2;
}
