
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfin_cf_socket {unsigned short present; int timer; scalar_t__ active; int socket; TYPE_1__* pdev; int cd_pfx; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct bfin_cf_socket *VAR_4 = (void *)VAR_3;
 unsigned short VAR_5 = FUNC_0(VAR_4->cd_pfx);

 if (VAR_5 != VAR_4->present) {
  VAR_4->present = VAR_5;
  FUNC_1(&VAR_4->pdev->dev, ": card %s\n",
    VAR_5 ? "present" : "gone");
  FUNC_3(&VAR_4->socket, VAR_1);
 }

 if (VAR_4->active)
  FUNC_2(&VAR_4->timer, VAR_2 + VAR_0);
}
