
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peer_bdaddr; scalar_t__ peer_name; } ;


 char* FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static char *FUNC_1(void)
{
    char *VAR_1 = (char *)VAR_0.peer_name;
    char *VAR_2;


    if (*VAR_1 == '\0') {
        if ((VAR_2 = FUNC_0(VAR_0.peer_bdaddr)) != ((void*)0)) {
            VAR_1 = VAR_2;
        }
    }
    return VAR_1;
}
