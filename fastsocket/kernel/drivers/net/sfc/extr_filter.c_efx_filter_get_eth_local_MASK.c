
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct efx_filter_spec {int type; int* data; } ;




 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const struct efx_filter_spec *VAR_2,
        u16 *VAR_3, u8 *VAR_4)
{
 switch (VAR_2->type) {
 case 128:
  *VAR_3 = VAR_0;
  break;
 case 129:
  *VAR_3 = VAR_2->data[0];
  break;
 default:
  return -VAR_1;
 }

 VAR_4[0] = VAR_2->data[2] >> 8;
 VAR_4[1] = VAR_2->data[2];
 VAR_4[2] = VAR_2->data[1] >> 24;
 VAR_4[3] = VAR_2->data[1] >> 16;
 VAR_4[4] = VAR_2->data[1] >> 8;
 VAR_4[5] = VAR_2->data[1];
 return 0;
}
