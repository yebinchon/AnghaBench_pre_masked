
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct slgt_info *VAR_1 = VAR_0->driver_data;
 int VAR_2;
 if (FUNC_1(VAR_1, VAR_0->name, "chars_in_buffer"))
  return 0;
 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(("%s chars_in_buffer()=%d\n", VAR_1->device_name, VAR_2));
 return VAR_2;
}
