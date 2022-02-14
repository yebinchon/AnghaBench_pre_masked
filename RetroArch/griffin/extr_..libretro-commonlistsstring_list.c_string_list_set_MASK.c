
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {TYPE_1__* elems; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

void FUNC_2(struct string_list *VAR_0,
      unsigned VAR_1, const char *VAR_2)
{
   FUNC_0(VAR_0->elems[VAR_1].data);
   VAR_0->elems[VAR_1].data = FUNC_1(VAR_2);
}
