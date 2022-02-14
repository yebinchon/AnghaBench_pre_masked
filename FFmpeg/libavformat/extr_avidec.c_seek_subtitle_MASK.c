
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int sub_pkt; int sub_ctx; } ;
struct TYPE_5__ {int time_base; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVIStream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(AVStream *VAR_2, AVStream *VAR_3, int64_t VAR_4)
{
    AVIStream *VAR_5 = VAR_3->priv_data;
    int64_t VAR_6 = FUNC_1(VAR_4, VAR_2->time_base, VAR_3->time_base);
    FUNC_0(&VAR_5->sub_pkt);
    if (FUNC_2(VAR_5->sub_ctx, 0, VAR_1, VAR_6, VAR_6, 0) >= 0 ||
        FUNC_2(VAR_5->sub_ctx, 0, VAR_6, VAR_6, VAR_0, 0) >= 0)
        FUNC_3(VAR_5->sub_ctx, &VAR_5->sub_pkt);
}
