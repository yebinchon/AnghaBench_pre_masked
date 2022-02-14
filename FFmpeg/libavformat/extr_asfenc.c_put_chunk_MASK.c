
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int seqno; } ;
struct TYPE_4__ {int * pb; TYPE_2__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASFContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0, int VAR_1,
                      int VAR_2, int VAR_3)
{
    ASFContext *VAR_4 = VAR_0->priv_data;
    AVIOContext *VAR_5 = VAR_0->pb;
    int VAR_6;

    VAR_6 = VAR_2 + 8;
    FUNC_0(VAR_5, VAR_1);
    FUNC_0(VAR_5, VAR_6);
    FUNC_1(VAR_5, VAR_4->seqno);
    FUNC_0(VAR_5, VAR_3);
    FUNC_0(VAR_5, VAR_6);
    VAR_4->seqno++;
}
