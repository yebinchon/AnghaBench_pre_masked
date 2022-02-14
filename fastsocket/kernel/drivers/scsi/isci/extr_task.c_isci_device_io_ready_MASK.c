
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int dummy; } ;
struct isci_remote_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sas_task*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct isci_remote_device *VAR_2,
           struct sas_task *VAR_3)
{
 return VAR_2 ? FUNC_1(VAR_1, &VAR_2->flags) ||
        (FUNC_1(VAR_0, &VAR_2->flags) &&
         FUNC_0(VAR_3))
      : 0;
}
