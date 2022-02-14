
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct efx_filter_spec {int flags; scalar_t__ type; int* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

int FUNC_1(struct efx_filter_spec *VAR_7,
        u16 VAR_8, const u8 *VAR_9)
{
 FUNC_0(!(VAR_7->flags &
         (VAR_0 | VAR_1)));


 if (VAR_7->type != VAR_4)
  return -VAR_6;

 if (VAR_8 == VAR_5) {
  VAR_7->type = VAR_3;
  VAR_7->data[0] = 0;
 } else {
  VAR_7->type = VAR_2;
  VAR_7->data[0] = VAR_8;
 }

 VAR_7->data[1] = VAR_9[2] << 24 | VAR_9[3] << 16 | VAR_9[4] << 8 | VAR_9[5];
 VAR_7->data[2] = VAR_9[0] << 8 | VAR_9[1];
 return 0;
}
