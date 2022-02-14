
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ eof_reached; } ;
struct TYPE_7__ {scalar_t__ probesize; TYPE_2__* pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3)
{
    uint16_t VAR_4;


    VAR_4 = FUNC_1(VAR_3->pb);
    while (!FUNC_0(VAR_3->pb) && FUNC_3(VAR_3->pb) < VAR_3->probesize) {
        VAR_4 = (VAR_4 << 8) | FUNC_1(VAR_3->pb);
        if ((VAR_4 >> 4) != 0xFFF)
            continue;
        FUNC_2(VAR_3->pb, -2, VAR_2);
        break;
    }
    if (VAR_3->pb->eof_reached)
        return VAR_0;
    if ((VAR_4 >> 4) != 0xFFF)
        return VAR_1;

    return 0;
}
