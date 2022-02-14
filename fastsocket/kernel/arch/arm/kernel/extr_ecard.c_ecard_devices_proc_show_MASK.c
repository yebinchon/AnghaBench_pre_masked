
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ ecard_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct seq_file*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 ecard_t *VAR_3 = VAR_0;

 while (VAR_3) {
  FUNC_0(VAR_1, VAR_3);
  VAR_3 = VAR_3->next;
 }
 return 0;
}
