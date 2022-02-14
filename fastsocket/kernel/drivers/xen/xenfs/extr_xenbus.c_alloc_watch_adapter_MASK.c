
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * node; } ;
struct watch_adapter {int * token; TYPE_1__ watch; } ;


 int VAR_0 ;
 int FUNC_0 (struct watch_adapter*) ;
 void* FUNC_1 (char const*,int ) ;
 struct watch_adapter* FUNC_2 (int,int ) ;

__attribute__((used)) static struct watch_adapter *FUNC_3(const char *VAR_1,
       const char *VAR_2)
{
 struct watch_adapter *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  goto out_fail;

 VAR_3->watch.node = FUNC_1(VAR_1, VAR_0);
 if (VAR_3->watch.node == ((void*)0))
  goto out_free;

 VAR_3->token = FUNC_1(VAR_2, VAR_0);
 if (VAR_3->token == ((void*)0))
  goto out_free;

 return VAR_3;

out_free:
 FUNC_0(VAR_3);

out_fail:
 return ((void*)0);
}
