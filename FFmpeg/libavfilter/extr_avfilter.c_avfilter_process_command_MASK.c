
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int local_res ;
struct TYPE_8__ {TYPE_1__* filter; int name; } ;
struct TYPE_7__ {int (* process_command ) (TYPE_2__*,char const*,char const*,char*,int,int) ;int name; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (TYPE_2__*,char const*,char const*,char*,int,int) ;

int FUNC_6(AVFilterContext *VAR_2, const char *VAR_3, const char *VAR_4, char *VAR_5, int VAR_6, int VAR_7)
{
    if(!FUNC_4(VAR_3, "ping")){
        char VAR_8[256] = {0};

        if (!VAR_5) {
            VAR_5 = VAR_8;
            VAR_6 = sizeof(VAR_8);
        }
        FUNC_2(VAR_5, VAR_6, "pong from:%s %s\n", VAR_2->filter->name, VAR_2->name);
        if (VAR_5 == VAR_8)
            FUNC_1(VAR_2, VAR_0, "%s", VAR_5);
        return 0;
    }else if(!FUNC_4(VAR_3, "enable")) {
        return FUNC_3(VAR_2, VAR_4);
    }else if(VAR_2->filter->process_command) {
        return VAR_2->filter->process_command(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    }
    return FUNC_0(VAR_1);
}
