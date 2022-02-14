
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rx_desc {int dummy; } ;
struct TYPE_2__ {int rx_desc_pos; } ;
struct atmel_private {TYPE_1__ host_info; } ;



__attribute__((used)) static inline u16 FUNC_0(struct atmel_private *VAR_0, u16 VAR_1, u16 VAR_2)
{
 return VAR_0->host_info.rx_desc_pos + (sizeof(struct rx_desc) * VAR_2) + VAR_1;
}
