
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

u32 *
FUNC_2(unsigned int VAR_2, unsigned int VAR_3, int VAR_4)
{
 u32 *VAR_5;

 if (FUNC_1(VAR_3) > 7)
  return 0;


 VAR_4 &= ~3;




 if (!VAR_2) {

  VAR_5 = (u32 *) (VAR_0
        | (1 << (FUNC_1(VAR_3) + 16))
        | (FUNC_0(VAR_3) << 8) | VAR_4);
 } else {
  VAR_5 = (u32 *) (VAR_1
        | (VAR_2 << 16)
        | (FUNC_1(VAR_3) << 11)
        | (FUNC_0(VAR_3) << 8) | VAR_4);
 }

 return VAR_5;
}
