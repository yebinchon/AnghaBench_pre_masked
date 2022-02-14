
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct orc_host {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u8 FUNC_2(struct orc_host * VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if (!(FUNC_0(VAR_2->base + VAR_0) & VAR_1))
   return 1;
  FUNC_1(100);
 }
 return 0;
}
