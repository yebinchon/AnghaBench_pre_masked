
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int flags; scalar_t__ crc_type; int encoding; int clock_speed; scalar_t__ loopback; } ;
struct TYPE_14__ {int port_num; int buffer_list_phys; unsigned char ie0_value; int serial_signals; TYPE_2__ params; TYPE_1__** port_array; } ;
struct TYPE_12__ {int ctrlreg_value; } ;
typedef TYPE_3__ SLMP_INFO ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;







 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 unsigned char VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 unsigned char VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_0 (TYPE_3__*,int) ;
 unsigned char VAR_35 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 unsigned char VAR_36 ;
 int VAR_37 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,unsigned char) ;

__attribute__((used)) static void FUNC_7(SLMP_INFO *VAR_38)
{
 unsigned char VAR_39;
 u32 VAR_40;





 VAR_38->params.flags &= ~(VAR_20 + VAR_18);


 FUNC_6(VAR_38, VAR_32 + VAR_10, 0);
 FUNC_6(VAR_38, VAR_26 + VAR_10, 0);
 VAR_39 = 0x81;
 if (VAR_38->params.flags & VAR_13)
  VAR_39 |= VAR_4;
 if (VAR_38->params.flags & VAR_14)
  VAR_39 |= VAR_4;
 if (VAR_38->params.crc_type == VAR_12)
  VAR_39 |= VAR_2 + VAR_1;
 FUNC_6(VAR_38, VAR_22, VAR_39);
 VAR_39 = 0x00;
 FUNC_6(VAR_38, VAR_23, VAR_39);
 VAR_39 = 0x00;
 switch(VAR_38->params.encoding) {
 case 129: VAR_39 |= VAR_5; break;
 case 133: VAR_39 |= VAR_7 + VAR_5; break;
 case 132: VAR_39 |= VAR_7 + VAR_6; break;
 case 134: VAR_39 |= VAR_7; break;





 }
 if ( VAR_38->params.flags & VAR_15 ) {
  VAR_40 = 16;
  VAR_39 |= VAR_3;
 } else if ( VAR_38->params.flags & VAR_16 ) {
  VAR_40 = 8;
 } else {
  VAR_40 = 32;
  VAR_39 |= VAR_4;
 }
 FUNC_6(VAR_38, VAR_24, VAR_39);
 VAR_39=0;
 if (VAR_38->params.flags & VAR_17)
  VAR_39 |= VAR_6;
 if (VAR_38->params.flags & VAR_18)
  VAR_39 |= VAR_6 + VAR_5;
 FUNC_6(VAR_38, VAR_28, VAR_39);







 VAR_39=0;
 if (VAR_38->params.flags & VAR_19)
  VAR_39 |= VAR_6;
 if (VAR_38->params.flags & VAR_20)
  VAR_39 |= VAR_6 + VAR_5;
 FUNC_6(VAR_38, VAR_34, VAR_39);

 if (VAR_38->params.flags & VAR_18)
  FUNC_2(VAR_38, VAR_38->params.clock_speed * VAR_40);
 else
  FUNC_2(VAR_38, VAR_38->params.clock_speed);





 if (VAR_38->params.flags & VAR_19)
  VAR_38->port_array[0]->ctrlreg_value |= (VAR_0 << (VAR_38->port_num * 2));
 else
  VAR_38->port_array[0]->ctrlreg_value &= ~(VAR_0 << (VAR_38->port_num * 2));
 FUNC_5(VAR_38);






 FUNC_6(VAR_38, VAR_25, VAR_35);






 FUNC_6(VAR_38, VAR_30, VAR_36);






 FUNC_6(VAR_38, VAR_31, (unsigned char)(VAR_37 - 1));
 FUNC_6(VAR_38, VAR_32 + VAR_11, 0x14);
 FUNC_6(VAR_38, VAR_26 + VAR_11, 0x14);


 FUNC_6(VAR_38, VAR_26 + VAR_8,
  (unsigned char)(VAR_38->buffer_list_phys >> 16));


 FUNC_6(VAR_38, VAR_32 + VAR_8,
  (unsigned char)(VAR_38->buffer_list_phys >> 16));




 VAR_38->ie0_value |= VAR_33 + VAR_27;
 FUNC_6(VAR_38, VAR_21, VAR_38->ie0_value);
 VAR_39 = 0x10;
 if (!(VAR_38->serial_signals & VAR_29))
  VAR_39 |= 0x01;
 FUNC_6(VAR_38, VAR_9, VAR_39);



 FUNC_3(VAR_38);
 FUNC_4(VAR_38);
 FUNC_1(VAR_38);

 FUNC_2(VAR_38, VAR_38->params.clock_speed);

 if (VAR_38->params.loopback)
  FUNC_0(VAR_38,1);
}
