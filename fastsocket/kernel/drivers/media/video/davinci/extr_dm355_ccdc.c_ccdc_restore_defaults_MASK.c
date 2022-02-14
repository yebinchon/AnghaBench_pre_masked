
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* b_mg; void* gr_cy; void* gb_g; void* r_ye; } ;
struct TYPE_4__ {TYPE_1__ gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_17;

 FUNC_1(VAR_16, "\nstarting ccdc_restore_defaults...");

 for (VAR_17 = 0; VAR_17 <= VAR_0; VAR_17 += 4)
  FUNC_2(0, VAR_17);


 FUNC_2(VAR_10, VAR_9);

 FUNC_2(VAR_2, VAR_1);
 FUNC_2(VAR_4, VAR_3);

 VAR_15.gain.r_ye = VAR_6;
 VAR_15.gain.gb_g = VAR_6;
 VAR_15.gain.gr_cy = VAR_6;
 VAR_15.gain.b_mg = VAR_6;
 FUNC_0();
 FUNC_2(VAR_12, VAR_11);
 FUNC_2(VAR_8, VAR_7);

 if (FUNC_4(VAR_13)) {
  FUNC_1(VAR_16, "\ncouldn't select ccdc input source");
  return -VAR_5;
 }

 if (FUNC_3(VAR_14, 1) < 0) {
  FUNC_1(VAR_16, "\ncouldn't enable ccdc clock");
  return -VAR_5;
 }
 FUNC_1(VAR_16, "\nEnd of ccdc_restore_defaults...");
 return 0;
}
