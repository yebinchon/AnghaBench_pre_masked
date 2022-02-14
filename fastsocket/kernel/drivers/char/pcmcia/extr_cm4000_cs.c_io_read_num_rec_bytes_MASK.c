
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned short FUNC_3(unsigned int VAR_0,
         unsigned short *VAR_1)
{
 unsigned short VAR_2;

 VAR_2 = *VAR_1 = 0;
 do {
  *VAR_1 = VAR_2;
  VAR_2 = FUNC_2(FUNC_1(VAR_0)) |
    (FUNC_2(FUNC_0(VAR_0)) & 4 ? 0x100 : 0);
 } while (VAR_2 != *VAR_1);

 return *VAR_1;
}
