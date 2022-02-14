
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_rates_param_set {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_3)
{
 int VAR_4;
 struct mrvl_ie_rates_param_set *VAR_5 = (void *)VAR_3;

 VAR_5->header.type = FUNC_0(VAR_1);
 VAR_3 += sizeof(VAR_5->header);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  *VAR_3 = VAR_2[VAR_4];
  if (*VAR_3 == 0)
   break;




  if (*VAR_3 == 0x02 || *VAR_3 == 0x04 ||
      *VAR_3 == 0x0b || *VAR_3 == 0x16)
   *VAR_3 |= 0x80;
  VAR_3++;
 }
 VAR_5->header.len = FUNC_0(VAR_4);
 return sizeof(VAR_5->header) + VAR_4;
}
