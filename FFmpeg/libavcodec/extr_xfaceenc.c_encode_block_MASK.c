
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ProbRangesQueue ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (char*,int,int) ;
 int ** VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int,int) ;

__attribute__((used)) static void FUNC_4(char *VAR_5, int VAR_6, int VAR_7, int VAR_8, ProbRangesQueue *VAR_9)
{
    if (FUNC_1(VAR_5, VAR_6, VAR_7)) {
        FUNC_2(VAR_9, &VAR_4[VAR_8][VAR_2]);
    } else if (FUNC_0(VAR_5, VAR_6, VAR_7)) {
        FUNC_2(VAR_9, &VAR_4[VAR_8][VAR_0]);
        FUNC_3(VAR_9, VAR_5, VAR_6, VAR_7);
    } else {
        FUNC_2(VAR_9, &VAR_4[VAR_8][VAR_1]);
        VAR_6 /= 2;
        VAR_7 /= 2;
        VAR_8++;
        FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_4(VAR_5 + VAR_6, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_4(VAR_5 + VAR_7 * VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
        FUNC_4(VAR_5 + VAR_6 + VAR_7 * VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
    }
}
