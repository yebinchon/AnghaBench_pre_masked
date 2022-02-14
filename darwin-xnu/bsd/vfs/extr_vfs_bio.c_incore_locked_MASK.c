
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
struct bufhashhdr {struct buf* lh_first; } ;
struct TYPE_2__ {struct buf* le_next; } ;
struct buf {scalar_t__ b_lblkno; scalar_t__ b_vp; int b_flags; TYPE_1__ b_hash; } ;
typedef scalar_t__ daddr64_t ;
typedef struct buf* buf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static buf_t
FUNC_1(vnode_t VAR_1, daddr64_t VAR_2, struct bufhashhdr *VAR_3)
{
 struct buf *VAR_4;


 for (VAR_4 = VAR_3->lh_first; VAR_4 != ((void*)0); VAR_4 = VAR_4->b_hash.le_next) {
  if (VAR_4->b_lblkno == VAR_2 && VAR_4->b_vp == VAR_1 &&
      !FUNC_0(VAR_4->b_flags, VAR_0)) {
   return (VAR_4);
  }
 }
 return (((void*)0));
}
