
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct hw_data {int* phy_para; } ;


 int* VAR_0 ;

void FUNC_0( struct hw_data * VAR_1, u32 *VAR_2 ,char VAR_3)
{
 u8 VAR_4;

 for( VAR_4=0; VAR_4<VAR_3; VAR_4++ )
 {
  VAR_1->phy_para[VAR_4] = VAR_0[VAR_4];
  VAR_2[VAR_4] = (1 << 31) | (0 << 30) | (24 << 24) | (VAR_0[VAR_4]&0xffffff);
 }
}
