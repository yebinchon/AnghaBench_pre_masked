
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int boundary_tag; } ;
typedef TYPE_1__ MPJPEGContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    MPJPEGContext *VAR_1 = VAR_0->priv_data;
    FUNC_1(VAR_0->pb, "--%s\r\n", VAR_1->boundary_tag);
    FUNC_0(VAR_0->pb);
    return 0;
}
