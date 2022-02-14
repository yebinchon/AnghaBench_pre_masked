
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(u32 VAR_9, u32 VAR_10)
{
 static int VAR_11;
 int VAR_12;


 FUNC_4();





 if (VAR_11 == 0 && (VAR_9 & VAR_5) >= VAR_6) {

  FUNC_5(VAR_3);
 }
 VAR_11 = 1;


 if (VAR_9 & VAR_4) {
  VAR_12 = FUNC_2(VAR_0);
  if (VAR_12 == VAR_7)
   FUNC_0(&VAR_8->dev->core, "Not supported\n");
  else if (VAR_12)
   FUNC_0(&VAR_8->dev->core,
    "ps3av_cmd_av_hdmi_mode failed\n");
 } else if (VAR_10 & VAR_4) {
  VAR_12 = FUNC_2(VAR_1);
  if (VAR_12 < 0 && VAR_12 != VAR_7)
   FUNC_0(&VAR_8->dev->core,
    "ps3av_cmd_av_hdmi_mode failed\n");
 }

 FUNC_5(VAR_9);

 FUNC_1(1500);

 FUNC_3(VAR_2);
}
