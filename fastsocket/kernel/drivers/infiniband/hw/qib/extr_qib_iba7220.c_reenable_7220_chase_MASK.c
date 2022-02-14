
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_pportdata {TYPE_2__* cpspec; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct TYPE_4__ {TYPE_1__ chase_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2)
{
 struct qib_pportdata *VAR_3 = (struct qib_pportdata *)VAR_2;
 VAR_3->cpspec->chase_timer.expires = 0;
 FUNC_0(VAR_3, VAR_0,
  VAR_1);
}
