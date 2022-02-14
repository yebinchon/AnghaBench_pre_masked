
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int64_t FUNC_1(AVIOContext *VAR_0)
{
    int64_t VAR_1 = FUNC_0(VAR_0) + 1;

    if (VAR_1 & 1)
        return -(VAR_1 >> 1);
    else
        return (VAR_1 >> 1);
}
