
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_5, poll_table * VAR_6)
{
 unsigned int VAR_7 = 0;

 FUNC_1(VAR_5, &VAR_4, VAR_6);
 VAR_7 = VAR_1 | VAR_3;
 if (VAR_5->private_data || FUNC_0()) {
  VAR_7 |= VAR_0 | VAR_2;
 }
 return (VAR_7);
}
