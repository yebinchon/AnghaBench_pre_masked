
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char*,int *,int) ;

int
FUNC_8(const char * VAR_2,
         char * VAR_3, unsigned short * VAR_4,
         char * * VAR_5, unsigned int * VAR_6)
{
 char * VAR_7, *VAR_8, *VAR_9;
 if(!VAR_2)
  return 0;
 VAR_7 = (char*)FUNC_6(VAR_2, "://");
 if(!VAR_7)
  return 0;
 VAR_7 += 3;
 if( (VAR_2[0]!='h') || (VAR_2[1]!='t')
    ||(VAR_2[2]!='t') || (VAR_2[3]!='p'))
  return 0;
 FUNC_3(VAR_3, 0, VAR_1 + 1);
 if(*VAR_7 == '[')
 {

  char * VAR_10;
  VAR_10 = FUNC_4(VAR_7, '%');
  VAR_8 = FUNC_4(VAR_7, ']');
  if(VAR_8 && VAR_10 && VAR_10 < VAR_8 && VAR_6) {
   char VAR_11[8];
   int VAR_12;
   VAR_10++;

   if(VAR_10[0] == '2' && VAR_10[1] == '5')
    VAR_10 += 2;
   VAR_12 = VAR_8 - VAR_10;
   if(VAR_12 >= sizeof(VAR_11))
    VAR_12 = sizeof(VAR_11) - 1;
   FUNC_2(VAR_11, VAR_10, VAR_12);
   VAR_11[VAR_12] = '\0';
   *VAR_6 = (unsigned int)FUNC_7(VAR_11, ((void*)0), 10);

  }
  VAR_9 = FUNC_4(VAR_7, '/');
  if(VAR_8 && VAR_9)
  {
   VAR_8++;
   FUNC_5(VAR_3, VAR_7, FUNC_0(VAR_1, (int)(VAR_8-VAR_7)));
   if(*VAR_8 == ':')
   {
    *VAR_4 = 0;
    VAR_8++;
    while( (*VAR_8 >= '0') && (*VAR_8 <= '9'))
    {
     *VAR_4 *= 10;
     *VAR_4 += (unsigned short)(*VAR_8 - '0');
     VAR_8++;
    }
   }
   else
   {
    *VAR_4 = 80;
   }
   *VAR_5 = VAR_9;
   return 1;
  }
 }
 VAR_8 = FUNC_4(VAR_7, ':');
 VAR_9 = FUNC_4(VAR_7, '/');
 if(!VAR_9)
  return 0;
 if(!VAR_8 || (VAR_8>VAR_9))
 {
  FUNC_5(VAR_3, VAR_7, FUNC_0(VAR_1, (int)(VAR_9-VAR_7)));
  *VAR_4 = 80;
 }
 else
 {
  FUNC_5(VAR_3, VAR_7, FUNC_0(VAR_1, (int)(VAR_8-VAR_7)));
  *VAR_4 = 0;
  VAR_8++;
  while( (*VAR_8 >= '0') && (*VAR_8 <= '9'))
  {
   *VAR_4 *= 10;
   *VAR_4 += (unsigned short)(*VAR_8 - '0');
   VAR_8++;
  }
 }
 *VAR_5 = VAR_9;
 return 1;
}
