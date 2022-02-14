
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double day_length; int time_changed; scalar_t__ message_index; int messages; scalar_t__ typing; int typing_buffer; scalar_t__ item_index; scalar_t__ flying; scalar_t__ observe2; scalar_t__ observe1; scalar_t__ player_count; int players; scalar_t__ chunk_count; int chunks; } ;
typedef int Player ;
typedef int Chunk ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2() {
    FUNC_1(VAR_5->chunks, 0, sizeof(Chunk) * VAR_1);
    VAR_5->chunk_count = 0;
    FUNC_1(VAR_5->players, 0, sizeof(Player) * VAR_3);
    VAR_5->player_count = 0;
    VAR_5->observe1 = 0;
    VAR_5->observe2 = 0;
    VAR_5->flying = 0;
    VAR_5->item_index = 0;
    FUNC_1(VAR_5->typing_buffer, 0, sizeof(char) * VAR_4);
    VAR_5->typing = 0;
    FUNC_1(VAR_5->messages, 0, sizeof(char) * VAR_2 * VAR_4);
    VAR_5->message_index = 0;
    VAR_5->day_length = VAR_0;
    FUNC_0(VAR_5->day_length / 3.0);
    VAR_5->time_changed = 1;
}
