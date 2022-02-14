
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct TYPE_4__ {int mdb_bh; TYPE_1__* mdb; } ;
struct TYPE_3__ {int drAtrb; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct super_block *VAR_3)
{

 if (VAR_3->s_flags & VAR_2)
  return;
 FUNC_0(VAR_3)->mdb->drAtrb |= FUNC_1(VAR_1);
 FUNC_0(VAR_3)->mdb->drAtrb &= FUNC_1(~VAR_0);
 FUNC_2(FUNC_0(VAR_3)->mdb_bh);
}
