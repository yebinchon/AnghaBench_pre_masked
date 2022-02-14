
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {int count; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct raw3215_info *VAR_1;

 VAR_1 = (struct raw3215_info *) VAR_0->driver_data;
 return VAR_1->count;
}
