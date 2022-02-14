
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SLMP_INFO ;


 int FUNC_0 (char*,char const*,unsigned short) ;
 int FUNC_1 (int *) ;
 unsigned short VAR_0 ;

__attribute__((used)) static void FUNC_2(SLMP_INFO *VAR_1, char* VAR_2, const char* VAR_3, unsigned short VAR_4)
{



 unsigned short VAR_5 = VAR_4 / VAR_0;
 unsigned short VAR_6;

 for ( VAR_6 = 0 ; VAR_6 < VAR_5 ; VAR_6++ )
 {
  FUNC_0(VAR_2, VAR_3, VAR_0);
  FUNC_1(VAR_1);
  VAR_2 += VAR_0;
  VAR_3 += VAR_0;
 }

 FUNC_0(VAR_2, VAR_3, VAR_4 % VAR_0);
}
