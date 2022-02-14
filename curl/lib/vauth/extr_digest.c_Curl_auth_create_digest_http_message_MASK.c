
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digestdata {int algo; } ;
struct Curl_easy {int dummy; } ;
typedef int CURLcode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Curl_easy*,char const*,char const*,unsigned char const*,unsigned char const*,struct digestdata*,char**,size_t*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

CURLcode FUNC_1(struct Curl_easy *VAR_5,
                                              const char *VAR_6,
                                              const char *VAR_7,
                                              const unsigned char *VAR_8,
                                              const unsigned char *VAR_9,
                                              struct digestdata *VAR_10,
                                              char **VAR_11, size_t *VAR_12)
{
  switch(VAR_10->algo) {
  case 133:
  case 132:
    return FUNC_0(VAR_5, VAR_6, VAR_7,
                                                 VAR_8, VAR_9, VAR_10,
                                                 VAR_11, VAR_12,
                                                 VAR_3,
                                                 VAR_1);

  case 131:
  case 130:
  case 129:
  case 128:
    return FUNC_0(VAR_5, VAR_6, VAR_7,
                                                 VAR_8, VAR_9, VAR_10,
                                                 VAR_11, VAR_12,
                                                 VAR_4,
                                                 VAR_2);

  default:
    return VAR_0;
  }
}
