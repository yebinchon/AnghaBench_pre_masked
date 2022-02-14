
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {unsigned int state; int done; int field_count; struct timeval ts; } ;
struct bttv_buffer {TYPE_1__ vb; } ;
struct bttv {int field_count; } ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bttv *VAR_0, struct bttv_buffer *VAR_1,
      unsigned int VAR_2)
{
 struct timeval VAR_3;

 if (((void*)0) == VAR_1)
  return;

 FUNC_0(&VAR_3);
 VAR_1->vb.ts = VAR_3;
 VAR_1->vb.field_count = VAR_0->field_count;
 VAR_1->vb.state = VAR_2;
 FUNC_1(&VAR_1->vb.done);
}
