
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpiphp_bridge {scalar_t__ type; int flags; int handle; TYPE_1__* func; int list; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,struct acpiphp_bridge*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,struct acpiphp_bridge*,int *) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(struct acpiphp_bridge *VAR_8)
{
 acpi_status VAR_9;


 FUNC_5(&VAR_8->list, &VAR_4);


 VAR_9 = FUNC_3(VAR_1, VAR_8->handle, (u32)1,
         VAR_7, VAR_8, ((void*)0));
 if (FUNC_0(VAR_9)) {
  FUNC_6(&VAR_8->list);
  return;
 }


 if (VAR_8->type != VAR_3) {
  if ((VAR_8->flags & VAR_2) && VAR_8->func) {
   VAR_9 = FUNC_2(VAR_8->func->handle,
      VAR_0,
      VAR_6);
   if (FUNC_0(VAR_9))
    FUNC_4("failed to remove notify handler\n");
  }
  VAR_9 = FUNC_1(VAR_8->handle,
          VAR_0,
          VAR_5,
          VAR_8);

  if (FUNC_0(VAR_9)) {
   FUNC_4("failed to register interrupt notify handler\n");
  }
 }
}
