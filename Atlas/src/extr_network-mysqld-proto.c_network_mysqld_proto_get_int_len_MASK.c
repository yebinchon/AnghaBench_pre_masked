
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
typedef TYPE_1__ network_packet ;
typedef int guint64 ;
typedef scalar_t__ gsize ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,scalar_t__) ;

int FUNC_1(network_packet *VAR_0, guint64 *VAR_1, gsize VAR_2) {
 int VAR_3 = 0;

 VAR_3 = VAR_3 || FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3) return -1;

 VAR_0->offset += VAR_2;

 return 0;
}
