
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef int network_mysqld_lenenc_type ;
typedef size_t guint ;
struct TYPE_4__ {size_t len; scalar_t__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;

int FUNC_1(network_packet *VAR_4, network_mysqld_lenenc_type *VAR_5) {
 guint VAR_6 = VAR_4->offset;
 unsigned char *VAR_7 = (unsigned char *)VAR_4->data->str;

 FUNC_0(VAR_6 < VAR_4->data->len, -1);

 if (VAR_7[VAR_6] < 251) {
  *VAR_5 = VAR_2;
 } else if (VAR_7[VAR_6] == 251) {
  *VAR_5 = VAR_3;
 } else if (VAR_7[VAR_6] == 252) {
  *VAR_5 = VAR_2;
 } else if (VAR_7[VAR_6] == 253) {
  *VAR_5 = VAR_2;
 } else if (VAR_7[VAR_6] == 254) {
  if (VAR_6 == 4 &&
      VAR_4->data->len - VAR_4->offset < 8) {
   *VAR_5 = VAR_0;
  } else {
   *VAR_5 = VAR_2;
  }
 } else {
  *VAR_5 = VAR_1;
 }

 return 0;
}
