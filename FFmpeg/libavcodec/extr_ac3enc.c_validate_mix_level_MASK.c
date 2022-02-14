
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,char const*,float const) ;
 int FUNC_1 (float,float const*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, const char *VAR_2,
                               float *VAR_3, const float *VAR_4,
                               int VAR_5, int VAR_6, int VAR_7,
                               int *VAR_8)
{
    int VAR_9 = FUNC_1(*VAR_3, VAR_4, VAR_5);
    if (VAR_9 < VAR_7) {
        VAR_9 = VAR_6;
        if (*VAR_3 >= 0.0) {
            FUNC_0(VAR_1, VAR_0, "requested %s is not valid. using "
                   "default value: %0.3f\n", VAR_2, VAR_4[VAR_9]);
        }
    }
    *VAR_3 = VAR_4[VAR_9];
    *VAR_8 = VAR_9;
}
