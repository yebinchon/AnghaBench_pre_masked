
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {int dummy; } ;


 int FUNC_0 (struct raw3215_info*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct raw3215_info *VAR_1;

 VAR_1 = (struct raw3215_info *) VAR_0->driver_data;
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
