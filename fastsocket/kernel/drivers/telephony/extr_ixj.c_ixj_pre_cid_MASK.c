
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int cidplay; int recording; int playing; } ;
struct TYPE_13__ {int low; } ;
struct TYPE_15__ {int cid_base_frame_size; TYPE_2__ flags; TYPE_1__ baseframe; int aec_level; int cid_play_aec_level; int cid_rec_flag; int cid_rec_volume; int rec_codec; int cid_rec_codec; int cid_play_flag; int cid_play_volume; int play_frame_size; int cid_play_frame_size; int play_codec; int cid_play_codec; } ;
typedef TYPE_3__ IXJ ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_8(IXJ *VAR_1)
{
 VAR_1->cid_play_codec = VAR_1->play_codec;
 VAR_1->cid_play_frame_size = VAR_1->play_frame_size;
 VAR_1->cid_play_volume = FUNC_0(VAR_1);
 VAR_1->cid_play_flag = VAR_1->flags.playing;

 VAR_1->cid_rec_codec = VAR_1->rec_codec;
 VAR_1->cid_rec_volume = FUNC_1(VAR_1);
 VAR_1->cid_rec_flag = VAR_1->flags.recording;

 VAR_1->cid_play_aec_level = VAR_1->aec_level;

 switch(VAR_1->baseframe.low) {
  case 0xA0:
   VAR_1->cid_base_frame_size = 20;
   break;
  case 0x50:
   VAR_1->cid_base_frame_size = 10;
   break;
  case 0xF0:
   VAR_1->cid_base_frame_size = 30;
   break;
 }

 FUNC_4(VAR_1);
 FUNC_2(VAR_1);

 VAR_1->flags.cidplay = 1;

 FUNC_5(VAR_1, 30);
 FUNC_6(VAR_1, VAR_0);
 FUNC_7(VAR_1, 0x1B);
 FUNC_3(VAR_1);
}
