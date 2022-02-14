
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wl1271 {scalar_t__ fwlog_size; scalar_t__ fwlog; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,size_t*,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;

size_t FUNC_2(struct wl1271 *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;


 while (VAR_4 < VAR_3) {
  if (VAR_2[VAR_4] == 0)
   break;
  if (VAR_4 + VAR_2[VAR_4] + 1 > VAR_3)
   break;
  VAR_4 += VAR_2[VAR_4] + 1;
 }


 VAR_4 = FUNC_1(VAR_4, (size_t)(VAR_0 - VAR_1->fwlog_size));


 FUNC_0(VAR_1->fwlog + VAR_1->fwlog_size, VAR_2, VAR_4);
 VAR_1->fwlog_size += VAR_4;

 return VAR_4;
}
