
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int * digest; } ;
typedef TYPE_1__ MD5_CTX ;
typedef int HttpContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 char* FUNC_4 (int *,int) ;

int FUNC_5(HttpContext *VAR_1, int VAR_2, char *VAR_3) {
  int VAR_4 = 0;
  for (int VAR_5 = 0; VAR_3[VAR_5] != 0; VAR_5++) {
    if (VAR_3[VAR_5] == ' ' || VAR_3[VAR_5] == ':' || VAR_3[VAR_5] == '.' || VAR_3[VAR_5] == '-' || VAR_3[VAR_5] == '/' || VAR_3[VAR_5] == '\'' ||
        VAR_3[VAR_5] == '\"')
      VAR_3[VAR_5] = '_';
    VAR_4++;
  }

  if (VAR_4 < VAR_0) {
    return VAR_2;
  }

  MD5_CTX VAR_6;
  FUNC_1(&VAR_6);
  FUNC_2(&VAR_6, (uint8_t *)VAR_3, (uint32_t)VAR_4);
  FUNC_0(&VAR_6);

  int VAR_7 = FUNC_3(
      VAR_1, "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", VAR_6.digest[0],
      VAR_6.digest[1], VAR_6.digest[2], VAR_6.digest[3], VAR_6.digest[4], VAR_6.digest[5], VAR_6.digest[6],
      VAR_6.digest[7], VAR_6.digest[8], VAR_6.digest[9], VAR_6.digest[10], VAR_6.digest[11],
      VAR_6.digest[12], VAR_6.digest[13], VAR_6.digest[14], VAR_6.digest[15]);

  if (VAR_7 != -1) {
    FUNC_4(VAR_1, VAR_7)[0] = 't';
  }

  return VAR_7;
}
