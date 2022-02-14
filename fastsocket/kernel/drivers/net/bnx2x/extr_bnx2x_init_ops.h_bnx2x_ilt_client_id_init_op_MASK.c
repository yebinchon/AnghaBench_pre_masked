
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ilt_client_info {int dummy; } ;
struct bnx2x_ilt {struct ilt_client_info* clients; } ;
struct bnx2x {int dummy; } ;


 struct bnx2x_ilt* FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,struct ilt_client_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0,
     int VAR_1, u8 VAR_2)
{
 struct bnx2x_ilt *VAR_3 = FUNC_0(VAR_0);
 struct ilt_client_info *VAR_4 = &VAR_3->clients[VAR_1];

 FUNC_1(VAR_0, VAR_4, VAR_2);
}
