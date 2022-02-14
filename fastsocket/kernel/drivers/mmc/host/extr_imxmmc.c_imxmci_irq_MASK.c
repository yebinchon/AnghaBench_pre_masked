
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imxmci_host {int imask; int tasklet; int pending_events; int status_reg; int stuck_timeout; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct imxmci_host *VAR_8 = VAR_7;
 u32 VAR_9 = FUNC_2(VAR_8->base + VAR_5);
 int VAR_10 = 1;

 FUNC_5(VAR_8->imask | VAR_3 | VAR_2,
   VAR_8->base + VAR_4);

 FUNC_1(&VAR_8->stuck_timeout, 0);
 VAR_8->status_reg = VAR_9;
 FUNC_3(VAR_0, &VAR_8->pending_events);
 FUNC_3(VAR_1, &VAR_8->pending_events);
 FUNC_4(&VAR_8->tasklet);

 return FUNC_0(VAR_10);
}
