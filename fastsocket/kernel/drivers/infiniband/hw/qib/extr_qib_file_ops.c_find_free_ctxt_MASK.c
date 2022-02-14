
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_info {scalar_t__ spu_port; } ;
struct qib_devdata {scalar_t__ num_pports; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct qib_devdata*,scalar_t__,struct qib_user_info const*) ;
 struct qib_devdata* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct file *VAR_2,
     const struct qib_user_info *VAR_3)
{
 struct qib_devdata *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (!VAR_4 || (VAR_3->spu_port && VAR_3->spu_port > VAR_4->num_pports))
  VAR_5 = -VAR_0;
 else
  VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3->spu_port, VAR_3);

 return VAR_5;
}
