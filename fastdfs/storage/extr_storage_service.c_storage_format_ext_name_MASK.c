
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2,
  char *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 char *VAR_7;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == 0)
 {
  VAR_6 = VAR_0 + 1;
 }
 else
 {
  VAR_6 = VAR_0 - VAR_5;
 }

 VAR_7 = VAR_3;
 for (VAR_4=0; VAR_4<VAR_6; VAR_4++)
 {
  *VAR_7++ = '0' + (int)(10.0 * (double)FUNC_1() / VAR_1);
 }

 if (VAR_5 > 0)
 {
  *VAR_7++ = '.';
  FUNC_0(VAR_7, VAR_2, VAR_5);
  VAR_7 += VAR_5;
 }
 *VAR_7 = '\0';
}
