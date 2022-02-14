
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int fb_local_base; int pitch; unsigned long dp_gui_master_cntl; int depth; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeonfb_info*) ;
 int VAR_19 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (struct radeonfb_info*) ;

void FUNC_8 (struct radeonfb_info *VAR_25)
{
 unsigned long VAR_26;


 FUNC_2(VAR_23, 0);

 FUNC_7(VAR_25);

 FUNC_5 (1);
 if (FUNC_1(VAR_25)) {
  FUNC_2(VAR_22, FUNC_0(VAR_22) |
         VAR_20 |
         VAR_21);
 } else {





  FUNC_2(VAR_22, 0);
 }

 FUNC_5 (3);



 VAR_25->fb_local_base = FUNC_0(VAR_19) << 16;

 FUNC_2(VAR_0, (VAR_25->pitch << 0x16) |
         (VAR_25->fb_local_base >> 10));
 FUNC_2(VAR_14, (VAR_25->pitch << 0x16) | (VAR_25->fb_local_base >> 10));
 FUNC_2(VAR_24, (VAR_25->pitch << 0x16) | (VAR_25->fb_local_base >> 10));

 FUNC_5 (1);



 FUNC_3(VAR_7, 0, ~VAR_18);

 FUNC_5 (2);
 FUNC_2(VAR_4, 0);
 FUNC_2(VAR_2, (VAR_3 |
      VAR_1));

 VAR_26 = FUNC_6(VAR_25->depth);
 VAR_25->dp_gui_master_cntl = ((VAR_26 << 8) | VAR_16);

 FUNC_5 (1);
 FUNC_2(VAR_8, (VAR_25->dp_gui_master_cntl |
        VAR_15 |
        VAR_17));

 FUNC_5 (7);


 FUNC_2(VAR_13, 0);
 FUNC_2(VAR_12, 0);


 FUNC_2(VAR_6, 0xffffffff);
 FUNC_2(VAR_5, 0x00000000);


 FUNC_2(VAR_10, 0xffffffff);
 FUNC_2(VAR_9, 0x00000000);


 FUNC_2(VAR_11, 0xffffffff);

 FUNC_4 ();
}
