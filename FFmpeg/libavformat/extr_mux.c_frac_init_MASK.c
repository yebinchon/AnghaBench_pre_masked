
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int val; int num; int den; } ;
typedef TYPE_1__ FFFrac ;



__attribute__((used)) static void FUNC_0(FFFrac *VAR_0, int64_t VAR_1, int64_t VAR_2, int64_t VAR_3)
{
    VAR_2 += (VAR_3 >> 1);
    if (VAR_2 >= VAR_3) {
        VAR_1 += VAR_2 / VAR_3;
        VAR_2 = VAR_2 % VAR_3;
    }
    VAR_0->val = VAR_1;
    VAR_0->num = VAR_2;
    VAR_0->den = VAR_3;
}
