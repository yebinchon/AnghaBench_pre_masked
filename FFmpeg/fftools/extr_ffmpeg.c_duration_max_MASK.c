
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int AVRational ;


 int FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static AVRational FUNC_1(int64_t VAR_0, int64_t *VAR_1, AVRational VAR_2,
                               AVRational VAR_3)
{
    int VAR_4;

    if (!*VAR_1) {
        *VAR_1 = VAR_0;
        return VAR_2;
    }

    VAR_4 = FUNC_0(*VAR_1, VAR_3, VAR_0, VAR_2);
    if (VAR_4 < 0) {
        *VAR_1 = VAR_0;
        return VAR_2;
    }

    return VAR_3;
}
