
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ private_data; } ;
struct eerbuffer {scalar_t__ head; scalar_t__ tail; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;
 struct eerbuffer *VAR_8;

 VAR_8 = (struct eerbuffer *) VAR_4->private_data;
 FUNC_0(VAR_4, &VAR_3, VAR_5);
 FUNC_1(&VAR_2, VAR_7);
 if (VAR_8->head != VAR_8->tail)
  VAR_6 = VAR_0 | VAR_1 ;
 else
  VAR_6 = 0;
 FUNC_2(&VAR_2, VAR_7);
 return VAR_6;
}
