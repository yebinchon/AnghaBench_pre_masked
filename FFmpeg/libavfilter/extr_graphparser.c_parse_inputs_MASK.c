
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* name; int pad_idx; } ;
typedef TYPE_1__ AVFilterInOut ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (char*,TYPE_1__**) ;
 char* FUNC_5 (char const**,void*) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7(const char **VAR_3, AVFilterInOut **VAR_4,
                        AVFilterInOut **VAR_5, void *VAR_6)
{
    AVFilterInOut *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    while (**VAR_3 == '[') {
        char *VAR_9 = FUNC_5(VAR_3, VAR_6);
        AVFilterInOut *VAR_10;

        if (!VAR_9)
            return FUNC_0(VAR_0);


        VAR_10 = FUNC_4(VAR_9, VAR_5);

        if (VAR_10) {
            FUNC_2(VAR_9);
        } else {

            if (!(VAR_10 = FUNC_3(sizeof(AVFilterInOut)))) {
                FUNC_2(VAR_9);
                return FUNC_0(VAR_1);
            }
            VAR_10->name = VAR_9;
            VAR_10->pad_idx = VAR_8;
        }

        FUNC_1(&VAR_7, &VAR_10);

        *VAR_3 += FUNC_6(*VAR_3, VAR_2);
        VAR_8++;
    }

    FUNC_1(&VAR_7, VAR_4);
    *VAR_4 = VAR_7;

    return VAR_8;
}
