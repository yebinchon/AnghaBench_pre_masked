
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int writesize; } ;


 int FUNC_0 (struct acm*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct acm*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1)
{
 struct acm *VAR_2 = VAR_1->driver_data;
 if (!FUNC_0(VAR_2))
  return -VAR_0;




 return FUNC_1(VAR_2) ? VAR_2->writesize : 0;
}
