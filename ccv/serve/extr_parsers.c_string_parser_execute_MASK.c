
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cursor; scalar_t__ state; scalar_t__ string; } ;
typedef TYPE_1__ string_parser_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_2(string_parser_t* VAR_3, const char* VAR_4, size_t VAR_5)
{
 if (VAR_3->cursor + VAR_5 > sizeof(VAR_3->string) - 1)
 {
  FUNC_0(VAR_0, "string parameter overflow %zu\n", sizeof(VAR_3->string));
  VAR_3->state = VAR_1;
 }
 else if (VAR_3->state == VAR_2) {
  FUNC_1(VAR_3->string + VAR_3->cursor, VAR_4, VAR_5);
  VAR_3->cursor += VAR_5;
 }
}
