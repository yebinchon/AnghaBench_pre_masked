
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(int VAR_2, int VAR_3, const char *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4)*8;
 int *VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = (VAR_5+3) >> 2;
 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  VAR_9 = (VAR_2 + VAR_1 * (VAR_3+VAR_8)) & ~3;
  VAR_6 = (int *) ((char *)VAR_0 + VAR_9);
  for (VAR_7 = VAR_5; VAR_7; VAR_7--, VAR_6++)
   *VAR_6 = 0xe0e0e0e0;
 }
 FUNC_0(VAR_2, VAR_3, VAR_4);
}
