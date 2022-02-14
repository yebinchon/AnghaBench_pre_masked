
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dc390_srb {int SRBState; } ;
struct dc390_acb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1( struct dc390_acb* VAR_5, struct dc390_srb* VAR_6, u8 *VAR_7)
{
    FUNC_0 (VAR_4, VAR_0);
    if( !(VAR_6->SRBState & VAR_3) )
    {
 VAR_6->SRBState &= ~VAR_2;
 VAR_6->SRBState |= VAR_3;
    }
    FUNC_0 (VAR_4, VAR_1);

}
