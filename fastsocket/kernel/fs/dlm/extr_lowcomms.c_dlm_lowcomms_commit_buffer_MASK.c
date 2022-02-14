
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writequeue_entry {int users; scalar_t__ offset; scalar_t__ end; scalar_t__ len; struct connection* con; } ;
struct connection {int writequeue_lock; int swork; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(void *VAR_2)
{
 struct writequeue_entry *VAR_3 = (struct writequeue_entry *)VAR_2;
 struct connection *VAR_4 = VAR_3->con;
 int VAR_5;

 FUNC_1(&VAR_4->writequeue_lock);
 VAR_5 = --VAR_3->users;
 if (VAR_5)
  goto out;
 VAR_3->len = VAR_3->end - VAR_3->offset;
 FUNC_2(&VAR_4->writequeue_lock);

 if (!FUNC_3(VAR_0, &VAR_4->flags)) {
  FUNC_0(VAR_1, &VAR_4->swork);
 }
 return;

out:
 FUNC_2(&VAR_4->writequeue_lock);
 return;
}
