
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int reference; TYPE_1__* f; } ;
struct TYPE_7__ {TYPE_5__* DPB; TYPE_5__* cur_pic_ptr; } ;
struct TYPE_6__ {scalar_t__* buf; } ;
typedef TYPE_2__ H264Context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_1(H264Context *VAR_1, int VAR_2)
{
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1->DPB[VAR_3].f->buf[0] && !VAR_1->DPB[VAR_3].reference &&
            (VAR_2 || &VAR_1->DPB[VAR_3] != VAR_1->cur_pic_ptr)) {
            FUNC_0(VAR_1, &VAR_1->DPB[VAR_3]);
        }
    }
}
