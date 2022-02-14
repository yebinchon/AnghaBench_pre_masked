
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ playing; } ;
struct TYPE_6__ {int play_mode; TYPE_1__ flags; scalar_t__ write_buffer_size; int * write_buffer; int play_codec; int board; } ;
typedef TYPE_2__ IXJ ;


 int FUNC_0 (int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(IXJ *VAR_2)
{
 if (VAR_0 & 0x0002)
  FUNC_2("IXJ %d Stopping Play Codec %d at %ld\n", VAR_2->board, VAR_2->play_codec, VAR_1);

 FUNC_1(VAR_2->write_buffer);
 VAR_2->write_buffer = ((void*)0);
 VAR_2->write_buffer_size = 0;
 if (VAR_2->play_mode > -1) {
  FUNC_0(0x5221, VAR_2);

  VAR_2->play_mode = -1;
 }
 VAR_2->flags.playing = 0;
}
