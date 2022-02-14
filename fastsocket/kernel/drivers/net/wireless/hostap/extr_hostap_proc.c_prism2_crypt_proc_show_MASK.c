
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {TYPE_4__* private; } ;
struct TYPE_7__ {TYPE_2__** crypt; int tx_keyidx; } ;
struct TYPE_8__ {TYPE_3__ crypt_info; } ;
typedef TYPE_4__ local_info_t ;
struct TYPE_6__ {int priv; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* print_stats ) (struct seq_file*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 local_info_t *VAR_3 = VAR_1->private;
 int VAR_4;

 FUNC_0(VAR_1, "tx_keyidx=%d\n", VAR_3->crypt_info.tx_keyidx);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->crypt_info.crypt[VAR_4] &&
      VAR_3->crypt_info.crypt[VAR_4]->ops &&
      VAR_3->crypt_info.crypt[VAR_4]->ops->print_stats) {
   VAR_3->crypt_info.crypt[VAR_4]->ops->print_stats(
    VAR_1, VAR_3->crypt_info.crypt[VAR_4]->priv);
  }
 }
 return 0;
}
