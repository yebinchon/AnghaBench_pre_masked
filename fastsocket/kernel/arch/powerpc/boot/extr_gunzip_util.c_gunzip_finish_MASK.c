
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ workspace; } ;
struct gunzip_state {TYPE_1__ s; } ;


 int FUNC_0 (struct gunzip_state*,void*,int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct gunzip_state *VAR_0, void *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_0->s.workspace) {
  FUNC_1(&VAR_0->s);
 }

 return VAR_3;
}
