
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isar_hw {TYPE_2__* ch; } ;
struct TYPE_3__ {int Flags; } ;
struct TYPE_4__ {TYPE_1__ bch; int ftimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct isar_hw *VAR_2)
{
 FUNC_1(&VAR_2->ch[0], VAR_1);
 FUNC_1(&VAR_2->ch[1], VAR_1);
 FUNC_0(&VAR_2->ch[0].ftimer);
 FUNC_0(&VAR_2->ch[1].ftimer);
 FUNC_2(VAR_0, &VAR_2->ch[0].bch.Flags);
 FUNC_2(VAR_0, &VAR_2->ch[1].bch.Flags);
}
