
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_4__ {int sp_protocol; } ;
struct rawcb {TYPE_1__ rcb_proto; } ;
struct TYPE_6__ {int (* pru_detach ) (struct socket*) ;} ;
struct TYPE_5__ {int any_count; int ip6_count; int ip_count; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct rawcb* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2)
{
 struct rawcb *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3 != ((void*)0));

 switch (VAR_3->rcb_proto.sp_protocol) {
 case 129:
  FUNC_1(&VAR_1.ip_count, -1);
  break;
 case 128:
  FUNC_1(&VAR_1.ip6_count, -1);
  break;
 }
 FUNC_1(&VAR_1.any_count, -1);
 return (VAR_0.pru_detach(VAR_2));
}
