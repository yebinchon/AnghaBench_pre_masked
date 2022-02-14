
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_lock; int d_flags; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct dcookie_struct {TYPE_1__ path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dcookie_struct*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dcookie_struct * VAR_2)
{
 struct dentry *VAR_3 = VAR_2->path.dentry;

 FUNC_2(&VAR_3->d_lock);
 VAR_3->d_flags &= ~VAR_0;
 FUNC_3(&VAR_3->d_lock);

 FUNC_1(&VAR_2->path);
 FUNC_0(VAR_1, VAR_2);
}
