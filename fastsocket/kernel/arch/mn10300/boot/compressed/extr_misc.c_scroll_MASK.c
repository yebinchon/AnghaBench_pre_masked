
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 char* VAR_2 ;

__attribute__((used)) static inline void FUNC_1(void)
{
 int VAR_3;

 FUNC_0(VAR_2, VAR_2 + VAR_0 * 2, (VAR_1 - 1) * VAR_0 * 2);
 for (VAR_3 = (VAR_1 - 1) * VAR_0 * 2; VAR_3 < VAR_1 * VAR_0 * 2; VAR_3 += 2)
  VAR_2[VAR_3] = ' ';
}
