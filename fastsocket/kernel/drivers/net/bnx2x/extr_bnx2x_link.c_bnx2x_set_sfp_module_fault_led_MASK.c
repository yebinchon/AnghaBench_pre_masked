
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct link_params*,int ) ;
 int FUNC_3 (struct link_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_1,
        u8 VAR_2)
{
 struct bnx2x *VAR_3 = VAR_1->bp;
 FUNC_1(VAR_0, "Setting SFP+ module fault LED to %d\n", VAR_2);
 if (FUNC_0(VAR_3)) {



  FUNC_3(VAR_1, VAR_2);
 } else
  FUNC_2(VAR_1, VAR_2);
}
