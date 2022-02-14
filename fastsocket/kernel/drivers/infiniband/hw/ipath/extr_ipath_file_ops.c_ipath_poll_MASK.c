
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct ipath_portdata {int poll_type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ipath_portdata*,struct file*,struct poll_table_struct*) ;
 unsigned int FUNC_1 (struct ipath_portdata*,struct file*,struct poll_table_struct*) ;
 struct ipath_portdata* FUNC_2 (struct file*) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_1,
          struct poll_table_struct *VAR_2)
{
 struct ipath_portdata *VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  VAR_4 = 0;
 else if (VAR_3->poll_type & VAR_0)
  VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 else
  VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);

 return VAR_4;
}
