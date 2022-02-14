
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct xps2data {scalar_t__ base_address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct xps2data *VAR_3, u8 *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = -1;


 VAR_5 = FUNC_0(VAR_3->base_address + VAR_1);
 if (VAR_5 & VAR_2) {
  *VAR_4 = FUNC_0(VAR_3->base_address + VAR_0);
  VAR_6 = 0;
 }

 return VAR_6;
}
