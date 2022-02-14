
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int stream_index; int data; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {scalar_t__ seen_sequence_header; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(PayloadContext *VAR_1, AVStream *VAR_2, AVPacket *VAR_3)
{
    int VAR_4;
    uint32_t VAR_5 = 0;


    if ((VAR_4 = FUNC_0(VAR_3, VAR_0)) < 0)
        return VAR_4;

    FUNC_1(VAR_1, VAR_3->data, 0x10, VAR_5);
    VAR_3->stream_index = VAR_2->index;

    VAR_1->seen_sequence_header = 0;

    return 0;
}
