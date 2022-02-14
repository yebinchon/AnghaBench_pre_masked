
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfs_trans {TYPE_1__* eng; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (struct netfs_trans*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct netfs_trans *VAR_0)
{
 if (VAR_0->eng)
  FUNC_1(VAR_0->eng->thread);
 FUNC_0(VAR_0);
}
