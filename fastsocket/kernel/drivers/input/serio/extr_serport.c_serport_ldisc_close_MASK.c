
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ disc_data; } ;
struct serport {int dummy; } ;


 int FUNC_0 (struct serport*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct serport *VAR_1 = (struct serport *) VAR_0->disc_data;

 FUNC_0(VAR_1);
}
