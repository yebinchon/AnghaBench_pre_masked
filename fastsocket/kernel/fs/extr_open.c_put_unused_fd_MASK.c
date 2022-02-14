
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int file_lock; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int FUNC_0 (struct files_struct*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned int VAR_1)
{
 struct files_struct *VAR_2 = VAR_0->files;
 FUNC_1(&VAR_2->file_lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->file_lock);
}
