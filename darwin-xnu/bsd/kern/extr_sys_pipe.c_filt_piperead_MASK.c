
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe {int dummy; } ;
struct knote {TYPE_1__* kn_fp; } ;
struct TYPE_2__ {scalar_t__ f_data; } ;


 int FUNC_0 (struct knote*,struct pipe*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_0, long VAR_1)
{
#pragma unused(hint)
 struct pipe *VAR_2 = (struct pipe *)VAR_0->kn_fp->f_data;

 return FUNC_0(VAR_0, VAR_2);
}
