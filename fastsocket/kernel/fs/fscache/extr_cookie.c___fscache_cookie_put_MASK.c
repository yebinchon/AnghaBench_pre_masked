
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {int usage; int backing_objects; struct fscache_cookie* parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct fscache_cookie*) ;
 int FUNC_2 (char*,struct fscache_cookie*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct fscache_cookie*) ;

void FUNC_8(struct fscache_cookie *VAR_1)
{
 struct fscache_cookie *VAR_2;

 FUNC_2("%p", VAR_1);

 for (;;) {
  FUNC_1("FREE COOKIE %p", VAR_1);
  VAR_2 = VAR_1->parent;
  FUNC_0(!FUNC_6(&VAR_1->backing_objects));
  FUNC_7(VAR_0, VAR_1);

  if (!VAR_2)
   break;

  VAR_1 = VAR_2;
  FUNC_0(FUNC_5(&VAR_1->usage) <= 0);
  if (!FUNC_4(&VAR_1->usage))
   break;
 }

 FUNC_3("");
}
