
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int hw_lock_bit_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int,int,int ,int ) ;
 unsigned int FUNC_3 (int *,int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static inline unsigned int
FUNC_6(hw_lock_bit_t *VAR_3, unsigned int VAR_4, uint32_t VAR_5)
{
 unsigned int VAR_6 = 0;
 uint32_t VAR_7 = (1 << VAR_4);

 uint32_t VAR_8;
 (void)VAR_5;
 VAR_8 = FUNC_4(VAR_3);
 if (!(VAR_7 & VAR_8)) {
  FUNC_5(VAR_3, VAR_8 | VAR_7);
  VAR_6 = 1;
 }







 return VAR_6;
}
