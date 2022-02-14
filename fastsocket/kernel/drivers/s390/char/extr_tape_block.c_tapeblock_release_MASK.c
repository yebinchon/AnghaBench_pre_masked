
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int dummy; } ;
struct gendisk {struct tape_device* private_data; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (struct tape_device*) ;
 int FUNC_1 (struct tape_device*) ;
 int FUNC_2 (struct tape_device*,int ) ;

__attribute__((used)) static int
FUNC_3(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct tape_device *VAR_3 = VAR_1->private_data;

 FUNC_2(VAR_3, VAR_0);
 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 return 0;
}
