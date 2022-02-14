
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_2__ {int name; scalar_t__ len; } ;
struct dentry {int d_count; TYPE_1__ d_name; } ;
struct autofs_info {void* last_used; int count; } ;


 int FUNC_0 (char*,struct dentry*,int,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*,unsigned long,int) ;
 struct autofs_info* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct vfsmount*,struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 void* VAR_1 ;
 struct dentry* FUNC_9 (struct dentry*,struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct vfsmount *VAR_2,
               struct dentry *VAR_3,
        unsigned long VAR_4,
        int VAR_5)
{
 struct autofs_info *VAR_6 = FUNC_3(VAR_3);
 struct dentry *VAR_7;

 FUNC_0("top %p %.*s",
  VAR_3, (int)VAR_3->d_name.len, VAR_3->d_name.name);


 if (!FUNC_10(VAR_3))
  return 1;

 FUNC_11(&VAR_0);
 for (VAR_7 = VAR_3; VAR_7; VAR_7 = FUNC_9(VAR_7, VAR_3)) {

  if (!FUNC_10(VAR_7))
   continue;

  FUNC_0("dentry %p %.*s",
   VAR_7, (int) VAR_7->d_name.len, VAR_7->d_name.name);

  VAR_7 = FUNC_7(VAR_7);
  FUNC_12(&VAR_0);







  if (FUNC_6(VAR_7)) {
   if (FUNC_4(VAR_2, VAR_7)) {
    VAR_6->last_used = VAR_1;
    FUNC_8(VAR_7);
    return 1;
   }
  } else {
   struct autofs_info *VAR_8 = FUNC_3(VAR_7);
   unsigned int VAR_9 = FUNC_1(&VAR_8->count);





   FUNC_5(VAR_7);


   if (VAR_7 == VAR_3)
    VAR_9 += 2;
   else
    VAR_9++;

   if (FUNC_1(&VAR_7->d_count) > VAR_9) {
    VAR_6->last_used = VAR_1;
    FUNC_8(VAR_7);
    return 1;
   }
  }
  FUNC_8(VAR_7);
  FUNC_11(&VAR_0);
 }
 FUNC_12(&VAR_0);


 if (!FUNC_2(VAR_3, VAR_4, VAR_5))
  return 1;

 return 0;
}
