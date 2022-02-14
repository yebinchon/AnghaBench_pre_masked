
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bnx2x*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct link_params *VAR_2)
{
 u8 VAR_3;
 u32 VAR_4, VAR_5;
 struct bnx2x *VAR_6 = VAR_2->bp;
 if (FUNC_1(VAR_6))
  VAR_3 = FUNC_0(VAR_6);
 else
  VAR_3 = VAR_2->port;
 VAR_4 = FUNC_2(VAR_6, VAR_0);
 VAR_5 = FUNC_2(VAR_6, VAR_1);
 return VAR_3 ^ (VAR_4 && VAR_5);
}
