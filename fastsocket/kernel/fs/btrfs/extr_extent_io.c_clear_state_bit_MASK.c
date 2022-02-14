
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_state {int state; scalar_t__ end; scalar_t__ start; int * tree; int rb_node; int wq; } ;
struct extent_io_tree {scalar_t__ dirty_bytes; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_io_tree*,struct extent_state*,int*) ;
 int FUNC_2 (struct extent_state*) ;
 int FUNC_3 (struct extent_io_tree*,struct extent_state*) ;
 struct extent_state* FUNC_4 (struct extent_state*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct extent_state *FUNC_7(struct extent_io_tree *VAR_2,
         struct extent_state *VAR_3,
         int *VAR_4, int VAR_5)
{
 struct extent_state *VAR_6;
 int VAR_7 = *VAR_4 & ~VAR_0;

 if ((VAR_7 & VAR_1) && (VAR_3->state & VAR_1)) {
  u64 VAR_8 = VAR_3->end - VAR_3->start + 1;
  FUNC_0(VAR_8 > VAR_2->dirty_bytes);
  VAR_2->dirty_bytes -= VAR_8;
 }
 FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_3->state &= ~VAR_7;
 if (VAR_5)
  FUNC_6(&VAR_3->wq);
 if (VAR_3->state == 0) {
  VAR_6 = FUNC_4(VAR_3);
  if (VAR_3->tree) {
   FUNC_5(&VAR_3->rb_node, &VAR_2->state);
   VAR_3->tree = ((void*)0);
   FUNC_2(VAR_3);
  } else {
   FUNC_0(1);
  }
 } else {
  FUNC_3(VAR_2, VAR_3);
  VAR_6 = FUNC_4(VAR_3);
 }
 return VAR_6;
}
