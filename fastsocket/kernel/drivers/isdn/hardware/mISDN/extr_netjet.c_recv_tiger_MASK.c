
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int size; } ;
struct tiger_hw {int last_is0; TYPE_3__* bc; TYPE_1__ recv; } ;
struct TYPE_5__ {int Flags; } ;
struct TYPE_6__ {TYPE_2__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct tiger_hw *VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 int VAR_6 = VAR_3->recv.size / 2;


 VAR_3->last_is0 &= ~VAR_2;
 VAR_3->last_is0 |= (VAR_4 & VAR_2);

 if (VAR_4 & VAR_1)
  VAR_5 = VAR_6 - 1;
 else
  VAR_5 = VAR_3->recv.size - 1;

 if (FUNC_1(VAR_0, &VAR_3->bc[0].bch.Flags))
  FUNC_0(&VAR_3->bc[0], VAR_5, VAR_6);
 if (FUNC_1(VAR_0, &VAR_3->bc[1].bch.Flags))
  FUNC_0(&VAR_3->bc[1], VAR_5, VAR_6);
}
