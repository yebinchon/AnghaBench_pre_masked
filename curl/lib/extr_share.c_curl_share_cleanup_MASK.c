
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_share {size_t max_ssl_sessions; int clientdata; int (* unlockfunc ) (int *,int ,int ) ;int psl; struct Curl_share* sslsession; int cookies; int hostcache; int conn_cache; scalar_t__ dirty; int (* lockfunc ) (int *,int ,int ,int ) ;} ;
typedef int CURLSHcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct Curl_share*) ;
 int FUNC_6 (struct Curl_share*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;

CURLSHcode
FUNC_10(struct Curl_share *VAR_5)
{
  if(VAR_5 == ((void*)0))
    return VAR_0;

  if(VAR_5->lockfunc)
    VAR_5->lockfunc(((void*)0), VAR_4, VAR_3,
                    VAR_5->clientdata);

  if(VAR_5->dirty) {
    if(VAR_5->unlockfunc)
      VAR_5->unlockfunc(((void*)0), VAR_4, VAR_5->clientdata);
    return VAR_1;
  }

  FUNC_0(&VAR_5->conn_cache);
  FUNC_1(&VAR_5->conn_cache);
  FUNC_3(&VAR_5->hostcache);


  FUNC_2(VAR_5->cookies);
  FUNC_4(&VAR_5->psl);

  if(VAR_5->unlockfunc)
    VAR_5->unlockfunc(((void*)0), VAR_4, VAR_5->clientdata);
  FUNC_6(VAR_5);

  return VAR_2;
}
