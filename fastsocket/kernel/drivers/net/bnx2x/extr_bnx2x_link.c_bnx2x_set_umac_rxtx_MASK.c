
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,int) ;
 int FUNC_1 (struct bnx2x*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct link_params *VAR_7, u8 VAR_8)
{
 u32 VAR_9 = VAR_7->port ? VAR_1 : VAR_0;
 u32 VAR_10;
 struct bnx2x *VAR_11 = VAR_7->bp;
 if (!(FUNC_0(VAR_11, VAR_3) &
     (VAR_2 << VAR_7->port)))
  return;
 VAR_10 = FUNC_0(VAR_11, VAR_9 + VAR_6);
 if (VAR_8)
  VAR_10 |= (VAR_5 |
   VAR_4);
 else
  VAR_10 &= ~(VAR_5 |
    VAR_4);

 FUNC_1(VAR_11, VAR_9 + VAR_6, VAR_10);
}
