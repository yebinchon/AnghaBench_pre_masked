
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; TYPE_5__* data; } ;
typedef TYPE_1__ network_packet ;
typedef scalar_t__ guint64 ;
typedef int gchar ;
struct TYPE_7__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int **,scalar_t__) ;

int FUNC_4(network_packet *VAR_1, gchar **VAR_2, guint64 *VAR_3) {
 guint64 VAR_4;

 if (VAR_1->offset >= VAR_1->data->len) {
  FUNC_1(VAR_0, FUNC_0(VAR_1->data));
  return -1;
 }
 if (VAR_1->offset >= VAR_1->data->len) {
  return -1;
 }

 if (FUNC_2(VAR_1, &VAR_4)) return -1;

 if (VAR_1->offset + VAR_4 > VAR_1->data->len) return -1;

 if (VAR_3) *VAR_3 = VAR_4;

 return FUNC_3(VAR_1, VAR_2, VAR_4);
}
