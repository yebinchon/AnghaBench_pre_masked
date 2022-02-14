
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; scalar_t__ abort_request; } ;
typedef TYPE_1__ PacketQueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(PacketQueue *VAR_1)
{
    FUNC_0(VAR_1->mutex);
    VAR_1->abort_request = 0;
    FUNC_2(VAR_1, &VAR_0);
    FUNC_1(VAR_1->mutex);
}
