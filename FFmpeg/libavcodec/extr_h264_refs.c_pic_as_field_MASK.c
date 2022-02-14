
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* data; int* linesize; int reference; TYPE_1__* parent; int poc; } ;
struct TYPE_4__ {int * field_poc; } ;
typedef TYPE_2__ H264Ref ;


 int FUNC_0 (int*) ;
 int const VAR_0 ;

__attribute__((used)) static void FUNC_1(H264Ref *VAR_1, const int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->data); ++VAR_3) {
        if (VAR_2 == VAR_0)
            VAR_1->data[VAR_3] += VAR_1->linesize[VAR_3];
        VAR_1->reference = VAR_2;
        VAR_1->linesize[VAR_3] *= 2;
    }
    VAR_1->poc = VAR_1->parent->field_poc[VAR_2 == VAR_0];
}
