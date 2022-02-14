
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int num; int den; scalar_t__ val; } ;
typedef TYPE_1__ FFFrac ;



__attribute__((used)) static void FUNC_0(FFFrac *VAR_0, int64_t VAR_1)
{
    int64_t VAR_2, VAR_3;

    VAR_2 = VAR_0->num + VAR_1;
    VAR_3 = VAR_0->den;
    if (VAR_2 < 0) {
        VAR_0->val += VAR_2 / VAR_3;
        VAR_2 = VAR_2 % VAR_3;
        if (VAR_2 < 0) {
            VAR_2 += VAR_3;
            VAR_0->val--;
        }
    } else if (VAR_2 >= VAR_3) {
        VAR_0->val += VAR_2 / VAR_3;
        VAR_2 = VAR_2 % VAR_3;
    }
    VAR_0->num = VAR_2;
}
