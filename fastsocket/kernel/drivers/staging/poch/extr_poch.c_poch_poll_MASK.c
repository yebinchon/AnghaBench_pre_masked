
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct channel_info* private_data; } ;
struct channel_info {scalar_t__ dir; int wq; } ;
typedef int poll_table ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct channel_info*) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_5, poll_table *VAR_6)
{
 struct channel_info *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8 = 0;

 FUNC_1(VAR_5, &VAR_7->wq, VAR_6);

 if (FUNC_0(VAR_7)) {
  if (VAR_7->dir == VAR_0)
   VAR_8 = VAR_1 | VAR_3;
  else
   VAR_8 = VAR_2 | VAR_4;
 }

 return VAR_8;
}
