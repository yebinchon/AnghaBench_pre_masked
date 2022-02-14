
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ cidplay; } ;
struct TYPE_16__ {int cidsize; int write_q; scalar_t__ cid_play_flag; scalar_t__ cid_rec_flag; int cid_rec_volume; int cid_rec_codec; int cid_play_volume; int cid_play_aec_level; int cid_play_codec; int cid_base_frame_size; scalar_t__ fskdcnt; int board; TYPE_1__ flags; } ;
typedef TYPE_2__ IXJ ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(IXJ *VAR_3)
{
 FUNC_4(VAR_3);

 if(VAR_3->cidsize > 5000) {
  FUNC_0(VAR_0, VAR_3);
 }
 VAR_3->flags.cidplay = 0;
 if(VAR_1 & 0x0200) {
  FUNC_6("IXJ phone%d Finished Playing CallerID data %ld\n", VAR_3->board, VAR_2);
 }

 FUNC_2(VAR_3);

 VAR_3->fskdcnt = 0;
 FUNC_7(VAR_3, VAR_3->cid_base_frame_size);
 FUNC_8(VAR_3, VAR_3->cid_play_codec);
 FUNC_1(VAR_3, VAR_3->cid_play_aec_level);
 FUNC_9(VAR_3, VAR_3->cid_play_volume);

 FUNC_10(VAR_3, VAR_3->cid_rec_codec);
 FUNC_11(VAR_3, VAR_3->cid_rec_volume);

 if(VAR_3->cid_rec_flag)
  FUNC_5(VAR_3);

 if(VAR_3->cid_play_flag)
  FUNC_3(VAR_3);

 if(VAR_3->cid_play_flag) {
  FUNC_12(&VAR_3->write_q);
 }
}
