
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* f; } ;
struct TYPE_11__ {scalar_t__ long_ref_count; int short_ref_count; int default_ref; int ** short_ref; TYPE_6__ last_pic_for_ec; } ;
struct TYPE_10__ {int * data; } ;
typedef TYPE_2__ H264Context ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;

void FUNC_6(H264Context *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
        FUNC_4(VAR_0, VAR_1, 0);
    }
    FUNC_0(VAR_0->long_ref_count == 0);

    if (VAR_0->short_ref_count && !VAR_0->last_pic_for_ec.f->data[0]) {
        FUNC_2(VAR_0, &VAR_0->last_pic_for_ec);
        FUNC_1(VAR_0, &VAR_0->last_pic_for_ec, VAR_0->short_ref[0]);
    }

    for (VAR_1 = 0; VAR_1 < VAR_0->short_ref_count; VAR_1++) {
        FUNC_5(VAR_0, VAR_0->short_ref[VAR_1], 0);
        VAR_0->short_ref[VAR_1] = ((void*)0);
    }
    VAR_0->short_ref_count = 0;

    FUNC_3(VAR_0->default_ref, 0, sizeof(VAR_0->default_ref));
}
