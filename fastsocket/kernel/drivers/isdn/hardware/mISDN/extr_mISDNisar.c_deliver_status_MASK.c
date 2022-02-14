
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ch; } ;
struct isar_ch {TYPE_2__ bch; TYPE_1__* is; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ,int *,int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct isar_ch *VAR_2, int VAR_3)
{
 FUNC_1("%s: HL->LL FAXIND %x\n", VAR_2->is->name, VAR_3);
 FUNC_0(&VAR_2->bch.ch, VAR_1, VAR_3, 0, ((void*)0), VAR_0);
}
