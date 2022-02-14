
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Program {int nb_pids; unsigned int* pids; } ;
typedef int MpegTSContext ;


 int VAR_0 ;
 struct Program* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(MpegTSContext *VAR_1, unsigned int VAR_2,
                           unsigned int VAR_3)
{
    struct Program *VAR_4 = FUNC_0(VAR_1, VAR_2);
    int VAR_5;
    if (!VAR_4)
        return;

    if (VAR_4->nb_pids >= VAR_0)
        return;

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_pids; VAR_5++)
        if (VAR_4->pids[VAR_5] == VAR_3)
            return;

    VAR_4->pids[VAR_4->nb_pids++] = VAR_3;
}
