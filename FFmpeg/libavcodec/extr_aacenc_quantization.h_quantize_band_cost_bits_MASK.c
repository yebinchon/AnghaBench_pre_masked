
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AACEncContext {int dummy; } ;


 int FUNC_0 (struct AACEncContext*,int *,float const*,int *,float const*,int,int,int,float,float const,int*,float*,int) ;

__attribute__((used)) static inline int FUNC_1(struct AACEncContext *VAR_0, const float *VAR_1,
                                const float *VAR_2, int VAR_3, int VAR_4,
                                int VAR_5, const float VAR_6, const float VAR_7,
                                int *VAR_8, float *VAR_9, int VAR_10)
{
    int VAR_11;
    FUNC_0(VAR_0, ((void*)0), VAR_1, ((void*)0), VAR_2, VAR_3, VAR_4,
                                         VAR_5, 0.0f, VAR_7, &VAR_11, VAR_9, VAR_10);
    if (VAR_8) {
        *VAR_8 = VAR_11;
    }
    return VAR_11;
}
