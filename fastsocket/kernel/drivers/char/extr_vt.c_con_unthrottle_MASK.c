
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int paste_wait; } ;
struct tty_struct {struct vc_data* driver_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct vc_data *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->paste_wait);
}
