
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conncache {TYPE_2__* closure_handle; int hash; } ;
struct TYPE_4__ {struct conncache* conn_cache; } ;
struct TYPE_5__ {TYPE_1__ state; } ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 () ;
 int VAR_2 ;

int FUNC_3(struct conncache *VAR_3, int VAR_4)
{
  int VAR_5;


  VAR_3->closure_handle = FUNC_2();
  if(!VAR_3->closure_handle)
    return 1;

  VAR_5 = FUNC_1(&VAR_3->hash, VAR_4, VAR_0,
                      VAR_1, VAR_2);
  if(VAR_5)
    FUNC_0(&VAR_3->closure_handle);
  else
    VAR_3->closure_handle->state.conn_cache = VAR_3;

  return VAR_5;
}
