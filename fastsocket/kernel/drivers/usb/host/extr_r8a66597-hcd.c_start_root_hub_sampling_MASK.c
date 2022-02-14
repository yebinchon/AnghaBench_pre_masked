
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8a66597_root_hub {int old_syssts; int port; int scount; } ;
struct r8a66597 {struct r8a66597_root_hub* root_hub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct r8a66597*,int ) ;
 int FUNC_2 (struct r8a66597*) ;

__attribute__((used)) static void FUNC_3(struct r8a66597 *VAR_4, int VAR_5,
     int VAR_6)
{
 struct r8a66597_root_hub *VAR_7 = &VAR_4->root_hub[VAR_5];

 VAR_7->old_syssts = FUNC_1(VAR_4, FUNC_0(VAR_5)) & VAR_0;
 VAR_7->scount = VAR_1;
 if (VAR_6)
  VAR_7->port |= 1 << VAR_2;
 else
  VAR_7->port &= ~(1 << VAR_2);
 VAR_7->port |= 1 << VAR_3;

 FUNC_2(VAR_4);
}
