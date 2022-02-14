
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mgsl_struct {scalar_t__ bus_type; scalar_t__ io_base; scalar_t__ loopback_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_2, u16 VAR_3, u16 VAR_4 )
{
 FUNC_1( VAR_3 + VAR_2->loopback_bits, VAR_2->io_base + VAR_0 );
 FUNC_1( VAR_4, VAR_2->io_base + VAR_0 );


 if ( VAR_2->bus_type == VAR_1 )
  FUNC_0( VAR_2->io_base + VAR_0 );

}
