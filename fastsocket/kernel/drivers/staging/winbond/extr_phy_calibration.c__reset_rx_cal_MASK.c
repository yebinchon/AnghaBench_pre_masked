
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_data {int revision; } ;


 int FUNC_0 (struct hw_data*,int,int*) ;
 int FUNC_1 (struct hw_data*,int,int) ;

void FUNC_2(struct hw_data *VAR_0)
{
 u32 VAR_1;

 FUNC_0(VAR_0, 0x54, &VAR_1);

 if (VAR_0->revision == 0x2002)
 {
  VAR_1 &= 0xFFFF0000;
 }
 else
 {
  VAR_1 &= 0x000003FF;
 }

 FUNC_1(VAR_0, 0x54, VAR_1);
}
