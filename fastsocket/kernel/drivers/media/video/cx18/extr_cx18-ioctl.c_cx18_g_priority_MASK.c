
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int prio; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, enum v4l2_priority *VAR_2)
{
 struct cx18 *VAR_3 = ((struct cx18_open_id *)VAR_1)->cx;

 *VAR_2 = FUNC_0(&VAR_3->prio);
 return 0;
}
