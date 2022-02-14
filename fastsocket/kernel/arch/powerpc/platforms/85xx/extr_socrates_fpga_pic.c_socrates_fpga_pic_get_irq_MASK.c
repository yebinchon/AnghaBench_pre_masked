
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned int FUNC_5(unsigned int VAR_5)
{
 uint32_t VAR_6;
 unsigned long VAR_7;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  if (VAR_5 == VAR_2[VAR_8])
   break;
 }
 if (VAR_8 == 3)
  return VAR_0;

 FUNC_3(&VAR_4, VAR_7);
 VAR_6 = FUNC_2(FUNC_0(VAR_8));
 FUNC_4(&VAR_4, VAR_7);
 for (VAR_8 = VAR_1 - 1; VAR_8 >= 0; VAR_8--) {
  if (VAR_6 >> (VAR_8 + 16))
   break;
 }
 return FUNC_1(VAR_3,
   (irq_hw_number_t)VAR_8);
}
