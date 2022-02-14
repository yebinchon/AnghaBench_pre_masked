
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* context; int cascade; } ;
typedef TYPE_2__ bbf_param_parser_t ;
struct TYPE_3__ {int face; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, char* VAR_1)
{
 bbf_param_parser_t* VAR_2 = (bbf_param_parser_t*)VAR_0;
 if (FUNC_0(VAR_1, "face") == 0)
  VAR_2->cascade = VAR_2->context->face;
}
