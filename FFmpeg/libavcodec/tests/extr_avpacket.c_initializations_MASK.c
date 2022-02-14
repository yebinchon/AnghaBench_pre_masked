
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_5__ {int pts; int dts; char* data; int duration; int pos; int flags; int size; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(AVPacket* VAR_1)
{
    const static uint8_t* VAR_2 = "selftest for av_packet_clone(...)";
    int VAR_3 = 0;


    FUNC_0(VAR_1);


    VAR_1->pts = 17;
    VAR_1->dts = 2;
    VAR_1->data = (uint8_t*)VAR_2;
    VAR_1->size = FUNC_2(VAR_2);
    VAR_1->flags = VAR_0;
    VAR_1->duration = 100;
    VAR_1->pos = 3;

    VAR_3 = FUNC_1(VAR_1);

    return VAR_3;
}
