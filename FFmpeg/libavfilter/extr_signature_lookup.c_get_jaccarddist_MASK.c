
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {int thworddist; int thcomposdist; } ;
typedef TYPE_1__ SignatureContext ;
typedef TYPE_2__ CoarseSignature ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(SignatureContext *VAR_0, CoarseSignature *VAR_1, CoarseSignature *VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = 0;
    for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
        if ((VAR_3 = FUNC_0(VAR_1->data[VAR_4], VAR_2->data[VAR_4])) > 0) {
            VAR_3 /= FUNC_1(VAR_1->data[VAR_4], VAR_2->data[VAR_4]);
        }
        if (VAR_3 >= VAR_0->thworddist) {
            if (++VAR_6 > 2) {

                return 0;
            }
        }
        VAR_5 += VAR_3;
        if (VAR_5 > VAR_0->thcomposdist) {
            return 0;
        }
    }
    return 1;
}
