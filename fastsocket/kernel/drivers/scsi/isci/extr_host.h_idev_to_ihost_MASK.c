
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int domain_dev; } ;
struct isci_host {int dummy; } ;


 struct isci_host* FUNC_0 (int ) ;

__attribute__((used)) static inline struct isci_host *FUNC_1(struct isci_remote_device *VAR_0)
{
 return FUNC_0(VAR_0->domain_dev);
}
