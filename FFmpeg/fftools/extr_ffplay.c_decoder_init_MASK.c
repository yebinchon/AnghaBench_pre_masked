
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkt_serial; int start_pts; int * empty_queue_cond; int * queue; int * avctx; } ;
typedef int SDL_cond ;
typedef int PacketQueue ;
typedef TYPE_1__ Decoder ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(Decoder *VAR_1, AVCodecContext *VAR_2, PacketQueue *VAR_3, SDL_cond *VAR_4) {
    FUNC_0(VAR_1, 0, sizeof(Decoder));
    VAR_1->avctx = VAR_2;
    VAR_1->queue = VAR_3;
    VAR_1->empty_queue_cond = VAR_4;
    VAR_1->start_pts = VAR_0;
    VAR_1->pkt_serial = -1;
}
