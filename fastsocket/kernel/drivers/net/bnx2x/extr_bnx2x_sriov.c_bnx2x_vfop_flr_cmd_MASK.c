
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfop_handler_t ;
struct bnx2x_virtf {int dummy; } ;
struct TYPE_3__ {int qid; } ;
struct TYPE_4__ {TYPE_1__ qx; } ;
struct bnx2x_vfop {TYPE_2__ args; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bnx2x_vfop* FUNC_0 (struct bnx2x*,struct bnx2x_virtf*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_3,
         struct bnx2x_virtf *VAR_4,
         vfop_handler_t VAR_5)
{
 struct bnx2x_vfop *VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6) {
  VAR_6->args.qx.qid = -1;
  FUNC_1(VAR_0,
     VAR_2, VAR_5);
  return FUNC_2(VAR_3, VAR_4, VAR_2, 0);
 }
 return -VAR_1;
}
