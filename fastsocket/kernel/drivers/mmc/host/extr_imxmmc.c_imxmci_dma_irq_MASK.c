
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imxmci_host {int tasklet; int pending_events; int status_reg; int stuck_timeout; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_2, void *VAR_3)
{
 struct imxmci_host *VAR_4 = VAR_3;
 u32 VAR_5 = FUNC_1(VAR_4->base + VAR_1);

 FUNC_0(&VAR_4->stuck_timeout, 0);
 VAR_4->status_reg = VAR_5;
 FUNC_2(VAR_0, &VAR_4->pending_events);
 FUNC_3(&VAR_4->tasklet);
}
