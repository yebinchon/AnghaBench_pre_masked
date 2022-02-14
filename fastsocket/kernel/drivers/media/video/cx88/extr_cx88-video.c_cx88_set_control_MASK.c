
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_control {int id; scalar_t__ value; } ;
struct TYPE_2__ {int id; scalar_t__ minimum; scalar_t__ maximum; int name; } ;
struct cx88_ctrl {int mask; int off; int shift; int reg; scalar_t__ sreg; TYPE_1__ v; } ;
struct cx88_core {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 struct cx88_ctrl* VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (scalar_t__,int ,int,int) ;
 int FUNC_2 (int,char*,int,int ,int,int ,int,int,char*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct cx88_core *VAR_4, struct v4l2_control *VAR_5)
{
 struct cx88_ctrl *VAR_6 = ((void*)0);
 u32 VAR_7,VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_3[VAR_9].v.id == VAR_5->id) {
   VAR_6 = &VAR_3[VAR_9];
  }
 }
 if (FUNC_3(((void*)0) == VAR_6))
  return -VAR_1;

 if (VAR_5->value < VAR_6->v.minimum)
  VAR_5->value = VAR_6->v.minimum;
 if (VAR_5->value > VAR_6->v.maximum)
  VAR_5->value = VAR_6->v.maximum;
 VAR_8=VAR_6->mask;
 switch (VAR_5->id) {
 case 131:
  VAR_7 = (VAR_5->value < 0x40) ? (0x7f - VAR_5->value) : (VAR_5->value - 0x40);
  break;
 case 130:
  VAR_7 = 0x3f - (VAR_5->value & 0x3f);
  break;
 case 128:


  VAR_7 = ((VAR_5->value - VAR_6->off) << VAR_6->shift) & VAR_6->mask;

  if (VAR_4->tvnorm & VAR_2) {

   VAR_7=VAR_7<<8|VAR_7;
  } else {

   VAR_7=(VAR_7*0x5a)/0x7f<<8|VAR_7;
  }
  VAR_8=0xffff;
  break;
 case 129:

  VAR_7 = ((VAR_5->value - VAR_6->off) << VAR_6->shift) & VAR_6->mask;
  if (VAR_4->tvnorm & VAR_2 && VAR_7)
   return -VAR_1;
  break;
 default:
  VAR_7 = ((VAR_5->value - VAR_6->off) << VAR_6->shift) & VAR_6->mask;
  break;
 }
 FUNC_2(1,"set_control id=0x%X(%s) ctrl=0x%02x, reg=0x%02x val=0x%02x (mask 0x%02x)%s\n",
    VAR_5->id, VAR_6->v.name, VAR_5->value, VAR_6->reg, VAR_7,
    VAR_8, VAR_6->sreg ? " [shadowed]" : "");
 if (VAR_6->sreg) {
  FUNC_1(VAR_6->sreg, VAR_6->reg, VAR_8, VAR_7);
 } else {
  FUNC_0(VAR_6->reg, VAR_8, VAR_7);
 }
 return 0;
}
