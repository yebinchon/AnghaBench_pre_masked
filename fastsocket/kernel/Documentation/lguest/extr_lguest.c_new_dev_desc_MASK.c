
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct lguest_device_desc {int type; } ;
typedef int d ;
struct TYPE_6__ {TYPE_1__* desc; } ;
struct TYPE_5__ {void* descpage; TYPE_3__* lastdev; } ;
struct TYPE_4__ {int config_len; } ;


 void* FUNC_0 (TYPE_3__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 struct lguest_device_desc* FUNC_3 (void*,struct lguest_device_desc*,int) ;

__attribute__((used)) static struct lguest_device_desc *FUNC_4(u16 VAR_1)
{
 struct lguest_device_desc VAR_2 = { .type = VAR_1 };
 void *VAR_3;


 if (VAR_0.lastdev)
  VAR_3 = FUNC_0(VAR_0.lastdev)
   + VAR_0.lastdev->desc->config_len;
 else
  VAR_3 = VAR_0.descpage;


 if (VAR_3 + sizeof(VAR_2) > (void *)VAR_0.descpage + FUNC_2())
  FUNC_1(1, "Too many devices");


 return FUNC_3(VAR_3, &VAR_2, sizeof(VAR_2));
}
