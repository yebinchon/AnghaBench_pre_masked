
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int list_chapter; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {scalar_t__ duration; } ;
typedef TYPE_2__ hb_chapter_t ;


 TYPE_2__* FUNC_0 (int ,int) ;

__attribute__((used)) static int64_t FUNC_1(hb_title_t * VAR_0, int VAR_1 )
{
    hb_chapter_t * VAR_2;
    int64_t VAR_3;
    int VAR_4;

    VAR_3 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    {
        VAR_2 = FUNC_0(VAR_0->list_chapter, VAR_4);
        VAR_3 += VAR_2->duration;
    }
    return VAR_3;
}
