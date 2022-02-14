
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {int bus_name; } ;
struct ohci_hcd {int * debug_dir; int * debug_async; int * debug_periodic; void* debug_registers; } ;
struct TYPE_2__ {struct usb_bus self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 void* FUNC_1 (char*,int ,int *,struct ohci_hcd*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ohci_hcd*,char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (struct ohci_hcd*) ;

__attribute__((used)) static inline void FUNC_5 (struct ohci_hcd *VAR_5)
{
 struct usb_bus *VAR_6 = &FUNC_4(VAR_5)->self;

 VAR_5->debug_dir = FUNC_0(VAR_6->bus_name, VAR_4);
 if (!VAR_5->debug_dir)
  goto dir_error;

 VAR_5->debug_async = FUNC_1("async", VAR_0,
      VAR_5->debug_dir, VAR_5,
      &VAR_1);
 if (!VAR_5->debug_async)
  goto async_error;

 VAR_5->debug_periodic = FUNC_1("periodic", VAR_0,
         VAR_5->debug_dir, VAR_5,
         &VAR_2);
 if (!VAR_5->debug_periodic)
  goto periodic_error;

 VAR_5->debug_registers = FUNC_1("registers", VAR_0,
          VAR_5->debug_dir, VAR_5,
          &VAR_3);
 if (!VAR_5->debug_registers)
  goto registers_error;

 FUNC_3 (VAR_5, "created debug files\n");
 return;

registers_error:
 FUNC_2(VAR_5->debug_periodic);
periodic_error:
 FUNC_2(VAR_5->debug_async);
async_error:
 FUNC_2(VAR_5->debug_dir);
dir_error:
 VAR_5->debug_periodic = ((void*)0);
 VAR_5->debug_async = ((void*)0);
 VAR_5->debug_dir = ((void*)0);
}
