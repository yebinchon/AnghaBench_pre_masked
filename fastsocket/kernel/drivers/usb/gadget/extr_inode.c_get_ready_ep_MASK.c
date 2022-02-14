
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_data {int state; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,struct ep_data*,int) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4 (unsigned VAR_4, struct ep_data *VAR_5)
{
 int VAR_6;

 if (VAR_4 & VAR_2) {
  if (FUNC_1 (&VAR_5->lock) != 0)
   goto nonblock;
  if (VAR_5->state != 129) {
   FUNC_3 (&VAR_5->lock);
nonblock:
   VAR_6 = -VAR_0;
  } else
   VAR_6 = 0;
  return VAR_6;
 }

 if ((VAR_6 = FUNC_0 (&VAR_5->lock)) < 0)
  return VAR_6;

 switch (VAR_5->state) {
 case 129:
  break;


 default:
  FUNC_2 ("%s: ep %p not available, state %d\n",
    VAR_3, VAR_5, VAR_5->state);

 case 128:
  VAR_6 = -VAR_1;
  FUNC_3 (&VAR_5->lock);
 }
 return VAR_6;
}
