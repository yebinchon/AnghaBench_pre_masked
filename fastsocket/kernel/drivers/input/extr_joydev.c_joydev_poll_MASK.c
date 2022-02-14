
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev_client {struct joydev* joydev; } ;
struct joydev {scalar_t__ exist; int wait; } ;
struct file {struct joydev_client* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct joydev_client*) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct joydev_client *VAR_6 = VAR_4->private_data;
 struct joydev *VAR_7 = VAR_6->joydev;

 FUNC_1(VAR_4, &VAR_7->wait, VAR_5);
 return (FUNC_0(VAR_6) ? (VAR_2 | VAR_3) : 0) |
  (VAR_7->exist ? 0 : (VAR_1 | VAR_0));
}
