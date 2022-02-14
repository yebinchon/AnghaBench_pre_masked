
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mgsl_struct {scalar_t__ io_base; scalar_t__ loopback_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2( struct mgsl_struct *VAR_1, u16 VAR_2 )
{
 FUNC_1( VAR_2 + VAR_1->loopback_bits, VAR_1->io_base + VAR_0 );
 return FUNC_0( VAR_1->io_base + VAR_0 );

}
