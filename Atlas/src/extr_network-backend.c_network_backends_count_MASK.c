
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int backends_mutex; TYPE_1__* backends; } ;
typedef TYPE_2__ network_backends_t ;
typedef int guint ;
struct TYPE_4__ {int len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

guint FUNC_2(network_backends_t *VAR_0) {
 guint VAR_1;

 FUNC_0(VAR_0->backends_mutex);
 VAR_1 = VAR_0->backends->len;
 FUNC_1(VAR_0->backends_mutex);

 return VAR_1;
}
