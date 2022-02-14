
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {scalar_t__ started_request_count; int sm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct isci_remote_device *VAR_2 = VAR_1;

 FUNC_0(VAR_2->started_request_count != 0);
 FUNC_1(&VAR_2->sm, VAR_0);
}
