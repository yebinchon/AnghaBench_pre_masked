
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int sem; TYPE_3__* class; TYPE_2__* type; TYPE_1__* bus; } ;
typedef int pm_message_t ;
struct TYPE_6__ {int (* resume ) (struct device*) ;scalar_t__ pm; } ;
struct TYPE_5__ {scalar_t__ pm; } ;
struct TYPE_4__ {int (* resume ) (struct device*) ;scalar_t__ pm; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int ,char*) ;
 int FUNC_4 (struct device*,scalar_t__,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0, pm_message_t VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0);
 FUNC_1(0);

 FUNC_2(&VAR_0->sem);

 if (VAR_0->bus) {
  if (VAR_0->bus->pm) {
   FUNC_3(VAR_0, VAR_1, "");
   VAR_2 = FUNC_4(VAR_0, VAR_0->bus->pm, VAR_1);
  } else if (VAR_0->bus->resume) {
   FUNC_3(VAR_0, VAR_1, "legacy ");
   VAR_2 = VAR_0->bus->resume(VAR_0);
  }
  if (VAR_2)
   goto End;
 }

 if (VAR_0->type) {
  if (VAR_0->type->pm) {
   FUNC_3(VAR_0, VAR_1, "type ");
   VAR_2 = FUNC_4(VAR_0, VAR_0->type->pm, VAR_1);
  }
  if (VAR_2)
   goto End;
 }

 if (VAR_0->class) {
  if (VAR_0->class->pm) {
   FUNC_3(VAR_0, VAR_1, "class ");
   VAR_2 = FUNC_4(VAR_0, VAR_0->class->pm, VAR_1);
  } else if (VAR_0->class->resume) {
   FUNC_3(VAR_0, VAR_1, "legacy class ");
   VAR_2 = VAR_0->class->resume(VAR_0);
  }
 }
 End:
 FUNC_7(&VAR_0->sem);

 FUNC_1(VAR_2);
 return VAR_2;
}
