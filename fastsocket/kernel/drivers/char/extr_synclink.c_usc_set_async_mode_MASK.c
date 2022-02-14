
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int stop_bits; int data_bits; scalar_t__ parity; scalar_t__ loopback; int data_rate; } ;
struct mgsl_struct {scalar_t__ bus_type; int loopback_bits; scalar_t__ io_base; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_2 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_3 (struct mgsl_struct*) ;
 int FUNC_4 (struct mgsl_struct*,int ) ;
 int FUNC_5 (struct mgsl_struct*) ;
 int FUNC_6 (struct mgsl_struct*,int ) ;
 int FUNC_7 (struct mgsl_struct*,int ,int) ;
 int FUNC_8 (struct mgsl_struct*,int ) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*,int ) ;
 int FUNC_11 (struct mgsl_struct*,int ) ;
 int FUNC_12 (struct mgsl_struct*,int ) ;
 int FUNC_13 (struct mgsl_struct*) ;
 int FUNC_14 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_15( struct mgsl_struct *VAR_28 )
{
 u16 VAR_29;


 FUNC_3( VAR_28 );

 FUNC_0( 0, VAR_28->io_base );
 FUNC_4( VAR_28, VAR_13 );

 FUNC_13( VAR_28 );
 VAR_29 = 0;
 if ( VAR_28->params.stop_bits != 1 )
  VAR_29 |= VAR_4;
 FUNC_7( VAR_28, VAR_12, VAR_29 );
 VAR_29 = 0;

 if ( VAR_28->params.data_bits != 8 )
  VAR_29 |= VAR_7+VAR_6+VAR_5;

 if ( VAR_28->params.parity != VAR_0 ) {
  VAR_29 |= VAR_8;
  if ( VAR_28->params.parity != VAR_1 )
   VAR_29 |= VAR_9;
 }

 FUNC_7( VAR_28, VAR_20, VAR_29 );




 FUNC_8( VAR_28, VAR_16 );
 FUNC_7( VAR_28, VAR_19, 0x0000 );

 FUNC_10( VAR_28, VAR_21 );
 FUNC_1( VAR_28, VAR_18 );
 VAR_29 = 0;

 if ( VAR_28->params.data_bits != 8 )
  VAR_29 |= VAR_7+VAR_6+VAR_5;

 if ( VAR_28->params.parity != VAR_0 ) {
  VAR_29 |= VAR_8;
  if ( VAR_28->params.parity != VAR_1 )
   VAR_29 |= VAR_9;
 }

 FUNC_7( VAR_28, VAR_24, VAR_29 );

 FUNC_14( VAR_28 );




 FUNC_9( VAR_28, VAR_22 );
 FUNC_7( VAR_28, VAR_23, 0x1f40 );

 FUNC_11( VAR_28, VAR_27 );
 FUNC_1( VAR_28, VAR_26 );

 FUNC_12( VAR_28, VAR_28->params.data_rate );
 FUNC_7( VAR_28, VAR_11, 0x0020 );

 FUNC_2( VAR_28, VAR_26 + VAR_25 +
         VAR_17 + VAR_18 );

 FUNC_1( VAR_28, VAR_26 + VAR_25 +
    VAR_17 + VAR_18 );

 FUNC_5( VAR_28 );

 if (VAR_28->bus_type == VAR_14) {


  FUNC_7(VAR_28, VAR_15, (u16)((FUNC_6(VAR_28, VAR_15) | VAR_3) & ~VAR_2));
 }

 if (VAR_28->params.loopback) {
  VAR_28->loopback_bits = 0x300;
  FUNC_0(0x0300, VAR_28->io_base + VAR_10);
 }

}
