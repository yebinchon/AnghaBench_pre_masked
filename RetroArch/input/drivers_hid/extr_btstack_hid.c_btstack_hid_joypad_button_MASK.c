
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int input_bits_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (void*,unsigned int,int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_1,
      unsigned VAR_2, uint16_t VAR_3)
{
  input_bits_t VAR_4;
  FUNC_2(VAR_1, VAR_2, &VAR_4);


  if (FUNC_1(VAR_3))
    return 0;


  if ((VAR_2 < VAR_0) && (VAR_3 < 32))
    return (FUNC_0(VAR_4, VAR_3) != 0);

  return 0;
}
