
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 int FUNC_1 (void*,int ,char*,double) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_5, double VAR_6, double VAR_7, int *VAR_8)
{
    VAR_7 *= VAR_6 * VAR_4;
    if (VAR_7 < VAR_3 || VAR_7 >= VAR_2) {
        if (VAR_5)
            FUNC_1(VAR_5, VAR_0, "%g is too large\n", VAR_6);
        return FUNC_0(VAR_1);
    }
    *VAR_8 = VAR_7;
    return 0;
}
