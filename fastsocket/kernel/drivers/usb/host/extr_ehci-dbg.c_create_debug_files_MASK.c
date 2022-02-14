
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {int bus_name; } ;
struct ehci_hcd {int * debug_dir; int * debug_async; int * debug_periodic; void* debug_registers; } ;
struct TYPE_2__ {struct usb_bus self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ) ;
 void* FUNC_1 (char*,int,int *,struct usb_bus*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (struct ehci_hcd*) ;

__attribute__((used)) static inline void FUNC_4 (struct ehci_hcd *VAR_7)
{
 struct usb_bus *VAR_8 = &FUNC_3(VAR_7)->self;

 VAR_7->debug_dir = FUNC_0(VAR_8->bus_name, VAR_6);
 if (!VAR_7->debug_dir)
  goto dir_error;

 VAR_7->debug_async = FUNC_1("async", VAR_0,
      VAR_7->debug_dir, VAR_8,
      &VAR_2);
 if (!VAR_7->debug_async)
  goto async_error;

 VAR_7->debug_periodic = FUNC_1("periodic", VAR_0,
         VAR_7->debug_dir, VAR_8,
         &VAR_4);
 if (!VAR_7->debug_periodic)
  goto periodic_error;

 VAR_7->debug_registers = FUNC_1("registers", VAR_0,
          VAR_7->debug_dir, VAR_8,
          &VAR_5);

 VAR_7->debug_registers = FUNC_1("lpm", VAR_0|VAR_1,
          VAR_7->debug_dir, VAR_8,
          &VAR_3);
 if (!VAR_7->debug_registers)
  goto registers_error;
 return;

registers_error:
 FUNC_2(VAR_7->debug_periodic);
periodic_error:
 FUNC_2(VAR_7->debug_async);
async_error:
 FUNC_2(VAR_7->debug_dir);
dir_error:
 VAR_7->debug_periodic = ((void*)0);
 VAR_7->debug_async = ((void*)0);
 VAR_7->debug_dir = ((void*)0);
}
