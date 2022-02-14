
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,unsigned char**,size_t*) ;
 int FUNC_1 (char*,char*,char*,size_t,char) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static CURLcode FUNC_5(const char *VAR_2,
                                               char *VAR_3, size_t VAR_4,
                                               char *VAR_5, size_t VAR_6,
                                               char *VAR_7, size_t VAR_8,
                                               char *VAR_9, size_t VAR_10)
{
  CURLcode VAR_11 = VAR_1;
  unsigned char *VAR_12 = ((void*)0);
  size_t VAR_13 = 0;
  size_t VAR_14 = FUNC_4(VAR_2);


  if(VAR_14 && *VAR_2 != '=') {
    VAR_11 = FUNC_0(VAR_2, &VAR_12, &VAR_13);
    if(VAR_11)
      return VAR_11;
  }


  if(!VAR_12)
    return VAR_0;


  if(!FUNC_1((char *) VAR_12, "nonce=\"", VAR_3, VAR_4,
                                '\"')) {
    FUNC_2(VAR_12);
    return VAR_0;
  }


  if(!FUNC_1((char *) VAR_12, "realm=\"", VAR_5, VAR_6,
                                '\"')) {

    FUNC_3(VAR_5, "");
  }


  if(!FUNC_1((char *) VAR_12, "algorithm=", VAR_7, VAR_8, ',')) {
    FUNC_2(VAR_12);
    return VAR_0;
  }


  if(!FUNC_1((char *) VAR_12, "qop=\"", VAR_9, VAR_10, '\"')) {
    FUNC_2(VAR_12);
    return VAR_0;
  }

  FUNC_2(VAR_12);

  return VAR_1;
}
