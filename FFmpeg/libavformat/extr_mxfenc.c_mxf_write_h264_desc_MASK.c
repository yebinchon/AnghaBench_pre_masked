
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {int pb; } ;
struct TYPE_13__ {TYPE_1__* priv_data; } ;
struct TYPE_12__ {scalar_t__ avc_intra; } ;
typedef TYPE_1__ MXFStreamContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_1, AVStream *VAR_2)
{
    MXFStreamContext *VAR_3 = VAR_2->priv_data;
    if (VAR_3->avc_intra) {
        FUNC_3(VAR_1, VAR_2);
    } else {
        int64_t VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_0);
        FUNC_0(VAR_1->pb, VAR_4);
        FUNC_1(VAR_1, VAR_2);
    }
}
