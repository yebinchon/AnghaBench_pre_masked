
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cn_callback_entry {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ cn_queue; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cn_callback_entry*) ;

__attribute__((used)) static void FUNC_3(struct cn_callback_entry *VAR_0)
{

 FUNC_0();
 if (VAR_0->pdev->cn_queue)
  FUNC_1(VAR_0->pdev->cn_queue);

 FUNC_2(VAR_0);
}
