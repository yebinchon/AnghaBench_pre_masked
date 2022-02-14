
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_5__ {scalar_t__ sp_protocol; } ;
struct TYPE_6__ {TYPE_1__ rcb_proto; } ;
struct keycb {TYPE_2__ kp_raw; } ;
struct TYPE_8__ {int any_count; int key_count; } ;
struct TYPE_7__ {int (* pru_detach ) (struct socket*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (struct socket*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (struct socket*,int ) ;
 int FUNC_2 (struct socket*,int ) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_3)
{
 struct keycb *VAR_4 = (struct keycb *)FUNC_3(VAR_3);
 int VAR_5;

 if (VAR_4 != 0) {
  if (VAR_4->kp_raw.rcb_proto.sp_protocol == VAR_0)
   VAR_1.key_count--;
  VAR_1.any_count--;
  FUNC_2(VAR_3, 0);
  FUNC_0(VAR_3);
  FUNC_1(VAR_3, 0);
 }
 VAR_5 = VAR_2.pru_detach(VAR_3);
 return VAR_5;
}
