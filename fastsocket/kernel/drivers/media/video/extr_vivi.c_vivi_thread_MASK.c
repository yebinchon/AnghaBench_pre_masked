
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivi_fh {struct vivi_dev* dev; } ;
struct vivi_dev {int dummy; } ;


 int FUNC_0 (struct vivi_dev*,int,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct vivi_fh*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct vivi_fh *VAR_1 = VAR_0;
 struct vivi_dev *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2, 1, "thread started\n");

 FUNC_2();

 for (;;) {
  FUNC_3(VAR_1);

  if (FUNC_1())
   break;
 }
 FUNC_0(VAR_2, 1, "thread: exit\n");
 return 0;
}
