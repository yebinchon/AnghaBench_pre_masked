
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct ib_umad_file {int recv_list; int recv_wait; } ;
struct file {struct ib_umad_file* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 struct ib_umad_file *VAR_6 = VAR_4->private_data;


 unsigned int VAR_7 = VAR_1 | VAR_3;

 FUNC_1(VAR_4, &VAR_6->recv_wait, VAR_5);

 if (!FUNC_0(&VAR_6->recv_list))
  VAR_7 |= VAR_0 | VAR_2;

 return VAR_7;
}
