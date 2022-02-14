
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {int error_idx; int count; int ctrl_class; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct ctrl_helper {int handled; } ;
typedef int helper ;


 int FUNC_0 (struct ctrl_helper*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_3 (struct ctrl_helper*) ;
 struct ctrl_helper* FUNC_4 (int,int ) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ext_controls*,struct ctrl_helper*,int) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,struct v4l2_ext_controls*,struct ctrl_helper*,int) ;

__attribute__((used)) static int FUNC_7(struct v4l2_ctrl_handler *VAR_3,
        struct v4l2_ext_controls *VAR_4,
        bool VAR_5)
{
 struct ctrl_helper VAR_6[4];
 struct ctrl_helper *VAR_7 = VAR_6;
 int VAR_8;
 int VAR_9;

 VAR_4->error_idx = VAR_4->count;
 VAR_4->ctrl_class = FUNC_1(VAR_4->ctrl_class);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 if (VAR_4->count == 0)
  return FUNC_2(VAR_3, VAR_4->ctrl_class);

 if (VAR_4->count > FUNC_0(VAR_6)) {
  VAR_7 = FUNC_4(sizeof(VAR_6[0]) * VAR_4->count, VAR_2);
  if (!VAR_7)
   return -VAR_1;
 }
 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_7, !VAR_5);
 if (VAR_8)
  goto free;


 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_7, 0);



 if (VAR_5)
  VAR_4->error_idx = VAR_4->count;
 if (!VAR_8 && VAR_5) {

  for (VAR_9 = 0; VAR_9 < VAR_4->count; VAR_9++)
   VAR_7[VAR_9].handled = 0;
  VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_7, 1);
 }

free:
 if (VAR_4->count > FUNC_0(VAR_6))
  FUNC_3(VAR_7);
 return VAR_8;
}
