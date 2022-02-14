
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dc390_srb {int SRBState; void* EndMessage; void* TargetStatus; } ;
struct dc390_acb {int dummy; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2( struct dc390_acb* VAR_5, struct dc390_srb* VAR_6, u8 *VAR_7)
{

    VAR_6->TargetStatus = FUNC_0 (VAR_4);

    VAR_6->EndMessage = FUNC_0 (VAR_4);

    *VAR_7 = VAR_1;
    VAR_6->SRBState = VAR_2;
    FUNC_1 (VAR_3, VAR_0);
}
