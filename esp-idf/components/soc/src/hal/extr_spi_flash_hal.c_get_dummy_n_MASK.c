
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(bool VAR_2, int VAR_3, int VAR_4)
{
    const int VAR_5 = VAR_0 / 1000;

    const int VAR_6 = VAR_0 / VAR_4;
    const int VAR_7 = VAR_2 ? (VAR_1 * 2) : 0;


    int VAR_8 = (1 + VAR_3 + VAR_7) * VAR_5 / 1000 / 1000;
    if (VAR_8 < 0) {
        VAR_8 = 0;
    }

    return VAR_8 / VAR_6;
}
