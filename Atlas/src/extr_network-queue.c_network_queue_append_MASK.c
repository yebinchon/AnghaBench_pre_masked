
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int chunks; int len; } ;
typedef TYPE_1__ network_queue ;
struct TYPE_7__ {scalar_t__ len; } ;
typedef TYPE_2__ GString ;


 int FUNC_0 (int ,TYPE_2__*) ;

int FUNC_1(network_queue *VAR_0, GString *VAR_1) {
 VAR_0->len += VAR_1->len;

 FUNC_0(VAR_0->chunks, VAR_1);

 return 0;
}
