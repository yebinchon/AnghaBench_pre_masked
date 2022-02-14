
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void const*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (unsigned int const,unsigned int) ;

__attribute__((used)) static void FUNC_6(const void *VAR_2, const unsigned int VAR_3)
{
 unsigned int VAR_4;
 uint32_t VAR_5;

 FUNC_0(VAR_3 > VAR_0);
 FUNC_1(VAR_3 > VAR_0);

 for (VAR_4 = 0; VAR_4 < ((VAR_3 + 3) & ~3); VAR_4 += 4) {
  VAR_5 = FUNC_3(VAR_1);
  FUNC_4(FUNC_2(VAR_2, VAR_4), &VAR_5,
         FUNC_5(VAR_3 - VAR_4, (unsigned int)4));
 }
}
