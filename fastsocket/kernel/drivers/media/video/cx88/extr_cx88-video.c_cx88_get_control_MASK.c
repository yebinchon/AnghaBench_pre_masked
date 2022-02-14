
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_control {int id; int value; } ;
struct TYPE_2__ {int id; int name; } ;
struct cx88_ctrl {int off; int shift; int mask; scalar_t__ sreg; int reg; TYPE_1__ v; } ;
struct cx88_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct cx88_ctrl* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,int,int ,int,int ,int,int,char*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (struct cx88_core *VAR_3, struct v4l2_control *VAR_4)
{
 struct cx88_ctrl *VAR_5 = ((void*)0);
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_2[VAR_7].v.id == VAR_4->id)
   VAR_5 = &VAR_2[VAR_7];
 if (FUNC_3(((void*)0) == VAR_5))
  return -VAR_1;

 VAR_6 = VAR_5->sreg ? FUNC_1(VAR_5->sreg) : FUNC_0(VAR_5->reg);
 switch (VAR_4->id) {
 case 129:
  VAR_4->value = ((VAR_6 & 0x7f) < 0x40) ? ((VAR_6 & 0x7f) + 0x40)
     : (0x7f - (VAR_6 & 0x7f));
  break;
 case 128:
  VAR_4->value = 0x3f - (VAR_6 & 0x3f);
  break;
 default:
  VAR_4->value = ((VAR_6 + (VAR_5->off << VAR_5->shift)) & VAR_5->mask) >> VAR_5->shift;
  break;
 }
 FUNC_2(1,"get_control id=0x%X(%s) ctrl=0x%02x, reg=0x%02x val=0x%02x (mask 0x%02x)%s\n",
    VAR_4->id, VAR_5->v.name, VAR_4->value, VAR_5->reg,
    VAR_6,VAR_5->mask, VAR_5->sreg ? " [shadowed]" : "");
 return 0;
}
