
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dbg_chip_ident {int revision; int ident; int match; } ;
struct cx23888_ir_state {int rev; int id; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct cx23888_ir_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
       struct v4l2_dbg_chip_ident *VAR_1)
{
 struct cx23888_ir_state *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(&VAR_1->match)) {
  VAR_1->ident = VAR_2->id;
  VAR_1->revision = VAR_2->rev;
 }
 return 0;
}
