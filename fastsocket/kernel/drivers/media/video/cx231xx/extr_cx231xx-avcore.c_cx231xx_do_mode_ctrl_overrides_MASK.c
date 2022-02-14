
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {int norm; } ;


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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct cx231xx*,int ,int) ;

int FUNC_4(struct cx231xx *VAR_11)
{
 int VAR_12 = 0;

 FUNC_0("do_mode_ctrl_overrides : 0x%x\n",
       (unsigned int)VAR_11->norm);


 VAR_12 = FUNC_3(VAR_11, VAR_0, 0xCD3F0280);

 if (VAR_11->norm & (VAR_6 | VAR_7)) {
  FUNC_0("do_mode_ctrl_overrides NTSC\n");



  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_4, 0x18);
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_3,
       0x1E7000);
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_2,
       0x1C000000);

  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_5,
       VAR_1,
       FUNC_2
       (VAR_1, 0x79));

 } else if (VAR_11->norm & VAR_8) {
  FUNC_0("do_mode_ctrl_overrides SECAM\n");
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_4, 0x20);
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_3,
       FUNC_2
       (VAR_3,
        0x244));
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_2,
       FUNC_2
       (VAR_2,
       0x24));

  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_5,
       VAR_1,
       FUNC_2
       (VAR_1, 0x85));
 } else {
  FUNC_0("do_mode_ctrl_overrides PAL\n");
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_4, 0x20);
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_3,
       FUNC_2
       (VAR_3,
        0x244));
  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_9,
       VAR_2,
       FUNC_2
       (VAR_2,
       0x24));

  VAR_12 = FUNC_1(VAR_11,
       VAR_10,
       VAR_5,
       VAR_1,
       FUNC_2
       (VAR_1, 0x85));

 }

 return VAR_12;
}
