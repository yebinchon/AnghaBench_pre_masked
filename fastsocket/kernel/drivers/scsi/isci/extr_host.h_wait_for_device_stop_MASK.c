
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int flags; } ;
struct isci_host {int eventq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct isci_host *VAR_1, struct isci_remote_device *VAR_2)
{
 FUNC_1(VAR_1->eventq, !FUNC_0(VAR_0, &VAR_2->flags));
}
