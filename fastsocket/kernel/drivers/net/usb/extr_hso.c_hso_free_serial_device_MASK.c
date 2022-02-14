
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hso_serial {TYPE_1__* shared_int; int minor; } ;
struct hso_device {TYPE_1__* shared_int; int minor; } ;
struct TYPE_2__ {scalar_t__ ref_count; int shared_int_lock; } ;


 struct hso_serial* FUNC_0 (struct hso_serial*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hso_serial*) ;
 int FUNC_3 (struct hso_serial*) ;
 int FUNC_4 (struct hso_serial*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct hso_device *VAR_0)
{
 struct hso_serial *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;
 FUNC_7(VAR_1->minor, ((void*)0));

 FUNC_3(VAR_1);

 if (VAR_1->shared_int) {
  FUNC_5(&VAR_1->shared_int->shared_int_lock);
  if (--VAR_1->shared_int->ref_count == 0)
   FUNC_1(VAR_1->shared_int);
  else
   FUNC_6(&VAR_1->shared_int->shared_int_lock);
 }
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_4(VAR_0);
}
