
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scope_str ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,int,char*,unsigned int) ;
 char* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static char *
FUNC_9(const char * VAR_1, const char * VAR_2,
                   const char * VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6;
 char * VAR_7;
 const char * VAR_8;
 char * VAR_9;



 char VAR_10[8];


 if( (VAR_3[0] == 'h')
    &&(VAR_3[1] == 't')
    &&(VAR_3[2] == 't')
    &&(VAR_3[3] == 'p')
    &&(VAR_3[4] == ':')
    &&(VAR_3[5] == '/')
    &&(VAR_3[6] == '/'))
  return FUNC_7(VAR_3);
 VAR_8 = (VAR_1[0] == '\0') ? VAR_2 : VAR_1;
 VAR_6 = (int)FUNC_8(VAR_8);
 if(VAR_6 > 7) {
  VAR_9 = (char*)FUNC_6(VAR_8 + 7, '/');
  if(VAR_9)
   VAR_6 = (int)(VAR_9 - VAR_8);
 }
 VAR_5 = (int)(VAR_6 + FUNC_8(VAR_3) + 1);
 if(VAR_3[0] != '/')
  VAR_5++;
 if(VAR_4 != 0) {






  VAR_5 += 3 + FUNC_5(VAR_10, sizeof(VAR_10), "%u", VAR_4);

 }
 VAR_7 = (char*)FUNC_1(VAR_5);
 if(VAR_7 == ((void*)0)) return ((void*)0);
 FUNC_3(VAR_7, VAR_8, VAR_6);
 if(VAR_4 != 0) {
  VAR_7[VAR_6] = '\0';
  if(0 == FUNC_2(VAR_7, "http://[fe80:", 13)) {

   VAR_9 = FUNC_6(VAR_7, ']');
   if(VAR_9) {







    FUNC_4(VAR_9 + 3 + FUNC_8(VAR_10), VAR_9, FUNC_8(VAR_9) + 1);
    FUNC_3(VAR_9, "%25", 3);
    FUNC_3(VAR_9 + 3, VAR_10, FUNC_8(VAR_10));
    VAR_6 += 3 + FUNC_8(VAR_10);

   }
  }
 }
 if(VAR_3[0] != '/')
  VAR_7[VAR_6++] = '/';
 FUNC_3(VAR_7 + VAR_6, VAR_3, VAR_5 - VAR_6);
 return VAR_7;
}
