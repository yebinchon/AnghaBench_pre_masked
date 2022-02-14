
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct smd_tty_info* driver_data; } ;
struct smd_tty_info {int ch; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct smd_tty_info *VAR_1 = VAR_0->driver_data;
 FUNC_0(VAR_1->ch);
}
