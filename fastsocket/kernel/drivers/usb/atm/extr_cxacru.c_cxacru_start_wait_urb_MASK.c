
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; int status; } ;
struct timer_list {unsigned long data; int function; scalar_t__ expires; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer_list*) ;
 int VAR_1 ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (struct timer_list*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct completion*) ;

__attribute__((used)) static int FUNC_5(struct urb *VAR_3, struct completion *VAR_4,
     int* VAR_5)
{
 struct timer_list VAR_6;

 FUNC_2(&VAR_6);
 VAR_6.expires = VAR_2 + FUNC_3(VAR_0);
 VAR_6.data = (unsigned long) VAR_3;
 VAR_6.function = VAR_1;
 FUNC_0(&VAR_6);
 FUNC_4(VAR_4);
 FUNC_1(&VAR_6);

 if (VAR_5)
  *VAR_5 = VAR_3->actual_length;
 return VAR_3->status;
}
