
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tag_pos; int tag; } ;
typedef TYPE_1__ SWFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_2)
{
    SWFContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    int64_t VAR_5;
    int VAR_6, VAR_7;

    VAR_5 = FUNC_2(VAR_4);
    VAR_6 = VAR_5 - VAR_3->tag_pos - 2;
    VAR_7 = VAR_3->tag;
    FUNC_1(VAR_4, VAR_3->tag_pos, VAR_0);
    if (VAR_7 & VAR_1) {
        VAR_7 &= ~VAR_1;
        FUNC_3(VAR_4, (VAR_7 << 6) | 0x3f);
        FUNC_4(VAR_4, VAR_6 - 4);
    } else {
        FUNC_0(VAR_6 < 0x3f);
        FUNC_3(VAR_4, (VAR_7 << 6) | VAR_6);
    }
    FUNC_1(VAR_4, VAR_5, VAR_0);
}
