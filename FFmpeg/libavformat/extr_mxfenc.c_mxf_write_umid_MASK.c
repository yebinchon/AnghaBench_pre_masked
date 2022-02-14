
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int umid; int instance_number; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_1, int VAR_2)
{
    MXFContext *VAR_3 = VAR_1->priv_data;
    FUNC_2(VAR_1->pb, VAR_0, 13);
    FUNC_1(VAR_1->pb, VAR_3->instance_number);
    FUNC_2(VAR_1->pb, VAR_3->umid, 15);
    FUNC_0(VAR_1->pb, VAR_2);
}
