
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ pix_id; } ;
typedef TYPE_1__ ePICPixHashElem ;
struct TYPE_6__ {int* bucket_fill; TYPE_1__** bucket; } ;
typedef TYPE_2__ ePICPixHash ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static ePICPixHashElem *FUNC_1(const ePICPixHash *VAR_0, uint32_t VAR_1)
{
    int VAR_2, VAR_3 = FUNC_0(VAR_1);
    ePICPixHashElem *VAR_4 = VAR_0->bucket[VAR_3];

    for (VAR_2 = 0; VAR_2 < VAR_0->bucket_fill[VAR_3]; VAR_2++)
        if (VAR_4[VAR_2].pix_id == VAR_1)
            return &VAR_4[VAR_2];

    return ((void*)0);
}
