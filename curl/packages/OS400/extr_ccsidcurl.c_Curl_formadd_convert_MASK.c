
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_forms {char* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,char*,int,unsigned int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct curl_forms * VAR_2,
                     int VAR_3, int VAR_4, unsigned int VAR_5)

{
  int VAR_6;
  char *VAR_7;
  char *VAR_8;

  if(VAR_3 < 0 || !VAR_2[VAR_3].value)
    return 0;

  if(VAR_4 >= 0)
    VAR_6 = (int) VAR_2[VAR_4].value;
  else
    VAR_6 = FUNC_4(VAR_2[VAR_3].value) + 1;

  VAR_7 = FUNC_2(VAR_1 * VAR_6);

  if(!VAR_7)
    return -1;

  VAR_6 = FUNC_0(VAR_7, VAR_1 * VAR_6, VAR_0,
              VAR_2[VAR_3].value, VAR_6, VAR_5);

  if(VAR_6 < 0) {
    FUNC_1(VAR_7);
    return -1;
    }

  VAR_8 = FUNC_3(VAR_7, VAR_6);

  if(VAR_8)
    VAR_7 = VAR_8;

  VAR_2[VAR_3].value = VAR_7;

  if(VAR_4 >= 0)
    VAR_2[VAR_4].value = (char *) VAR_6;

  return VAR_6;
}
