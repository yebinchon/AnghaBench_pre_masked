
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isci_remote_device {scalar_t__ started_request_count; } ;
struct isci_host {int scic_lock; } ;


 scalar_t__ FUNC_0 (struct isci_remote_device*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(
 struct isci_host *VAR_0,
 struct isci_remote_device *VAR_1,
 u32 VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_1(&VAR_0->scic_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_2)
  && VAR_1->started_request_count == 0;
 FUNC_2(&VAR_0->scic_lock, VAR_3);

 return VAR_4;
}
