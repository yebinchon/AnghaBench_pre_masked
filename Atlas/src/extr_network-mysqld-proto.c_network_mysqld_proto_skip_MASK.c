
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef scalar_t__ gsize ;
struct TYPE_4__ {scalar_t__ len; } ;



int FUNC_0(network_packet *VAR_0, gsize VAR_1) {
 if (VAR_0->offset + VAR_1 > VAR_0->data->len) return -1;

 VAR_0->offset += VAR_1;

 return 0;
}
