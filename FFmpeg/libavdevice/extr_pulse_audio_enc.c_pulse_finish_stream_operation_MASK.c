
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pa_operation ;
struct TYPE_4__ {int last_result; int mainloop; } ;
typedef TYPE_1__ PulseData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(PulseData *VAR_2, pa_operation *VAR_3, const char *VAR_4)
{
    if (!VAR_3) {
        FUNC_2(VAR_2->mainloop);
        FUNC_0(VAR_2, VAR_1, "%s failed.\n", VAR_4);
        return VAR_0;
    }
    VAR_2->last_result = 2;
    while (VAR_2->last_result == 2)
        FUNC_3(VAR_2->mainloop);
    FUNC_1(VAR_3);
    FUNC_2(VAR_2->mainloop);
    if (VAR_2->last_result != 0)
        FUNC_0(VAR_2, VAR_1, "%s failed.\n", VAR_4);
    return VAR_2->last_result;
}
