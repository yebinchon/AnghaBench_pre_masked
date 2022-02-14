
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, MOVTrack *VAR_2, int VAR_3)
{
    unsigned VAR_4 = 0;
    if (VAR_3 < FUNC_0(VAR_0))
        VAR_4 = VAR_0[VAR_3];
    else
        return 0;
    FUNC_2(VAR_1, 10);
    FUNC_3(VAR_1, "fiel");
    FUNC_1(VAR_1, VAR_4);
    return 10;
}
