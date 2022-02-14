
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef scalar_t__ gsize ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ str; } ;
typedef int GString ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(network_packet *VAR_0, gsize VAR_1, GString *VAR_2) {
 int VAR_3 = 0;

 if (!VAR_2) return -1;

 FUNC_1(VAR_2, 0);

 if (!VAR_1) return 0;

 VAR_3 = VAR_3 || (VAR_0->offset >= VAR_0->data->len);
 VAR_3 = VAR_3 || (VAR_0->offset + VAR_1 > VAR_0->data->len);

 if (!VAR_3) {
  FUNC_0(VAR_2, VAR_0->data->str + VAR_0->offset, VAR_1);
  VAR_0->offset += VAR_1;
 }

 return VAR_3 ? -1 : 0;
}
