
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int port; } ;


 int FUNC_0 (struct acm*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct acm *VAR_1 = VAR_0->driver_data;
 FUNC_1(&VAR_1->port);
 FUNC_0(VAR_1, 0);
}
