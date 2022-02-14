
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(unsigned VAR_0, int VAR_1)
{
    unsigned int VAR_2, VAR_3, VAR_4, VAR_5;
    int VAR_6;


    VAR_4 = (VAR_0 & 3) + 1;
    VAR_2 = VAR_0 >> 5;
    VAR_3 = (VAR_0 >> 2) & 7;

    VAR_5 = VAR_4 << VAR_2;

    if (VAR_1 >= VAR_5) {
        VAR_1 -= VAR_5 - (1 << VAR_3);
        VAR_6 = FUNC_0(VAR_1);

        return VAR_6 * 2 - VAR_3 + VAR_4 + 1;
    } else {
        return (VAR_1 >> VAR_2) + VAR_2 + 1;
    }
}
