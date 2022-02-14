
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_user_data {scalar_t__ ring_cons; scalar_t__ ring_prod; scalar_t__ ring_overflow; int evtchn_wait; } ;
struct file {struct per_user_data* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_5, poll_table *VAR_6)
{
 unsigned int VAR_7 = VAR_2 | VAR_4;
 struct per_user_data *VAR_8 = VAR_5->private_data;

 FUNC_0(VAR_5, &VAR_8->evtchn_wait, VAR_6);
 if (VAR_8->ring_cons != VAR_8->ring_prod)
  VAR_7 |= VAR_1 | VAR_3;
 if (VAR_8->ring_overflow)
  VAR_7 = VAR_0;
 return VAR_7;
}
