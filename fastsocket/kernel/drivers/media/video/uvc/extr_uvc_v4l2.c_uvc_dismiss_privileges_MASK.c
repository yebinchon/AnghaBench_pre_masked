
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_fh {scalar_t__ state; TYPE_1__* stream; } ;
struct TYPE_2__ {int active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct uvc_fh *VAR_2)
{
 if (VAR_2->state == VAR_0)
  FUNC_0(&VAR_2->stream->active);

 VAR_2->state = VAR_1;
}
