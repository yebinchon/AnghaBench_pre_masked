
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {struct tape_device* modeset_byte; int ref_count; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tape_device*) ;

struct tape_device *
FUNC_3(struct tape_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->ref_count);
 if (VAR_1 > 0) {
  FUNC_0(4, "tape_put_device(%p) -> %i\n", VAR_0, VAR_1);
 } else {
  if (VAR_1 < 0) {
   FUNC_0(4, "put device without reference\n");
  } else {
   FUNC_0(4, "tape_free_device(%p)\n", VAR_0);
   FUNC_2(VAR_0->modeset_byte);
   FUNC_2(VAR_0);
  }
 }

 return ((void*)0);
}
