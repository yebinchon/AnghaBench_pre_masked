
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct audio_in {int dummy; } ;
typedef int cmd ;
struct TYPE_4__ {int curr_rec_count_msw; int curr_rec_count_lsw; int type; int cmd_id; } ;
typedef TYPE_1__ audrec_cmd_packet_ext_ptr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audio_in*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct audio_in *VAR_2, uint32_t VAR_3)
{
 audrec_cmd_packet_ext_ptr VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd_id = VAR_0;

 VAR_4.type = VAR_1;
 VAR_4.curr_rec_count_msw = VAR_3 >> 16;
 VAR_4.curr_rec_count_lsw = VAR_3;

 return FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
