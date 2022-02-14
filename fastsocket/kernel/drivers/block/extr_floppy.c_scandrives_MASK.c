
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ select_delay; } ;
struct TYPE_5__ {scalar_t__ select_delay; } ;
struct TYPE_4__ {scalar_t__ fd_ref; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_0->select_delay)
  return;

 VAR_8 = VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = (VAR_8 + VAR_6 + 1) % VAR_1;
  if (VAR_3->fd_ref == 0 || VAR_2->select_delay != 0)
   continue;
  FUNC_2(VAR_7);
  if (!(FUNC_1(VAR_5, ~3, FUNC_0(VAR_7) | (0x10 << FUNC_0(VAR_7))) &
        (0x10 << FUNC_0(VAR_7))))


   FUNC_1(VAR_5, ~(0x10 << FUNC_0(VAR_7)), 0);
 }
 FUNC_2(VAR_8);
}
