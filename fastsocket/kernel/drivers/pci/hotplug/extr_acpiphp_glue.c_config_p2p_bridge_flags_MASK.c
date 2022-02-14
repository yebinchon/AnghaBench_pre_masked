
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpiphp_func {struct acpiphp_bridge* bridge; } ;
struct acpiphp_bridge {int flags; struct acpiphp_func* func; int handle; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *) ;
 struct acpiphp_func* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static inline void FUNC_4(struct acpiphp_bridge *VAR_4)
{
 acpi_handle VAR_5;

 if (FUNC_0(FUNC_1(VAR_4->handle,
     "_STA", &VAR_5)))
  VAR_4->flags |= VAR_3;

 if (FUNC_0(FUNC_1(VAR_4->handle,
     "_EJ0", &VAR_5)))
  VAR_4->flags |= VAR_0;

 if (FUNC_0(FUNC_1(VAR_4->handle,
     "_PS0", &VAR_5)))
  VAR_4->flags |= VAR_1;

 if (FUNC_0(FUNC_1(VAR_4->handle,
     "_PS3", &VAR_5)))
  VAR_4->flags |= VAR_2;


 if (VAR_4->flags & VAR_0) {
  struct acpiphp_func *VAR_6;

  FUNC_3("found ejectable p2p bridge\n");


  VAR_6 = FUNC_2(VAR_4->handle);
  if (!VAR_6)
   return;
  VAR_4->func = VAR_6;
  VAR_6->bridge = VAR_4;
 }
}
