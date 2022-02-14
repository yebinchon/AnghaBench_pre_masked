
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int dummy; } ;


 int FUNC_0 (struct acm*) ;
 int VAR_0 ;
 int FUNC_1 (struct acm*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, int VAR_2)
{
 struct acm *VAR_3 = VAR_1->driver_data;
 int VAR_4;
 if (!FUNC_0(VAR_3))
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_3, VAR_2 ? 0xffff : 0);
 if (VAR_4 < 0)
  FUNC_2("send break failed");
 return VAR_4;
}
