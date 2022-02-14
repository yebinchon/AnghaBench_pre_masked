
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int header_index; scalar_t__ state; int name; } ;
typedef TYPE_1__ param_parser_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void* VAR_1, const char* VAR_2, size_t VAR_3, int VAR_4)
{
 param_parser_t* VAR_5 = (param_parser_t*)VAR_1;
 if (VAR_5->header_index == VAR_4)
 {
  if (VAR_5->state == VAR_0)
  {
   VAR_5->state = FUNC_0(VAR_5, VAR_5->name);
   if (VAR_5->state >= 0)
    FUNC_2(VAR_5);
  }
  if (VAR_5->state >= 0)
   FUNC_1(VAR_5, VAR_2, VAR_3);
 }
}
