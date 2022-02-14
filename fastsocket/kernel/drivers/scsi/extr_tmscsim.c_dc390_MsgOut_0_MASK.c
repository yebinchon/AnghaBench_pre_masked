
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dc390_srb {int SRBState; } ;
struct dc390_acb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0( struct dc390_acb* VAR_3, struct dc390_srb* VAR_4, u8 *VAR_5)
{
    if( VAR_4->SRBState & (VAR_2+VAR_1) )
 *VAR_5 = VAR_0;

}
