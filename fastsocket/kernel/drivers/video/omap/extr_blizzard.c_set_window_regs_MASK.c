
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ version; TYPE_1__* extif; } ;
struct TYPE_3__ {int (* write_data ) (int*,int) ;int (* write_command ) (int*,int) ;int (* set_bits_per_cycle ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_9, int VAR_10, int VAR_11, int VAR_12,
       int VAR_13, int VAR_14,
       int VAR_15, int VAR_16, int VAR_17,
       int VAR_18, int VAR_19)
{
 u8 VAR_20[18];
 u8 VAR_21;

 VAR_11--;
 VAR_12--;
 VAR_20[0] = VAR_9;
 VAR_20[1] = VAR_9 >> 8;
 VAR_20[2] = VAR_10;
 VAR_20[3] = VAR_10 >> 8;
 VAR_20[4] = VAR_11;
 VAR_20[5] = VAR_11 >> 8;
 VAR_20[6] = VAR_12;
 VAR_20[7] = VAR_12 >> 8;

 VAR_15--;
 VAR_16--;
 VAR_20[8] = VAR_13;
 VAR_20[9] = VAR_13 >> 8;
 VAR_20[10] = VAR_14;
 VAR_20[11] = VAR_14 >> 8;
 VAR_20[12] = VAR_15;
 VAR_20[13] = VAR_15 >> 8;
 VAR_20[14] = VAR_16;
 VAR_20[15] = VAR_16 >> 8;

 VAR_20[16] = VAR_17;
 if (VAR_18 && VAR_8.version == VAR_6)
  VAR_20[17] = VAR_2;
 else if (VAR_19 & VAR_7)
  VAR_20[17] = VAR_4;
 else
  VAR_20[17] = VAR_8.version == VAR_5 ?
    VAR_1 :
    VAR_3;

 VAR_8.extif->set_bits_per_cycle(8);
 VAR_21 = VAR_0;
 VAR_8.extif->write_command(&VAR_21, 1);
 VAR_8.extif->write_data(VAR_20, 18);
}
