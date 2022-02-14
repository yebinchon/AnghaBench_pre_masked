
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tmp ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char const*,char*,int ) ;
 int FUNC_1 (char*,int,char*,int,int,int,char,int) ;

__attribute__((used)) static int FUNC_2(AVDictionary **VAR_0, const char *VAR_1, uint32_t VAR_2, int VAR_3)
{
   char VAR_4[128];
   int VAR_5 = VAR_2 & 0xff;
   int VAR_6 = VAR_3 ? VAR_5 / VAR_3 : VAR_5;
   int VAR_7 = (VAR_2 >> 8) & 0xff;
   int VAR_8 = (VAR_2 >> 16) & 0xff;
   int VAR_9 = (VAR_2 >> 24) & 0x1f;
   int VAR_10 = (VAR_2 >> 29) & 1;


   if (VAR_2 >> 31)
       return 0;
   FUNC_1(VAR_4, sizeof(VAR_4), "%02d:%02d:%02d%c%02d",
       VAR_9, VAR_8, VAR_7, VAR_10 ? ';' : ':', VAR_6);
   return FUNC_0(VAR_0, VAR_1, VAR_4, 0);
}
