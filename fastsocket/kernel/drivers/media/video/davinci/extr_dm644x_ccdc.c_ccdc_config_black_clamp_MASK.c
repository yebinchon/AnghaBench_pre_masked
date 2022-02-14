
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccdc_black_clamp {int dc_sub; int sgain; int start_pixel; int sample_ln; int sample_pixel; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct ccdc_black_clamp *VAR_14)
{
 u32 VAR_15;

 if (!VAR_14->enable) {

  VAR_15 = (VAR_14->dc_sub) & VAR_1;
  FUNC_1(VAR_15, VAR_11);
  FUNC_0(VAR_13, "\nWriting 0x%x to DCSUB...\n", VAR_15);
  FUNC_1(VAR_10, VAR_9);
  FUNC_0(VAR_13, "\nWriting 0x0000 to CLAMP...\n");
  return;
 }




 VAR_15 = ((VAR_14->sgain & VAR_6) |
        ((VAR_14->start_pixel & VAR_7) <<
  VAR_8) |
        ((VAR_14->sample_ln & VAR_2) <<
  VAR_3) |
        ((VAR_14->sample_pixel & VAR_4) <<
  VAR_5) | VAR_0);
 FUNC_1(VAR_15, VAR_9);
 FUNC_0(VAR_13, "\nWriting 0x%x to CLAMP...\n", VAR_15);

 FUNC_1(VAR_12, VAR_11);
 FUNC_0(VAR_13, "\nWriting 0x00000000 to DCSUB...\n");
}
