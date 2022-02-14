
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; scalar_t__ driver_data; } ;
typedef int ser_info_t ;


 scalar_t__ FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0)
{
 ser_info_t *VAR_1 = (ser_info_t *)VAR_0->driver_data;

 if (FUNC_0(VAR_1, VAR_0->name, "rs_chars_in_buffer"))
  return 0;
 return 0;
}
