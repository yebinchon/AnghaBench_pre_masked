
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {struct domain_device* domain_dev; } ;
struct domain_device {scalar_t__ parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct domain_device*) ;

__attribute__((used)) static inline int FUNC_1(struct isci_remote_device *VAR_2)
{
 struct domain_device *VAR_3 = VAR_2->domain_dev;

 if (FUNC_0(VAR_3) && VAR_3->parent)
  return VAR_1;
 return VAR_0;
}
