
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lv {int offset; int length; } ;
struct dtslot {int next; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
struct TYPE_4__ {int freelist; } ;
struct TYPE_5__ {struct dtslot* slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;


 scalar_t__ FUNC_0 (struct dt_lock*) ;

__attribute__((used)) static void FUNC_1(dtpage_t * VAR_0,
          int VAR_1,
          struct dt_lock ** VAR_2)
{
 int VAR_3;
 struct dtslot *VAR_4;
 int VAR_5;
 struct dt_lock *VAR_6 = *VAR_2;
 struct lv *VAR_7;
 int VAR_8, VAR_9;


 VAR_3 = VAR_0->header.freelist;


 if (VAR_6->index >= VAR_6->maxcnt)
  VAR_6 = (struct dt_lock *) FUNC_0(VAR_6);
 VAR_7 = & VAR_6->lv[VAR_6->index];

 VAR_7->offset = VAR_3;

 VAR_9 = 1;
 VAR_8 = VAR_3;

 VAR_4 = &VAR_0->slot[VAR_3];
 VAR_5 = VAR_4->next;


 while (VAR_5 < VAR_1 && VAR_5 >= 0) {

  if (VAR_5 != VAR_8 + 1) {

   VAR_7->length = VAR_9;
   VAR_6->index++;


   if (VAR_6->index < VAR_6->maxcnt)
    VAR_7++;
   else {
    VAR_6 = (struct dt_lock *) FUNC_0(VAR_6);
    VAR_7 = & VAR_6->lv[0];
   }

   VAR_7->offset = VAR_5;
   VAR_9 = 0;
  }

  VAR_9++;
  VAR_8 = VAR_5;

  VAR_4 = &VAR_0->slot[VAR_5];
  VAR_5 = VAR_4->next;
 }


 VAR_7->length = VAR_9;
 VAR_6->index++;

 *VAR_2 = VAR_6;
}
