
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int size; int data; } ;
struct TYPE_6__ {int boundary_tag; } ;
typedef TYPE_1__ MPJPEGContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    MPJPEGContext *VAR_2 = VAR_0->priv_data;
    FUNC_0(VAR_0->pb, "Content-type: image/jpeg\r\n");
    FUNC_0(VAR_0->pb, "Content-length: %d\r\n\r\n",
                VAR_1->size);
    FUNC_1(VAR_0->pb, VAR_1->data, VAR_1->size);

    FUNC_0(VAR_0->pb, "\r\n--%s\r\n", VAR_2->boundary_tag);
    return 0;
}
