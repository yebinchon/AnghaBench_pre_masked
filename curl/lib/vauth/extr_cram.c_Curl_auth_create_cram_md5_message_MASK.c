
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int HMAC_context ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned char*) ;
 int * FUNC_1 (int ,unsigned char const*,int ) ;
 int FUNC_2 (int *,unsigned char const*,int ) ;
 int FUNC_3 (struct Curl_easy*,char*,int ,char**,size_t*) ;
 int VAR_3 ;
 char* FUNC_4 (char*,char const*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char const*) ;

CURLcode FUNC_8(struct Curl_easy *VAR_4,
                                           const char *VAR_5,
                                           const char *VAR_6,
                                           const char *VAR_7,
                                           char **VAR_8, size_t *VAR_9)
{
  CURLcode VAR_10 = VAR_0;
  size_t VAR_11 = 0;
  HMAC_context *VAR_12;
  unsigned char VAR_13[VAR_3];
  char *VAR_14;

  if(VAR_5)
    VAR_11 = FUNC_7(VAR_5);


  VAR_12 = FUNC_1(VAR_2,
                        (const unsigned char *) VAR_7,
                        FUNC_5(FUNC_7(VAR_7)));
  if(!VAR_12)
    return VAR_1;


  if(VAR_11 > 0)
    FUNC_2(VAR_12, (const unsigned char *) VAR_5,
                     FUNC_5(VAR_11));


  FUNC_0(VAR_12, VAR_13);


  VAR_14 = FUNC_4(
    "%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
    VAR_6, VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3], VAR_13[4],
    VAR_13[5], VAR_13[6], VAR_13[7], VAR_13[8], VAR_13[9], VAR_13[10],
    VAR_13[11], VAR_13[12], VAR_13[13], VAR_13[14], VAR_13[15]);
  if(!VAR_14)
    return VAR_1;


  VAR_10 = FUNC_3(VAR_4, VAR_14, 0, VAR_8, VAR_9);

  FUNC_6(VAR_14);

  return VAR_10;
}
