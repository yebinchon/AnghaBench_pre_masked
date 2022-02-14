
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct AVFormatContext {int pb; } ;
struct TYPE_3__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (struct AVFormatContext*,int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    if (VAR_2->size > 65535) {
        FUNC_0(VAR_1, VAR_0,
               "Packet size too large for s302m. (%d > 65535)\n", VAR_2->size);
        return -1;
    }
    FUNC_1(VAR_1->pb, VAR_2->size);
    FUNC_1(VAR_1->pb, 0x8010);
    FUNC_2(VAR_1->pb, VAR_2->data, VAR_2->size);
    return 0;
}
