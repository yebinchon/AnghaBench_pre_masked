
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int name; } ;
struct TYPE_5__ {scalar_t__ num; scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;
typedef TYPE_2__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,char*,int ) ;
 TYPE_2__* FUNC_2 (void*,char const*,int *,int ,int,void**) ;
 int FUNC_3 (void*,char const*,scalar_t__,scalar_t__,int,int) ;

int FUNC_4(void *VAR_4, const char *VAR_5, AVRational VAR_6, int VAR_7)
{
    void *VAR_8;
    const AVOption *VAR_9 = FUNC_2(VAR_4, VAR_5, ((void*)0), 0, VAR_7, &VAR_8);

    if (!VAR_9 || !VAR_8)
        return VAR_0;
    if (VAR_9->type != VAR_2) {
        FUNC_1(VAR_4, VAR_1,
               "The value set by option '%s' is not a video rate.\n", VAR_9->name);
        return FUNC_0(VAR_3);
    }
    if (VAR_6.num <= 0 || VAR_6.den <= 0)
        return FUNC_0(VAR_3);
    return FUNC_3(VAR_4, VAR_5, VAR_6.num, VAR_6.den, 1, VAR_7);
}
