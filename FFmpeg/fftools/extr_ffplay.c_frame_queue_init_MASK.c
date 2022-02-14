
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_size; int keep_last; TYPE_1__* queue; int * pktq; int cond; int mutex; } ;
struct TYPE_5__ {int frame; } ;
typedef int PacketQueue ;
typedef TYPE_2__ FrameQueue ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_8(FrameQueue *VAR_3, PacketQueue *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    FUNC_7(VAR_3, 0, sizeof(FrameQueue));
    if (!(VAR_3->mutex = FUNC_3())) {
        FUNC_6(((void*)0), VAR_0, "SDL_CreateMutex(): %s\n", FUNC_4());
        return FUNC_0(VAR_1);
    }
    if (!(VAR_3->cond = FUNC_2())) {
        FUNC_6(((void*)0), VAR_0, "SDL_CreateCond(): %s\n", FUNC_4());
        return FUNC_0(VAR_1);
    }
    VAR_3->pktq = VAR_4;
    VAR_3->max_size = FUNC_1(VAR_5, VAR_2);
    VAR_3->keep_last = !!VAR_6;
    for (VAR_7 = 0; VAR_7 < VAR_3->max_size; VAR_7++)
        if (!(VAR_3->queue[VAR_7].frame = FUNC_5()))
            return FUNC_0(VAR_1);
    return 0;
}
