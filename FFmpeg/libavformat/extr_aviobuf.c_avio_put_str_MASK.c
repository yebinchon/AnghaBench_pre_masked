
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

int FUNC_3(AVIOContext *VAR_0, const char *VAR_1)
{
    int VAR_2 = 1;
    if (VAR_1) {
        VAR_2 += FUNC_2(VAR_1);
        FUNC_1(VAR_0, (const unsigned char *) VAR_1, VAR_2);
    } else
        FUNC_0(VAR_0, 0);
    return VAR_2;
}
