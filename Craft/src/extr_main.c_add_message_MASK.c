
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t message_index; int * messages; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,int ,char*,char const*) ;

void FUNC_2(const char *VAR_3) {
    FUNC_0("%s\n", VAR_3);
    FUNC_1(
        VAR_2->messages[VAR_2->message_index], VAR_1, "%s", VAR_3);
    VAR_2->message_index = (VAR_2->message_index + 1) % VAR_0;
}
