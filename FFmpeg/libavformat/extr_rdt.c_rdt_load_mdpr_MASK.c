
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {size_t index; } ;
struct TYPE_6__ {unsigned int mlti_data_size; int * rmst; int rmctx; int mlti_data; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int ,int *,TYPE_2__*,int ,unsigned int,int *) ;
 int FUNC_7 (int *,int ,unsigned int,int ,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_8 (PayloadContext *VAR_1, AVStream *VAR_2, int VAR_3)
{
    AVIOContext VAR_4;
    unsigned int VAR_5;
    uint32_t VAR_6;
    if (!VAR_1->mlti_data)
        return -1;
    FUNC_7(&VAR_4, VAR_1->mlti_data, VAR_1->mlti_data_size, 0,
                  ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_6 = FUNC_3(&VAR_4);
    if (VAR_6 == FUNC_0('M', 'L', 'T', 'I')) {
        int VAR_7, VAR_8;


        VAR_7 = FUNC_1(&VAR_4);
        if (VAR_3 < 0 || VAR_3 >= VAR_7)
            return -1;
        FUNC_5(&VAR_4, VAR_3 * 2);
        VAR_8 = FUNC_1(&VAR_4);
        FUNC_5(&VAR_4, (VAR_7 - 1 - VAR_3) * 2);


        VAR_7 = FUNC_1(&VAR_4);
        if (VAR_8 >= VAR_7)
            return -1;
        while (VAR_8--)
            FUNC_5(&VAR_4, FUNC_2(&VAR_4));
        VAR_5 = FUNC_2(&VAR_4);
    } else {
        VAR_5 = VAR_1->mlti_data_size;
        FUNC_4(&VAR_4, 0, VAR_0);
    }
    if (FUNC_6(VAR_1->rmctx, &VAR_4, VAR_2, VAR_1->rmst[VAR_2->index], VAR_5, ((void*)0)) < 0)
        return -1;

    return 0;
}
