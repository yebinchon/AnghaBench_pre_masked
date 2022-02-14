
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct link_params *VAR_6,
    u16 VAR_7,
    u8 VAR_8)
{
 struct bnx2x *VAR_9 = VAR_6->bp;

 FUNC_0(VAR_9, VAR_6->port ? VAR_3 : VAR_0,
        VAR_8);
 FUNC_0(VAR_9, VAR_6->port ? VAR_4 : VAR_1,
        VAR_8);
 FUNC_0(VAR_9, VAR_6->port ? VAR_5 :
        VAR_2, VAR_7);
}
