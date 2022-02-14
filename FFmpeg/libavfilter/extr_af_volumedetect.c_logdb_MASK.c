
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;


 double VAR_0 ;
 int FUNC_0 (double) ;

__attribute__((used)) static inline double FUNC_1(uint64_t VAR_1)
{
    double VAR_2 = VAR_1 / (double)(0x8000 * 0x8000);
    if (!VAR_1)
        return VAR_0;
    return -FUNC_0(VAR_2) * 10;
}
