
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void const*,unsigned int) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 unsigned int FUNC_4 (unsigned int const,unsigned int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(const void *VAR_3, const unsigned int VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6, VAR_7 = 0;
 uint32_t VAR_8;

 FUNC_0(VAR_4 > VAR_0);
 FUNC_1(VAR_4 > VAR_0);

 VAR_6 = FUNC_4(VAR_4, (unsigned int) 4);
 VAR_5 = 0;
 while (VAR_5 < VAR_4) {

  if (VAR_7 != VAR_6 || VAR_6 < 4)
   FUNC_6(VAR_2, (1 << VAR_6) - 1);

  FUNC_3(&VAR_8, FUNC_2(VAR_3, VAR_5), VAR_6);

  FUNC_5(VAR_1, VAR_8);

  VAR_5 += VAR_6;
  VAR_7 = VAR_6 = FUNC_4(VAR_4 - VAR_5, (unsigned int) 4);
 }

 FUNC_6(VAR_2, 0xf);


 return 1;
}
