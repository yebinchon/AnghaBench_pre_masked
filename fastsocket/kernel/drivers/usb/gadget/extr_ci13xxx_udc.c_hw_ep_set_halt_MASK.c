
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_8 != 0 && VAR_8 != 1)
  return -VAR_1;

 do {
  u32 VAR_9 = VAR_0 + VAR_6 * sizeof(u32);
  u32 VAR_10 = VAR_7 ? VAR_5 : VAR_3;
  u32 VAR_11 = VAR_7 ? VAR_4 : VAR_2;


  FUNC_0(VAR_9, VAR_10|VAR_11, VAR_8 ? VAR_10 : VAR_11);

 } while (VAR_8 != FUNC_1(VAR_6, VAR_7));

 return 0;
}
