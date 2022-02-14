
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {struct doc_tombstone* t_tombstone; } ;
struct doc_tombstone {int dummy; } ;


 int FUNC_0 () ;
 struct uthread* FUNC_1 (int ) ;
 struct doc_tombstone* FUNC_2 (int) ;
 int FUNC_3 (struct doc_tombstone*,int ,int) ;

struct doc_tombstone *
FUNC_4(void)
{
 struct uthread *VAR_0;
 VAR_0 = FUNC_1(FUNC_0());

 if (VAR_0->t_tombstone == ((void*)0)) {
  VAR_0->t_tombstone = FUNC_2(sizeof(struct doc_tombstone));
  if (VAR_0->t_tombstone) {
   FUNC_3(VAR_0->t_tombstone, 0, sizeof(struct doc_tombstone));
  }
 }

 return VAR_0->t_tombstone;
}
