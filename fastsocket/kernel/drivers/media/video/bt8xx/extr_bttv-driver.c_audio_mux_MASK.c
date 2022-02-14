
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_control {int value; int id; } ;
struct TYPE_3__ {size_t type; } ;
struct bttv {int mute; int audio; scalar_t__ sd_tvaudio; scalar_t__ sd_msp34xx; TYPE_1__ c; int radio_user; scalar_t__ opt_automute; } ;
struct TYPE_4__ {int gpiomute; int* gpiomux; int gpiomask; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bttv*,int ,int ,struct v4l2_control*) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct bttv*,int ) ;
 int FUNC_4 (struct bttv*,int) ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (scalar_t__,int ,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct bttv *VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21, VAR_22;
 struct v4l2_control VAR_23;

 FUNC_6(VAR_14[VAR_18->c.type].gpiomask,
     VAR_14[VAR_18->c.type].gpiomask);
 VAR_22 = FUNC_1(VAR_0) & VAR_1;

 VAR_18->mute = VAR_20;
 VAR_18->audio = VAR_19;


 VAR_20 = VAR_20 || (VAR_18->opt_automute && !VAR_22 && !VAR_18->radio_user);

 if (VAR_20)
  VAR_21 = VAR_14[VAR_18->c.type].gpiomute;
 else
  VAR_21 = VAR_14[VAR_18->c.type].gpiomux[VAR_19];

 switch (VAR_18->c.type) {
 case 132:
 case 133:
  VAR_21 = FUNC_4(VAR_18, VAR_21);
  break;

 default:
  FUNC_5(VAR_14[VAR_18->c.type].gpiomask, VAR_21);
 }

 if (VAR_13)
  FUNC_3(VAR_18, VAR_12[VAR_20 ? 4 : VAR_19]);
 if (FUNC_7())
  return 0;

 VAR_23.id = VAR_10;
 VAR_23.value = VAR_18->mute;
 FUNC_2(VAR_18, VAR_15, VAR_16, &VAR_23);
 if (VAR_18->sd_msp34xx) {
  u32 VAR_24;






  switch (VAR_19) {
  case 129:
   VAR_24 = FUNC_0(VAR_6, VAR_7,
        VAR_2, VAR_2);
   break;
  case 131:
   VAR_24 = FUNC_0(VAR_5, VAR_7,
        VAR_2, VAR_2);
   break;
  case 130:





   VAR_24 = FUNC_0(VAR_6, VAR_7,
        VAR_2, VAR_2);
   break;
  case 128:
  default:



   if (VAR_18->c.type == 133)
    VAR_24 = FUNC_0(VAR_5, VAR_8, VAR_3, VAR_3);

   else
    VAR_24 = VAR_4;
   break;
  }
  FUNC_8(VAR_18->sd_msp34xx, VAR_11, VAR_17,
          VAR_24, VAR_9, 0);
 }
 if (VAR_18->sd_tvaudio) {
  FUNC_8(VAR_18->sd_tvaudio, VAR_11, VAR_17,
    VAR_19, 0, 0);
 }
 return 0;
}
