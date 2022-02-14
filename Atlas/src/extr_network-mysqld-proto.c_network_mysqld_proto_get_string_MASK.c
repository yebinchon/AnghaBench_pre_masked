
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef scalar_t__ guint64 ;
typedef int gchar ;
struct TYPE_6__ {scalar_t__ len; char* str; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int **,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;

int FUNC_2(network_packet *VAR_0, gchar **VAR_1) {
 guint64 VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_0->offset + VAR_2 < VAR_0->data->len && *(VAR_0->data->str + VAR_0->offset + VAR_2); VAR_2++);

 if (*(VAR_0->data->str + VAR_0->offset + VAR_2) != '\0') {

  return -1;
 }

 if (VAR_2 > 0) {
  if (VAR_0->offset >= VAR_0->data->len) {
   return -1;
  }
  if (VAR_0->offset + VAR_2 > VAR_0->data->len) {
   return -1;
  }




  VAR_3 = VAR_3 || FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 VAR_3 = VAR_3 || FUNC_1(VAR_0, 1);

 return VAR_3 ? -1 : 0;
}
