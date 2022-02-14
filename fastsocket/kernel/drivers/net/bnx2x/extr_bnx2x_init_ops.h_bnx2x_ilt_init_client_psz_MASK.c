
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ilt_client_info {int flags; int page_size; } ;
struct bnx2x_ilt {struct ilt_client_info* clients; } ;
struct bnx2x {int dummy; } ;


 struct bnx2x_ilt* FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;



 int FUNC_2 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, int VAR_2,
          u32 VAR_3, u8 VAR_4)
{
 struct bnx2x_ilt *VAR_5 = FUNC_0(VAR_1);
 struct ilt_client_info *VAR_6 = &VAR_5->clients[VAR_2];

 if (VAR_6->flags & VAR_0)
  return;

 switch (VAR_4) {
 case 129:

 case 128:
  FUNC_2(VAR_1, VAR_3, FUNC_1(VAR_6->page_size >> 12));
  break;
 case 130:
  break;
 }
}
