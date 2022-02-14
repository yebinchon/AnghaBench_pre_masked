
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int lock; TYPE_3__* req; TYPE_2__* chip; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct memstick_host*,int ) ;
 struct jmb38x_ms_host* FUNC_2 (struct memstick_host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct memstick_host *VAR_2 = (struct memstick_host *)VAR_1;
 struct jmb38x_ms_host *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->chip->pdev->dev, "abort\n");
 FUNC_3(&VAR_3->lock, VAR_4);
 if (VAR_3->req) {
  VAR_3->req->error = -VAR_0;
  FUNC_1(VAR_2, 0);
 }
 FUNC_4(&VAR_3->lock, VAR_4);
}
