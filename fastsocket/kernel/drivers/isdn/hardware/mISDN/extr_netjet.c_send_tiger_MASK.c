
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tiger_hw {int last_is0; TYPE_2__* bc; int name; } ;
struct TYPE_3__ {int Flags; } ;
struct TYPE_4__ {TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (struct tiger_hw*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct tiger_hw *VAR_2, u8 VAR_3)
{
 int VAR_4;


 if ((VAR_3 & VAR_2->last_is0) & VAR_1) {
  FUNC_0("%s: tiger warn write double dma %x/%x\n",
   VAR_2->name, VAR_3, VAR_2->last_is0);
  return;
 } else {
  VAR_2->last_is0 &= ~VAR_1;
  VAR_2->last_is0 |= (VAR_3 & VAR_1);
 }
 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  if (FUNC_2(VAR_0, &VAR_2->bc[VAR_4].bch.Flags))
   FUNC_1(VAR_2, &VAR_2->bc[VAR_4]);
 }
}
