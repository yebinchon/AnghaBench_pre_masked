
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mgsl_struct {scalar_t__ bus_type; int io_base; scalar_t__ mbre_bit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_1, u16 VAR_2 )
{

 FUNC_1( VAR_2 + VAR_1->mbre_bit, VAR_1->io_base );


 if ( VAR_1->bus_type == VAR_0 )
  FUNC_0( VAR_1->io_base );

}
