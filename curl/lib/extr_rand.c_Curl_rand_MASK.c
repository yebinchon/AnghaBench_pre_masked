
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct Curl_easy*,unsigned int*) ;

CURLcode FUNC_2(struct Curl_easy *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
  CURLcode VAR_4 = VAR_0;

  FUNC_0(VAR_3 > 0);

  while(VAR_3) {
    unsigned int VAR_5;
    size_t VAR_6 = VAR_3 < sizeof(unsigned int) ? VAR_3 : sizeof(unsigned int);

    VAR_4 = FUNC_1(VAR_1, &VAR_5);
    if(VAR_4)
      return VAR_4;

    while(VAR_6) {
      *VAR_2++ = (unsigned char)(VAR_5 & 0xFF);
      VAR_5 >>= 8;
      --VAR_3;
      --VAR_6;
    }
  }

  return VAR_4;
}
