
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int entry; } ;
struct platform_device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_2)
{
 unsigned long VAR_3;


 FUNC_2(&VAR_1, VAR_3);
 if (FUNC_4(VAR_0, &VAR_2->archdata.flags)) {
  FUNC_1(&VAR_2->archdata.entry);
  FUNC_0(VAR_0, &VAR_2->archdata.flags);
 }
 FUNC_3(&VAR_1, VAR_3);
}
