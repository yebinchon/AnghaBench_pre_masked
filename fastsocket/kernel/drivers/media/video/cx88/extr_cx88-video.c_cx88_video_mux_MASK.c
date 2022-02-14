
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ audio_chip; } ;
struct cx88_core {unsigned int input; int tvaudio; TYPE_1__ board; } ;
struct TYPE_4__ {int vmux; int gpio0; int gpio1; int gpio2; int gpio3; int type; scalar_t__ audioroute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct cx88_core*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct cx88_core*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,char*,unsigned int,int,int,int,int,int) ;
 int VAR_16 ;

int FUNC_8(struct cx88_core *VAR_17, unsigned int VAR_18)
{


 FUNC_7(1,"video_mux: %d [vmux=%d,gpio=0x%x,0x%x,0x%x,0x%x]\n",
  VAR_18, FUNC_0(VAR_18).vmux,
  FUNC_0(VAR_18).gpio0,FUNC_0(VAR_18).gpio1,
  FUNC_0(VAR_18).gpio2,FUNC_0(VAR_18).gpio3);
 VAR_17->input = VAR_18;
 FUNC_3(VAR_12, 0x03 << 14, FUNC_0(VAR_18).vmux << 14);
 FUNC_6(VAR_11, FUNC_0(VAR_18).gpio3);
 FUNC_6(VAR_8, FUNC_0(VAR_18).gpio0);
 FUNC_6(VAR_9, FUNC_0(VAR_18).gpio1);
 FUNC_6(VAR_10, FUNC_0(VAR_18).gpio2);

 switch (FUNC_0(VAR_18).type) {
 case 128:
  FUNC_5(VAR_5, 0x00000001);
  FUNC_5(VAR_12, 0x00010010);
  FUNC_5(VAR_6, 0x00002020);
  FUNC_5(VAR_7, 0x00002020);
  break;
 default:
  FUNC_4(VAR_5, 0x00000001);
  FUNC_4(VAR_12, 0x00010010);
  FUNC_4(VAR_6, 0x00002020);
  FUNC_4(VAR_7, 0x00002020);
  break;
 }



 if (FUNC_0(VAR_18).audioroute) {



  if (VAR_17->board.audio_chip &&
      VAR_17->board.audio_chip == VAR_13) {
   FUNC_1(VAR_17, VAR_15, VAR_16,
     FUNC_0(VAR_18).audioroute, 0, 0);
  }



  if (FUNC_0(VAR_18).type != VAR_3 &&
      FUNC_0(VAR_18).type != VAR_2) {

   VAR_17->tvaudio = VAR_14;
   FUNC_2(VAR_17);
  } else {

   FUNC_6(VAR_1, 0x0);
   FUNC_4(VAR_0, VAR_4);
  }
 }

 return 0;
}
