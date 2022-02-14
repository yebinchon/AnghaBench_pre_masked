
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int pix_id; } ;
typedef TYPE_1__ ePICPixHashElem ;
struct TYPE_9__ {int* bucket_size; int* bucket_fill; TYPE_1__** bucket; } ;
typedef TYPE_2__ ePICPixHash ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ePICPixHashElem *FUNC_3(ePICPixHash *VAR_1, uint32_t VAR_2)
{
    ePICPixHashElem *VAR_3, *VAR_4;
    int VAR_5 = FUNC_1(VAR_2);

    if (VAR_1->bucket_size[VAR_5] > VAR_0 / sizeof(**VAR_1->bucket))
        return ((void*)0);

    if (!(VAR_1->bucket_fill[VAR_5] < VAR_1->bucket_size[VAR_5])) {
        int VAR_6 = VAR_1->bucket_size[VAR_5] + 16;
        VAR_3 = FUNC_0(VAR_1->bucket[VAR_5], VAR_6 * sizeof(*VAR_3));
        if (!VAR_3)
            return ((void*)0);
        VAR_1->bucket[VAR_5] = VAR_3;
        VAR_1->bucket_size[VAR_5] = VAR_6;
    }

    VAR_4 = &VAR_1->bucket[VAR_5][VAR_1->bucket_fill[VAR_5]++];
    FUNC_2(VAR_4, 0, sizeof(*VAR_4));
    VAR_4->pix_id = VAR_2;
    return VAR_4;
}
