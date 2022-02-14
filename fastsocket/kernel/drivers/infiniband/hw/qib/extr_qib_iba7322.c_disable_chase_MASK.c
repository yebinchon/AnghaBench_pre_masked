
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qib_pportdata {TYPE_1__* cpspec; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {TYPE_2__ chase_timer; scalar_t__ chase_end; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_5, unsigned long VAR_6,
  u8 VAR_7)
{
 VAR_5->cpspec->chase_end = 0;

 if (!VAR_4)
  return;

 FUNC_1(VAR_5, VAR_1,
  VAR_2);
 VAR_5->cpspec->chase_timer.expires = VAR_3 + VAR_0;
 FUNC_0(&VAR_5->cpspec->chase_timer);
}
