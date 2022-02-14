
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct conncache {TYPE_2__* closure_handle; } ;
struct TYPE_6__ {int hostcache; } ;
struct TYPE_7__ {TYPE_1__ dns; } ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,struct connectdata*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 struct connectdata* FUNC_4 (struct conncache*) ;
 int FUNC_5 (struct connectdata*,char*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct conncache *VAR_2)
{
  struct connectdata *VAR_3;

  VAR_3 = FUNC_4(VAR_2);
  while(VAR_3) {
    FUNC_3(VAR_1);
    VAR_3->data = VAR_2->closure_handle;

    FUNC_6(VAR_3->data, &VAR_1);

    FUNC_5(VAR_3, "kill all");
    (void)FUNC_1(VAR_2->closure_handle, VAR_3, VAR_0);
    FUNC_7(&VAR_1);

    VAR_3 = FUNC_4(VAR_2);
  }

  if(VAR_2->closure_handle) {
    FUNC_3(VAR_1);
    FUNC_6(VAR_2->closure_handle, &VAR_1);

    FUNC_2(VAR_2->closure_handle,
                         VAR_2->closure_handle->dns.hostcache);
    FUNC_0(&VAR_2->closure_handle);
    FUNC_7(&VAR_1);
  }
}
