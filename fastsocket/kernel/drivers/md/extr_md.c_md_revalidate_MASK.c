
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ changed; } ;
struct gendisk {struct mddev* private_data; } ;



__attribute__((used)) static int FUNC_0(struct gendisk *VAR_0)
{
 struct mddev *VAR_1 = VAR_0->private_data;

 VAR_1->changed = 0;
 return 0;
}
