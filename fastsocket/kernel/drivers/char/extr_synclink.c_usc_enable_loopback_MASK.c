
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int clock_speed; } ;
struct mgsl_struct {scalar_t__ bus_type; int loopback_bits; scalar_t__ io_base; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct mgsl_struct*,int ) ;
 int FUNC_2 (struct mgsl_struct*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mgsl_struct *VAR_10, int VAR_11)
{
 if (VAR_11) {

  FUNC_2(VAR_10,VAR_7,FUNC_1(VAR_10,VAR_7) | (VAR_3+VAR_2));
  FUNC_2( VAR_10, VAR_5, 0x0f64 );



  if (VAR_10->params.clock_speed) {
   if (VAR_10->bus_type == VAR_8)
    FUNC_2(VAR_10, VAR_9, (u16)((11059200/VAR_10->params.clock_speed)-1));
   else
    FUNC_2(VAR_10, VAR_9, (u16)((14745600/VAR_10->params.clock_speed)-1));
  } else
   FUNC_2(VAR_10, VAR_9, (u16)8);



  FUNC_2( VAR_10, VAR_6, (u16)((FUNC_1( VAR_10, VAR_6 ) & ~VAR_1) | VAR_0) );


  FUNC_2(VAR_10, VAR_7, (u16)((FUNC_1(VAR_10, VAR_7) & 0xfff8) | 0x0004));


  VAR_10->loopback_bits = 0x300;
  FUNC_0( 0x0300, VAR_10->io_base + VAR_4 );
 } else {

  FUNC_2(VAR_10,VAR_7,FUNC_1(VAR_10,VAR_7) & ~(VAR_3+VAR_2));


  VAR_10->loopback_bits = 0;
  FUNC_0( 0,VAR_10->io_base + VAR_4 );
 }

}
