
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uwb_mas_bm {int bm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static
void FUNC_1(struct uwb_mas_bm *VAR_2, u8 VAR_3, u16 VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = 1 << VAR_5;
  if (VAR_4 & VAR_6)
   FUNC_0(VAR_3 * VAR_1 + VAR_5, VAR_2->bm);
 }
}
