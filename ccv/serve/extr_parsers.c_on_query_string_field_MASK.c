
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int header_index; int name; scalar_t__ cursor; } ;
typedef TYPE_1__ param_parser_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (void*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, const char* VAR_1, size_t VAR_2, int VAR_3)
{
 param_parser_t* VAR_4 = (param_parser_t*)VAR_0;
 if (VAR_4->header_index != VAR_3)
 {
  VAR_4->header_index = VAR_3;

  VAR_4->cursor = 0;
  FUNC_0(VAR_4->name, 0, sizeof(VAR_4->name));

  FUNC_2(VAR_4);
 }
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
