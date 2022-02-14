
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;
struct uni_pagedir {int* inverse_trans_unicode; int*** uni_pgdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int,int ) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2,
          struct uni_pagedir *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 u16 **VAR_8, *VAR_9;
 u16 *VAR_10;

 if (!VAR_3) return;
 VAR_10 = VAR_3->inverse_trans_unicode;
 if (!VAR_10) {
  VAR_10 = VAR_3->inverse_trans_unicode =
   FUNC_0(VAR_1 * sizeof(u16), VAR_0);
  if (!VAR_10)
   return;
 }
 FUNC_1(VAR_10, 0, VAR_1 * sizeof(u16));

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  VAR_8 = VAR_3->uni_pgdir[VAR_4];
  if (!VAR_8)
   continue;
  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
   VAR_9 = VAR_8[VAR_5];
   if (!VAR_9)
    continue;
   for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
    VAR_7 = VAR_9[VAR_6];
    if (VAR_7 >= 0 && VAR_7 < VAR_1
            && VAR_10[VAR_7] < 32)
       VAR_10[VAR_7] = (VAR_4 << 11) + (VAR_5 << 6) + VAR_6;
   }
  }
 }
}
