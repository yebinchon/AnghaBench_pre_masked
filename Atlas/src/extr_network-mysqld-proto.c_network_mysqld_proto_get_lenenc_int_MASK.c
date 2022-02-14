
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef int guint64 ;
typedef size_t guint ;
struct TYPE_4__ {size_t len; scalar_t__ str; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,size_t,unsigned char) ;

int FUNC_1(network_packet *VAR_1, guint64 *VAR_2) {
 guint VAR_3 = VAR_1->offset;
 guint64 VAR_4 = 0;
 unsigned char *VAR_5 = (unsigned char *)VAR_1->data->str;

 if (VAR_3 >= VAR_1->data->len) return -1;

 if (VAR_5[VAR_3] < 251) {
  VAR_4 = VAR_5[VAR_3];
 } else if (VAR_5[VAR_3] == 252) {
  if (VAR_3 + 2 >= VAR_1->data->len) return -1;
  VAR_4 = (VAR_5[VAR_3 + 1] << 0) |
   (VAR_5[VAR_3 + 2] << 8) ;
  VAR_3 += 2;
 } else if (VAR_5[VAR_3] == 253) {
  if (VAR_3 + 3 >= VAR_1->data->len) return -1;
  VAR_4 = (VAR_5[VAR_3 + 1] << 0) |
   (VAR_5[VAR_3 + 2] << 8) |
   (VAR_5[VAR_3 + 3] << 16);

  VAR_3 += 3;
 } else if (VAR_5[VAR_3] == 254) {
  if (VAR_3 + 8 >= VAR_1->data->len) return -1;
  VAR_4 = (VAR_5[VAR_3 + 5] << 0) |
   (VAR_5[VAR_3 + 6] << 8) |
   (VAR_5[VAR_3 + 7] << 16) |
   (VAR_5[VAR_3 + 8] << 24);
  VAR_4 <<= 32;

  VAR_4 |= (VAR_5[VAR_3 + 1] << 0) |
   (VAR_5[VAR_3 + 2] << 8) |
   (VAR_5[VAR_3 + 3] << 16) |
   (VAR_5[VAR_3 + 4] << 24);


  VAR_3 += 8;
 } else {

  FUNC_0("%s: bytestream[%d] is %d",
   VAR_0,
   VAR_3, VAR_5[VAR_3]);



  return -1;
 }
 VAR_3 += 1;

 VAR_1->offset = VAR_3;

 *VAR_2 = VAR_4;

 return 0;
}
