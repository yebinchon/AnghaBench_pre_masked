
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,unsigned char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

CURLcode FUNC_3(struct Curl_easy *VAR_1, unsigned char *VAR_2,
                       size_t VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  const char *VAR_5 = "0123456789abcdef";
  unsigned char VAR_6[128];
  unsigned char *VAR_7 = VAR_6;
  FUNC_1(VAR_3 > 1);







  if((VAR_3/2 >= sizeof(VAR_6)) || !(VAR_3&1))

    return VAR_0;

  VAR_3--;

  VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_3/2);
  if(VAR_4)
    return VAR_4;

  while(VAR_3) {


    *VAR_2++ = VAR_5[(*VAR_7 & 0xF0)>>4];
    *VAR_2++ = VAR_5[*VAR_7 & 0x0F];
    VAR_7++;
    VAR_3 -= 2;
  }
  *VAR_2 = 0;

  return VAR_4;
}
