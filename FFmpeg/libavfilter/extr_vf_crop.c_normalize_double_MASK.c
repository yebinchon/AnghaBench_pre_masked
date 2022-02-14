
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (double) ;

__attribute__((used)) static inline int FUNC_3(int *VAR_3, double VAR_4)
{
    int VAR_5 = 0;

    if (FUNC_1(VAR_4)) {
        VAR_5 = FUNC_0(VAR_0);
    } else if (VAR_4 > VAR_1 || VAR_4 < VAR_2) {
        *VAR_3 = VAR_4 > VAR_1 ? VAR_1 : VAR_2;
        VAR_5 = FUNC_0(VAR_0);
    } else
        *VAR_3 = FUNC_2(VAR_4);

    return VAR_5;
}
