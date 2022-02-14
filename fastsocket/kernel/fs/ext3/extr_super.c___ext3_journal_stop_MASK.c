
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_8__ {int h_err; TYPE_2__* h_transaction; } ;
typedef TYPE_3__ handle_t ;
struct TYPE_7__ {TYPE_1__* t_journal; } ;
struct TYPE_6__ {struct super_block* j_private; } ;


 int FUNC_0 (struct super_block*,char const*,int) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(const char *VAR_0, handle_t *VAR_1)
{
 struct super_block *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->h_transaction->t_journal->j_private;
 VAR_3 = VAR_1->h_err;
 VAR_4 = FUNC_1(VAR_1);

 if (!VAR_3)
  VAR_3 = VAR_4;
 if (VAR_3)
  FUNC_0(VAR_2, VAR_0, VAR_3);
 return VAR_3;
}
