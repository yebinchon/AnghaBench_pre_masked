
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ poll_cnt; scalar_t__ m68krcycles_done; } ;
typedef TYPE_1__ SH2 ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(SH2 *VAR_0)
{
  int VAR_1;
  if (VAR_0->poll_cnt != 0)
    return;

  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 > 600)
    FUNC_0(VAR_0, VAR_0->m68krcycles_done + VAR_1 / 3);
}
