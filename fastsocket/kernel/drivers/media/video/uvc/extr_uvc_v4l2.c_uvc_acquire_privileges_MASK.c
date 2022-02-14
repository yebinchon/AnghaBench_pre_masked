
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_fh {scalar_t__ state; TYPE_1__* stream; } ;
struct TYPE_2__ {int active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct uvc_fh *VAR_2)
{

 if (VAR_2->state == VAR_1)
  return 0;


 if (FUNC_1(&VAR_2->stream->active) != 1) {
  FUNC_0(&VAR_2->stream->active);
  return -VAR_0;
 }

 VAR_2->state = VAR_1;
 return 0;
}
