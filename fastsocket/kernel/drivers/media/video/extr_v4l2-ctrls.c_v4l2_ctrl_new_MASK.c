
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int lock; int ctrls; scalar_t__ error; } ;
struct TYPE_2__ {char* string; scalar_t__ val; } ;
struct v4l2_ctrl {char const* name; int type; char const* const* qmenu; char* string; int node; scalar_t__ minimum; TYPE_1__ cur; scalar_t__ default_value; scalar_t__ val; void* priv; scalar_t__ step; scalar_t__ maximum; scalar_t__ flags; scalar_t__ id; struct v4l2_ctrl_ops const* ops; struct v4l2_ctrl_handler* handler; } ;
typedef scalar_t__ s32 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct v4l2_ctrl_handler*,struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_3 (struct v4l2_ctrl*) ;
 struct v4l2_ctrl* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,char,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct v4l2_ctrl *FUNC_9(struct v4l2_ctrl_handler *VAR_12,
   const struct v4l2_ctrl_ops *VAR_13,
   u32 VAR_14, const char *VAR_15, enum v4l2_ctrl_type VAR_16,
   s32 VAR_17, s32 VAR_18, u32 VAR_19, s32 VAR_20,
   u32 VAR_21, const char * const *VAR_22, void *VAR_23)
{
 struct v4l2_ctrl *VAR_24;
 unsigned VAR_25 = 0;

 if (VAR_12->error)
  return ((void*)0);


 if (VAR_14 == 0 || VAR_15 == ((void*)0) || VAR_14 >= VAR_3 ||
     VAR_18 < VAR_17 ||
     (VAR_16 == VAR_9 && VAR_19 == 0) ||
     (VAR_16 == VAR_10 && VAR_22 == ((void*)0)) ||
     (VAR_16 == VAR_11 && VAR_18 == 0)) {
  FUNC_2(VAR_12, -VAR_1);
  return ((void*)0);
 }
 if ((VAR_16 == VAR_9 ||
      VAR_16 == VAR_10 ||
      VAR_16 == VAR_6) &&
     (VAR_20 < VAR_17 || VAR_20 > VAR_18)) {
  FUNC_2(VAR_12, -VAR_1);
  return ((void*)0);
 }

 if (VAR_16 == VAR_7)
  VAR_21 |= VAR_5;
 else if (VAR_16 == VAR_8)
  VAR_21 |= VAR_4;
 else if (VAR_16 == VAR_11)
  VAR_25 += 2 * (VAR_18 + 1);

 VAR_24 = FUNC_4(sizeof(*VAR_24) + VAR_25, VAR_2);
 if (VAR_24 == ((void*)0)) {
  FUNC_2(VAR_12, -VAR_0);
  return ((void*)0);
 }

 FUNC_0(&VAR_24->node);
 VAR_24->handler = VAR_12;
 VAR_24->ops = VAR_13;
 VAR_24->id = VAR_14;
 VAR_24->name = VAR_15;
 VAR_24->type = VAR_16;
 VAR_24->flags = VAR_21;
 VAR_24->minimum = VAR_17;
 VAR_24->maximum = VAR_18;
 VAR_24->step = VAR_19;
 VAR_24->qmenu = VAR_22;
 VAR_24->priv = VAR_23;
 VAR_24->cur.val = VAR_24->val = VAR_24->default_value = VAR_20;

 if (VAR_24->type == VAR_11) {
  VAR_24->cur.string = (char *)&VAR_24[1] + VAR_25 - (VAR_18 + 1);
  VAR_24->string = (char *)&VAR_24[1] + VAR_25 - 2 * (VAR_18 + 1);
  if (VAR_24->minimum)
   FUNC_6(VAR_24->cur.string, ' ', VAR_24->minimum);
 }
 if (FUNC_1(VAR_12, VAR_24)) {
  FUNC_3(VAR_24);
  return ((void*)0);
 }
 FUNC_7(&VAR_12->lock);
 FUNC_5(&VAR_24->node, &VAR_12->ctrls);
 FUNC_8(&VAR_12->lock);
 return VAR_24;
}
