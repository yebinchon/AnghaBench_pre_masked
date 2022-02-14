
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(size_t VAR_1, size_t VAR_2, size_t *VAR_3)
{
    size_t VAR_4 = VAR_1 * VAR_2;


    if ((VAR_1 | VAR_2) >= ((size_t)1 << (sizeof(size_t) * 4)) && VAR_1 && VAR_4 / VAR_1 != VAR_2)
        return FUNC_0(VAR_0);
    *VAR_3 = VAR_4;
    return 0;
}
