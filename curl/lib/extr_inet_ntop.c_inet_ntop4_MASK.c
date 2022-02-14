
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4 (const unsigned char *VAR_2, char *VAR_3, size_t VAR_4)
{
  char VAR_5[sizeof("255.255.255.255")];
  size_t VAR_6;

  FUNC_0(VAR_4 >= 16);

  VAR_5[0] = '\0';
  (void)FUNC_1(VAR_5, sizeof(VAR_5), "%d.%d.%d.%d",
                  ((int)((unsigned char)VAR_2[0])) & 0xff,
                  ((int)((unsigned char)VAR_2[1])) & 0xff,
                  ((int)((unsigned char)VAR_2[2])) & 0xff,
                  ((int)((unsigned char)VAR_2[3])) & 0xff);

  VAR_6 = FUNC_3(VAR_5);
  if(VAR_6 == 0 || VAR_6 >= VAR_4) {
    VAR_1 = VAR_0;
    return (((void*)0));
  }
  FUNC_2(VAR_3, VAR_5);
  return VAR_3;
}
