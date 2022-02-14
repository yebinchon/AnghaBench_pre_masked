
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tag; int tag_pos; } ;
typedef TYPE_1__ SWFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_1, int VAR_2)
{
    SWFContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;

    VAR_3->tag_pos = FUNC_0(VAR_4);
    VAR_3->tag = VAR_2;

    if (VAR_2 & VAR_0) {
        FUNC_1(VAR_4, 0);
        FUNC_2(VAR_4, 0);
    } else {
        FUNC_1(VAR_4, 0);
    }
}
