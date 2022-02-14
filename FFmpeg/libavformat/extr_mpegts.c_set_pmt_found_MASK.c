
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Program {int pmt_found; } ;
typedef int MpegTSContext ;


 struct Program* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(MpegTSContext *VAR_0, unsigned int VAR_1)
{
    struct Program *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (!VAR_2)
        return;

    VAR_2->pmt_found = 1;
}
