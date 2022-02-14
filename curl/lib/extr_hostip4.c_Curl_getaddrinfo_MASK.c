
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
typedef int Curl_addrinfo ;


 int * FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char*,char const*) ;

Curl_addrinfo *FUNC_2(struct connectdata *VAR_0,
                                const char *VAR_1,
                                int VAR_2,
                                int *VAR_3)
{
  Curl_addrinfo *VAR_4 = ((void*)0);





  *VAR_3 = 0;

  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if(!VAR_4)
    FUNC_1(VAR_0->data, "Curl_ipv4_resolve_r failed for %s\n", VAR_1);

  return VAR_4;
}
