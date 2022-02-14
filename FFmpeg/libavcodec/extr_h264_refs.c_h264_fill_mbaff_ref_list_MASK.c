
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int* linesize; TYPE_2__* parent; int poc; int reference; int * data; } ;
struct TYPE_8__ {int list_count; int* ref_count; TYPE_4__** ref_list; } ;
struct TYPE_7__ {int * field_poc; TYPE_1__* f; } ;
struct TYPE_6__ {scalar_t__* linesize; } ;
typedef TYPE_3__ H264SliceContext ;
typedef TYPE_4__ H264Ref ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(H264SliceContext *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    for (VAR_3 = 0; VAR_3 < VAR_2->list_count; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < VAR_2->ref_count[VAR_3]; VAR_4++) {
            H264Ref *VAR_6 = &VAR_2->ref_list[VAR_3][VAR_4];
            H264Ref *VAR_7 = &VAR_2->ref_list[VAR_3][16 + 2 * VAR_4];

            VAR_7[0] = *VAR_6;

            for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
                VAR_7[0].linesize[VAR_5] <<= 1;
            VAR_7[0].reference = VAR_1;
            VAR_7[0].poc = VAR_7[0].parent->field_poc[0];

            VAR_7[1] = VAR_7[0];

            for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
                VAR_7[1].data[VAR_5] += VAR_6->parent->f->linesize[VAR_5];
            VAR_7[1].reference = VAR_0;
            VAR_7[1].poc = VAR_7[1].parent->field_poc[1];
        }
    }
}
