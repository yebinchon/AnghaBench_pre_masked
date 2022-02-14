
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ PacketQueue ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(PacketQueue *VAR_1, AVPacket *VAR_2)
{
    int VAR_3;

    FUNC_0(VAR_1->mutex);
    VAR_3 = FUNC_3(VAR_1, VAR_2);
    FUNC_1(VAR_1->mutex);

    if (VAR_2 != &VAR_0 && VAR_3 < 0)
        FUNC_2(VAR_2);

    return VAR_3;
}
