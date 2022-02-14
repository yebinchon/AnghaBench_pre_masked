
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c67x00_td {int pid_ep; int td_addr; struct c67x00_td* data; } ;
struct c67x00_hcd {TYPE_1__* sie; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct c67x00_td*,int) ;
 int FUNC_1 (struct c67x00_td*) ;
 int FUNC_2 (struct c67x00_td*) ;

__attribute__((used)) static void FUNC_3(struct c67x00_hcd *VAR_3, struct c67x00_td *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 && ((VAR_4->pid_ep & VAR_1) != VAR_2))
  FUNC_0(VAR_3->sie->dev, FUNC_2(VAR_4),
      VAR_4->data, VAR_5);

 FUNC_0(VAR_3->sie->dev,
     VAR_4->td_addr, VAR_4, VAR_0);
}
