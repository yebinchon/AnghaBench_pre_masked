
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufhashhdr {struct buf* lh_first; } ;
struct TYPE_2__ {struct buf** le_prev; struct buf* le_next; } ;
struct buf {TYPE_1__ b_hash; } ;
typedef struct buf* buf_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __inline__ void
FUNC_1(struct bufhashhdr * VAR_0, buf_t VAR_1)
{
 if ((VAR_1->b_hash.le_next = (VAR_0)->lh_first) != ((void*)0))
  (VAR_0)->lh_first->b_hash.le_prev = &(VAR_1)->b_hash.le_next;
 (VAR_0)->lh_first = VAR_1;
 VAR_1->b_hash.le_prev = &(VAR_0)->lh_first;
 if (VAR_1->b_hash.le_prev == (struct buf **)0xdeadbeef)
  FUNC_0("blistenterhead: le_prev is deadbeef");
}
