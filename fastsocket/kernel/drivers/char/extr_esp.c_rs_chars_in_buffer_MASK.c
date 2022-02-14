
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct esp_struct {int xmit_cnt; } ;


 scalar_t__ FUNC_0 (struct esp_struct*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0)
{
 struct esp_struct *VAR_1 = VAR_0->driver_data;

 if (FUNC_0(VAR_1, VAR_0->name, "rs_chars_in_buffer"))
  return 0;
 return VAR_1->xmit_cnt;
}
