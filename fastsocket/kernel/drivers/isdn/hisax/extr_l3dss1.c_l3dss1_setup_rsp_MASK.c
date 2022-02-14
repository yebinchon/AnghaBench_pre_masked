
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int bchannel; } ;
struct l3_process {int debug; int timer; int st; TYPE_1__ para; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct l3_process*,int ,void*) ;
 int FUNC_4 (struct l3_process*,int ) ;
 int FUNC_5 (struct l3_process*,int) ;

__attribute__((used)) static void
FUNC_6(struct l3_process *VAR_4, u_char VAR_5,
   void *VAR_6)
{
        if (!VAR_4->para.bchannel)
  { if (VAR_4->debug & VAR_1)
        FUNC_2(VAR_4->st, "D-chan connect for waiting call");
           FUNC_3(VAR_4, VAR_5, VAR_6);
           return;
         }
 FUNC_5(VAR_4, 8);
 FUNC_4(VAR_4, VAR_2);
 FUNC_1(&VAR_4->timer);
 FUNC_0(&VAR_4->timer, VAR_3, VAR_0);
}
