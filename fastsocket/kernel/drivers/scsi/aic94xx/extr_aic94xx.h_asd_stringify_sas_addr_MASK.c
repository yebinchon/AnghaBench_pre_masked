
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int const) ;

__attribute__((used)) static inline void FUNC_1(char *VAR_1, const u8 *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_1 += 2)
  FUNC_0(VAR_1, 3, "%02X", VAR_2[VAR_3]);
 *VAR_1 = '\0';
}
