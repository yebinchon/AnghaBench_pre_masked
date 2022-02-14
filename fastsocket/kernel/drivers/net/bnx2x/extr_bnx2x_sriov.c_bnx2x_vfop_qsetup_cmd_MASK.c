
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_virtf {int dummy; } ;
struct bnx2x_vfop_cmd {int block; int done; } ;
struct TYPE_3__ {int qid; } ;
struct TYPE_4__ {TYPE_1__ qctor; } ;
struct bnx2x_vfop {TYPE_2__ args; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bnx2x_vfop* FUNC_0 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ,int ) ;

int FUNC_3(struct bnx2x *VAR_3,
     struct bnx2x_virtf *VAR_4,
     struct bnx2x_vfop_cmd *VAR_5,
     int VAR_6)
{
 struct bnx2x_vfop *VAR_7 = FUNC_0(VAR_3, VAR_4);

 if (VAR_7) {
  VAR_7->args.qctor.qid = VAR_6;

  FUNC_1(VAR_0,
     VAR_2, VAR_5->done);
  return FUNC_2(VAR_3, VAR_4, VAR_2,
          VAR_5->block);
 }
 return -VAR_1;
}
