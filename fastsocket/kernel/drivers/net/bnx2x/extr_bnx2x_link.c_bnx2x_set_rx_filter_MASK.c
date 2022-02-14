
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;

void FUNC_3(struct link_params *VAR_4, u8 VAR_5)
{
 struct bnx2x *VAR_6 = VAR_4->bp;
 u8 VAR_7 = VAR_5 * 0x1F;


 if (!FUNC_1(VAR_6))
  VAR_7 |= VAR_5 * 0x20;
 FUNC_2(VAR_6, VAR_0 + VAR_4->port*4, VAR_7);

 if (!FUNC_0(VAR_6)) {
  FUNC_2(VAR_6, VAR_1 + VAR_4->port*4,
         VAR_5*0x3);
 }

 FUNC_2(VAR_6, (VAR_4->port ? VAR_3 :
      VAR_2), VAR_5);
}
