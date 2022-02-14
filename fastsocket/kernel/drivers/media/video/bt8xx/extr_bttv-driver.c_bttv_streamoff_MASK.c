
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (struct bttv_fh*) ;
 int FUNC_1 (struct bttv_fh*) ;
 int FUNC_2 (struct bttv*,struct bttv_fh*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     enum v4l2_buf_type VAR_2)
{
 struct bttv_fh *VAR_3 = VAR_1;
 struct bttv *VAR_4 = VAR_3->btv;
 int VAR_5;
 int VAR_6 = FUNC_1(VAR_3);


 VAR_5 = FUNC_3(FUNC_0(VAR_3));
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_2(VAR_4, VAR_3, VAR_6);
 return 0;
}
