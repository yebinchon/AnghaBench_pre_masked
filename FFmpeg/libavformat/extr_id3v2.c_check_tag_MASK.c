
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_1, int VAR_2, unsigned int VAR_3)
{
    char VAR_4[4];

    if (VAR_3 > 4 ||
        FUNC_2(VAR_1, VAR_2, VAR_0) < 0 ||
        FUNC_1(VAR_1, VAR_4, VAR_3) < (int)VAR_3)
        return -1;
    else if (!FUNC_0(VAR_4) || FUNC_3(VAR_4, VAR_3))
        return 1;

    return 0;
}
