
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* filter; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int ,int,int ,int) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1, int VAR_2,
                       AVFilterContext *VAR_3, int VAR_4,
                       void *VAR_5)
{
    int VAR_6;
    if ((VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4))) {
        FUNC_0(VAR_5, VAR_0,
               "Cannot create the link %s:%d -> %s:%d\n",
               VAR_1->filter->name, VAR_2, VAR_3->filter->name, VAR_4);
        return VAR_6;
    }

    return 0;
}
