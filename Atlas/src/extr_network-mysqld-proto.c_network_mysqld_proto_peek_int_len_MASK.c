
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef int guint64 ;
typedef int guint32 ;
typedef int guchar ;
typedef int gsize ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ str; } ;



int FUNC_0(network_packet *VAR_0, guint64 *VAR_1, gsize VAR_2) {
 gsize VAR_3;
 int VAR_4;
 guint32 VAR_5 = 0, VAR_6 = 0;
 guchar *VAR_7 = (guchar *)VAR_0->data->str + VAR_0->offset;

 if (VAR_0->offset > VAR_0->data->len) {
  return -1;
 }
 if (VAR_0->offset + VAR_2 > VAR_0->data->len) {
  return -1;
 }




 for (VAR_3 = 0, VAR_4 = 0;
   VAR_3 < VAR_2 && VAR_3 < 4;
   VAR_3++, VAR_4 += 8, VAR_7++) {
  VAR_5 |= ((*VAR_7) << VAR_4);
 }

 for (VAR_4 = 0;
   VAR_3 < VAR_2;
   VAR_3++, VAR_4 += 8, VAR_7++) {
  VAR_6 |= ((*VAR_7) << VAR_4);
 }

 *VAR_1 = (((guint64)VAR_6 << 32) | VAR_5);

 return 0;
}
