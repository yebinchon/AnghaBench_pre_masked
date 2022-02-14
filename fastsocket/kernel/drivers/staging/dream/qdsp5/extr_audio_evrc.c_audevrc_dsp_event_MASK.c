
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct audio {int running; int dec_id; int volume; int out_needed; int pcm_feedback; } ;







 unsigned int VAR_0 ;
 unsigned int VAR_1 ;


 int FUNC_0 (struct audio*,int) ;
 int FUNC_1 (struct audio*) ;
 int FUNC_2 (struct audio*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct audio*) ;
 int FUNC_5 (struct audio*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, unsigned VAR_3, uint16_t *VAR_4)
{
 struct audio *VAR_5 = VAR_2;

 switch (VAR_3) {
 case 128:{
   unsigned VAR_6 = VAR_4[1];

   switch (VAR_6) {
   case 131:
    FUNC_7("decoder status: sleep \n");
    break;

   case 133:
    FUNC_7("decoder status: init \n");
    FUNC_5(VAR_5);
    break;

   case 134:
    FUNC_7("decoder status: cfg \n");
    break;
   case 132:
    FUNC_7("decoder status: play \n");
    if (VAR_5->pcm_feedback) {
     FUNC_2(VAR_5);
     FUNC_1(VAR_5);
    }
    break;
   default:
    FUNC_8("unknown decoder status \n");
   }
   break;
  }
 case 130:
  if (VAR_4[0] == VAR_1) {
   FUNC_7("audevrc_dsp_event: CFG_MSG ENABLE\n");
   FUNC_0(VAR_5, 1);
   VAR_5->out_needed = 0;
   VAR_5->running = 1;
   FUNC_6(VAR_5->dec_id, VAR_5->volume,
       0);
   FUNC_3(VAR_5->dec_id, 22050);
  } else if (VAR_4[0] == VAR_0) {
   FUNC_7("audevrc_dsp_event: CFG_MSG DISABLE\n");
   FUNC_3(VAR_5->dec_id, 0);
   VAR_5->running = 0;
  } else {
   FUNC_8("audevrc_dsp_event: CFG_MSG %d?\n", VAR_4[0]);
  }
  break;
 case 129:
  FUNC_7("audevrc_dsp_event: ROUTING_ACK\n");
  FUNC_4(VAR_5);
  break;

 default:
  FUNC_8("audevrc_dsp_event: UNKNOWN (%d)\n", VAR_3);
 }

}
