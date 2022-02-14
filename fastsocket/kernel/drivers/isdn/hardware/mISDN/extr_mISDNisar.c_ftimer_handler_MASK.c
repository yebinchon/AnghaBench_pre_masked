
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Flags; } ;
struct isar_ch {TYPE_2__ bch; TYPE_1__* is; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isar_ch*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(unsigned long VAR_3)
{
 struct isar_ch *VAR_4 = (struct isar_ch *)VAR_3;

 FUNC_1("%s: ftimer flags %lx\n", VAR_4->is->name, VAR_4->bch.Flags);
 FUNC_2(VAR_0, &VAR_4->bch.Flags);
 if (FUNC_2(VAR_1, &VAR_4->bch.Flags))
  FUNC_0(VAR_4, VAR_2);
}
