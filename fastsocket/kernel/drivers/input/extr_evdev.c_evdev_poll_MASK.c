
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct evdev_client* private_data; } ;
struct evdev_client {scalar_t__ head; scalar_t__ tail; struct evdev* evdev; } ;
struct evdev {scalar_t__ exist; int wait; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_4, poll_table *VAR_5)
{
 struct evdev_client *VAR_6 = VAR_4->private_data;
 struct evdev *VAR_7 = VAR_6->evdev;

 FUNC_0(VAR_4, &VAR_7->wait, VAR_5);
 return ((VAR_6->head == VAR_6->tail) ? 0 : (VAR_2 | VAR_3)) |
  (VAR_7->exist ? 0 : (VAR_1 | VAR_0));
}
