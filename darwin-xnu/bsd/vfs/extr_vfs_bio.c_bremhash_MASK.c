
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct buf* le_next; struct buf** le_prev; } ;
struct buf {TYPE_1__ b_hash; } ;
typedef struct buf* buf_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __inline__ void
FUNC_1(buf_t VAR_0)
{
 if (VAR_0->b_hash.le_prev == (struct buf **)0xdeadbeef)
  FUNC_0("bremhash le_prev is deadbeef");
 if (VAR_0->b_hash.le_next == VAR_0)
  FUNC_0("bremhash: next points to self");

 if (VAR_0->b_hash.le_next != ((void*)0))
  VAR_0->b_hash.le_next->b_hash.le_prev = VAR_0->b_hash.le_prev;
 *VAR_0->b_hash.le_prev = (VAR_0)->b_hash.le_next;
}
