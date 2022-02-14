
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {int maxconnects; int pending; int msglist; int conn_cache; int hostcache; int sockhash; int multiplexing; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 struct Curl_multi* FUNC_6 (int,int) ;
 int FUNC_7 (struct Curl_multi*) ;
 scalar_t__ FUNC_8 (int *,int) ;

struct Curl_multi *FUNC_9(int VAR_2,
                                     int VAR_3)
{
  struct Curl_multi *VAR_4 = FUNC_6(1, sizeof(struct Curl_multi));

  if(!VAR_4)
    return ((void*)0);

  VAR_4->type = VAR_0;

  if(FUNC_5(&VAR_4->hostcache))
    goto error;

  if(FUNC_8(&VAR_4->sockhash, VAR_2))
    goto error;

  if(FUNC_1(&VAR_4->conn_cache, VAR_3))
    goto error;

  FUNC_4(&VAR_4->msglist, ((void*)0));
  FUNC_4(&VAR_4->pending, ((void*)0));

  VAR_4->multiplexing = VAR_1;


  VAR_4->maxconnects = -1;
  return VAR_4;

  error:

  FUNC_2(&VAR_4->sockhash);
  FUNC_2(&VAR_4->hostcache);
  FUNC_0(&VAR_4->conn_cache);
  FUNC_3(&VAR_4->msglist, ((void*)0));
  FUNC_3(&VAR_4->pending, ((void*)0));

  FUNC_7(VAR_4);
  return ((void*)0);
}
