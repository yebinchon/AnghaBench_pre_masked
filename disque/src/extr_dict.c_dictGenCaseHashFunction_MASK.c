
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;

unsigned int FUNC_1(const unsigned char *VAR_1, int VAR_2) {
    unsigned int VAR_3 = (unsigned int)VAR_0;

    while (VAR_2--)
        VAR_3 = ((VAR_3 << 5) + VAR_3) + (FUNC_0(*VAR_1++));
    return VAR_3;
}
