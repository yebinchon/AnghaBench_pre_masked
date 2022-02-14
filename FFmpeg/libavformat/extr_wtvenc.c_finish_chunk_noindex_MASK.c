
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int last_chunk_pos; int timeline_start_pos; int serial; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_1)
{
    WtvContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;


    int64_t VAR_4 = FUNC_2(VAR_3) - (VAR_2->last_chunk_pos + VAR_2->timeline_start_pos);
    FUNC_1(VAR_3, -(VAR_4 - 16), VAR_0);
    FUNC_3(VAR_3, VAR_4);
    FUNC_1(VAR_3, VAR_4 - (16 + 4), VAR_0);

    FUNC_4(VAR_3, FUNC_0(VAR_4) - VAR_4);
    VAR_2->serial++;
}
