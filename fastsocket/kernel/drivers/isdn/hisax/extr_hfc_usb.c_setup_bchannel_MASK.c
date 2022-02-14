
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* b_mode; scalar_t__ disc_flag; } ;
typedef TYPE_1__ hfcusb_data ;
typedef int __u8 ;


 int FUNC_0 (int ,char*,int,int) ;
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
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(hfcusb_data * VAR_12, int VAR_13, int VAR_14)
{
 __u8 VAR_15, VAR_16[2] = { 0, 2 };

 if (VAR_12->disc_flag) {
  return;
 }
 FUNC_0(VAR_1, "HFC-S USB: setting channel %d to mode %d",
     VAR_13, VAR_14);
 VAR_12->b_mode[VAR_13] = VAR_14;


 VAR_15 = 0;
 if (VAR_14 != VAR_6)
  VAR_15 = 8;
 if (VAR_14 == VAR_7)
  VAR_15 |= 2;


 FUNC_2(VAR_12, VAR_2, VAR_16[VAR_13], 1);
 FUNC_2(VAR_12, VAR_0, VAR_15, 1);

 FUNC_2(VAR_12, VAR_3, 2, 1);

 FUNC_2(VAR_12, VAR_2, VAR_16[VAR_13] + 1, 1);
 FUNC_2(VAR_12, VAR_0, VAR_15, 1);

 FUNC_2(VAR_12, VAR_3, 2, 1);

 VAR_15 = 0x40;
 if (VAR_12->b_mode[0])
  VAR_15 |= 1;
 if (VAR_12->b_mode[1])
  VAR_15 |= 2;
 FUNC_2(VAR_12, VAR_4, VAR_15, 1);

 VAR_15 = 0;
 if (VAR_12->b_mode[0])
  VAR_15 |= 1;
 if (VAR_12->b_mode[1])
  VAR_15 |= 2;
 FUNC_2(VAR_12, VAR_5, VAR_15, 1);

 if (VAR_14 == VAR_6) {
  if (VAR_13)
   FUNC_1(VAR_12, VAR_10);
  else
   FUNC_1(VAR_12, VAR_8);
 } else {
  if (VAR_13)
   FUNC_1(VAR_12, VAR_11);
  else
   FUNC_1(VAR_12, VAR_9);
 }
}
