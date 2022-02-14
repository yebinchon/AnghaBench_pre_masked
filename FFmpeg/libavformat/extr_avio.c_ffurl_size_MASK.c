
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;

int64_t FUNC_1(URLContext *VAR_4)
{
    int64_t VAR_5, VAR_6;

    VAR_6 = FUNC_0(VAR_4, 0, VAR_0);
    if (VAR_6 < 0) {
        VAR_5 = FUNC_0(VAR_4, 0, VAR_1);
        if ((VAR_6 = FUNC_0(VAR_4, -1, VAR_2)) < 0)
            return VAR_6;
        VAR_6++;
        FUNC_0(VAR_4, VAR_5, VAR_3);
    }
    return VAR_6;
}
