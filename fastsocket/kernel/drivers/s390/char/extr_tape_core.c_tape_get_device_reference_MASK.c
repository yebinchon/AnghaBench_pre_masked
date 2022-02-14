
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int ref_count; } ;


 int FUNC_0 (int,char*,struct tape_device*,int ) ;
 int FUNC_1 (int *) ;

struct tape_device *
FUNC_2(struct tape_device *VAR_0)
{
 FUNC_0(4, "tape_get_device_reference(%p) = %i\n", VAR_0,
  FUNC_1(&VAR_0->ref_count));

 return VAR_0;
}
