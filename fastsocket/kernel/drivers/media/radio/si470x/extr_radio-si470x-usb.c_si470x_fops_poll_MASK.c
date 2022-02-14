
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; scalar_t__ rd_index; scalar_t__ wr_index; int read_queue; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (struct si470x_device*) ;
 struct si470x_device* FUNC_2 (struct file*) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_4,
  struct poll_table_struct *VAR_5)
{
 struct si470x_device *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 0;


 if ((VAR_6->registers[VAR_2] & VAR_3) == 0)
  FUNC_1(VAR_6);

 FUNC_0(VAR_4, &VAR_6->read_queue, VAR_5);

 if (VAR_6->rd_index != VAR_6->wr_index)
  VAR_7 = VAR_0 | VAR_1;

 return VAR_7;
}
