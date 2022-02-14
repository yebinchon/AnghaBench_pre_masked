
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IOCCapabilities; } ;
struct MPT3SAS_ADAPTER {scalar_t__ msix_enable; TYPE_1__ facts; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct MPT3SAS_ADAPTER *VAR_1)
{
 return (VAR_1->facts.IOCCapabilities &
     VAR_0) && VAR_1->msix_enable;
}
