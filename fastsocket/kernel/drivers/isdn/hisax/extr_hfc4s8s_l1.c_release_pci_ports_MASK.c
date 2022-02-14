
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iobase; scalar_t__ membase; int pdev; } ;
typedef TYPE_1__ hfc4s8s_hw ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(hfc4s8s_hw * VAR_1)
{
 FUNC_1(VAR_1->pdev, VAR_0, 0);




 if (VAR_1->iobase)
  FUNC_2(VAR_1->iobase, 8);

}
