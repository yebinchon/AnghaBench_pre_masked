
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int e; int m; } ;
typedef TYPE_1__ softfloat ;
typedef int int32_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline int32_t FUNC_1(int32_t VAR_0, softfloat VAR_1)
{
    int32_t VAR_2 = 1 << (VAR_1.e - 1);

    VAR_0 = FUNC_0(VAR_0, VAR_1.m) + VAR_2;
    VAR_0 = VAR_0 >> VAR_1.e;
    return VAR_0;
}
