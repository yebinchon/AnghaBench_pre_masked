
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const** protocols; char const* version; char const* host; char const* ssl_version; char const* libz_version; char const* ares; char const* libidn; char const* libssh_version; } ;
typedef TYPE_1__ curl_version_info_data ;
typedef scalar_t__ CURLversion ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const**,char**,int*,unsigned int) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

curl_version_info_data *
FUNC_5(CURLversion VAR_4, unsigned int VAR_5)

{
  curl_version_info_data * VAR_6;
  char *VAR_7;
  int VAR_8;
  int VAR_9;
  curl_version_info_data * VAR_10;
  if(VAR_4 > VAR_0)
    return (curl_version_info_data *) ((void*)0);

  VAR_6 = FUNC_2(VAR_4);

  if(!VAR_6)
    return VAR_6;



  VAR_8 = 0;
  VAR_9 = 0;

  if(VAR_6->protocols) {
    while(VAR_6->protocols[VAR_9])
      VAR_8 += FUNC_4(VAR_6->protocols[VAR_9++]);

    VAR_8 += VAR_9++;
    }

  if(VAR_6->version)
    VAR_8 += FUNC_4(VAR_6->version) + 1;

  if(VAR_6->host)
    VAR_8 += FUNC_4(VAR_6->host) + 1;

  if(VAR_6->ssl_version)
    VAR_8 += FUNC_4(VAR_6->ssl_version) + 1;

  if(VAR_6->libz_version)
    VAR_8 += FUNC_4(VAR_6->libz_version) + 1;

  if(VAR_6->ares)
    VAR_8 += FUNC_4(VAR_6->ares) + 1;

  if(VAR_6->libidn)
    VAR_8 += FUNC_4(VAR_6->libidn) + 1;

  if(VAR_6->libssh_version)
    VAR_8 += FUNC_4(VAR_6->libssh_version) + 1;



  VAR_8 *= VAR_3;

  if(VAR_9)
    VAR_8 += VAR_9 * sizeof(const char *);

  VAR_7 = FUNC_0(VAR_2, VAR_8);
  VAR_10 = (curl_version_info_data *) FUNC_0(VAR_1,
                                                     sizeof(*VAR_10));

  if(!VAR_10 || !VAR_7)
    return (curl_version_info_data *) ((void*)0);



  FUNC_3((char *) VAR_10, (char *) VAR_6, sizeof(*VAR_6));

  if(VAR_10->protocols) {
    int VAR_11 = VAR_9 * sizeof(VAR_10->protocols[0]);

    VAR_10->protocols = (const char * const *) VAR_7;
    FUNC_3(VAR_7, (char *) VAR_6->protocols, VAR_11);
    VAR_7 += VAR_11;
    VAR_8 -= VAR_11;

    for(VAR_11 = 0; VAR_10->protocols[VAR_11]; VAR_11++)
      if(FUNC_1(((const char * *) VAR_10->protocols) + VAR_11,
                                      &VAR_7, &VAR_8, VAR_5))
        return (curl_version_info_data *) ((void*)0);
    }

  if(FUNC_1(&VAR_10->version, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  if(FUNC_1(&VAR_10->host, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  if(FUNC_1(&VAR_10->ssl_version, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  if(FUNC_1(&VAR_10->libz_version, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  if(FUNC_1(&VAR_10->ares, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  if(FUNC_1(&VAR_10->libidn, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  if(FUNC_1(&VAR_10->libssh_version, &VAR_7, &VAR_8, VAR_5))
    return (curl_version_info_data *) ((void*)0);

  return VAR_10;
}
