
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num; scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,int ,int ,void*) ;

int FUNC_3(AVRational *VAR_3, const char *VAR_4, void *VAR_5)
{
    AVRational VAR_6;
    if(FUNC_2(&VAR_6, VAR_4, VAR_2, 0, VAR_5) < 0 ||VAR_6.num<=0 ||VAR_6.den<=0) {
        FUNC_1(VAR_5, VAR_0, "Invalid time base '%s'\n", VAR_4);
        return FUNC_0(VAR_1);
    }
    *VAR_3 = VAR_6;
    return 0;
}
