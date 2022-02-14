
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct afs_vlocation {TYPE_1__ vldb; int lock; int waitq; int update; int grave; int link; int usage; int state; struct afs_cell* cell; } ;
struct afs_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct afs_vlocation*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 struct afs_vlocation* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char const*,size_t) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct afs_vlocation *FUNC_7(struct afs_cell *VAR_2,
       const char *VAR_3,
       size_t VAR_4)
{
 struct afs_vlocation *VAR_5;

 VAR_5 = FUNC_4(sizeof(struct afs_vlocation), VAR_1);
 if (VAR_5) {
  VAR_5->cell = VAR_2;
  VAR_5->state = VAR_0;
  FUNC_2(&VAR_5->usage, 1);
  FUNC_0(&VAR_5->link);
  FUNC_0(&VAR_5->grave);
  FUNC_0(&VAR_5->update);
  FUNC_3(&VAR_5->waitq);
  FUNC_6(&VAR_5->lock);
  FUNC_5(VAR_5->vldb.name, VAR_3, VAR_4);
 }

 FUNC_1(" = %p", VAR_5);
 return VAR_5;
}
