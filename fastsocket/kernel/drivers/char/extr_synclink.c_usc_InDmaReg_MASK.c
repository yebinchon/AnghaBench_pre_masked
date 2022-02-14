
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mgsl_struct {int io_base; scalar_t__ mbre_bit; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static u16 FUNC_2( struct mgsl_struct *VAR_0, u16 VAR_1 )
{



 FUNC_1( VAR_1 + VAR_0->mbre_bit, VAR_0->io_base );
 return FUNC_0( VAR_0->io_base );

}
