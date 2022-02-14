
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_2__ {int sp_protocol; int sp_family; } ;
struct rawcb {TYPE_1__ rcb_proto; struct socket* rcb_socket; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct rawcb*,int ) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct socket*,int ,int ) ;
 struct rawcb* FUNC_5 (struct socket*) ;

int
FUNC_6(struct socket *VAR_6, int VAR_7)
{
 struct rawcb *VAR_8 = FUNC_5(VAR_6);
 int VAR_9;






 if (VAR_8 == 0)
  return (VAR_0);
 VAR_9 = FUNC_4(VAR_6, VAR_4, VAR_3);
 if (VAR_9)
  return (VAR_9);
 VAR_8->rcb_socket = VAR_6;
 VAR_8->rcb_proto.sp_family = FUNC_1(VAR_6);
 VAR_8->rcb_proto.sp_protocol = VAR_7;
 FUNC_2(VAR_2);
 FUNC_0(&VAR_5, VAR_8, VAR_1);
 FUNC_3(VAR_2);
 return (0);
}
