
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct chrp_header {int signature; int* data; int len; } ;



__attribute__((used)) static u8 FUNC_0(struct chrp_header* VAR_0)
{
 u8 *VAR_1;
 u16 VAR_2 = VAR_0->signature;
 for (VAR_1 = (u8 *)&VAR_0->len; VAR_1 < VAR_0->data; VAR_1++)
  VAR_2 += *VAR_1;
 while (VAR_2 > 0xFF)
  VAR_2 = (VAR_2 & 0xFF) + (VAR_2>>8);
 return VAR_2;
}
