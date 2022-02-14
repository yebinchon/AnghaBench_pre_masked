
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline
int FUNC_1(enum AVSampleFormat VAR_0, int64_t VAR_1,
                   enum AVSampleFormat VAR_2, int64_t VAR_3)
{

    if (VAR_1 == 1 && VAR_3 == 1)
        return FUNC_0(VAR_0) != FUNC_0(VAR_2);
    else
        return VAR_1 != VAR_3 || VAR_0 != VAR_2;
}
