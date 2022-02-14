
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*,unsigned int) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (char*,char**,int ) ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,unsigned int VAR_2,
   int *VAR_3,
   const char **VAR_4,int VAR_5)
{
 char VAR_6[33];
 unsigned int VAR_7;
 unsigned int VAR_8;
 char *VAR_9;
 int VAR_10;
 *VAR_3 = 0;
 for (VAR_8 = 0, VAR_10 = 1; VAR_5; VAR_8++, VAR_10 <<= 1) {
  if (!(VAR_10 & VAR_5)) continue;
  VAR_5 &= ~VAR_10;
  if (!VAR_4[VAR_8]) continue;
  VAR_7 = FUNC_3(VAR_4[VAR_8]);
  if (VAR_7 != VAR_2) continue;
  if (FUNC_0(VAR_4[VAR_8],VAR_1,VAR_7)) continue;
  *VAR_3 = VAR_10;
  return 0;
 }
 if (VAR_2 >= sizeof(VAR_6)) return -VAR_0;
 FUNC_1(VAR_6,VAR_1,VAR_2);
 VAR_6[VAR_2] = 0;
 *VAR_3 = FUNC_2(VAR_6,&VAR_9,0);
 if (*VAR_9) return -VAR_0;
 return 0;
}
