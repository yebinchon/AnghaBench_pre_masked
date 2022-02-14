
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int dummy; } ;
struct link_params {int shmem_base; int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int ,int ) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static int FUNC_6(struct bnx2x_phy *VAR_10,
      struct link_params *VAR_11,
      struct link_vars *VAR_12)
{
 struct bnx2x *VAR_13 = VAR_11->bp;
 FUNC_0(VAR_9, "init 8705\n");

 FUNC_4(VAR_13, VAR_7,
         VAR_8, VAR_11->port);

 FUNC_2(VAR_13, VAR_11->port);
 FUNC_1(VAR_13, VAR_10, VAR_0, VAR_2, 0xa040);
 FUNC_5(VAR_13, VAR_10, VAR_11);

 FUNC_1(VAR_13, VAR_10,
    VAR_0, VAR_3, 0x8288);
 FUNC_1(VAR_13, VAR_10,
    VAR_0, VAR_4, 0x7fbf);
 FUNC_1(VAR_13, VAR_10,
    VAR_0, VAR_1, 0x0100);
 FUNC_1(VAR_13, VAR_10,
    VAR_5, VAR_6, 0x1);

 FUNC_3(VAR_13, VAR_11->port, VAR_11->shmem_base, 0);
 return 0;
}
