
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_share {int specifier; int clientdata; int (* unlockfunc ) (struct Curl_easy*,int,int ) ;} ;
struct Curl_easy {struct Curl_share* share; } ;
typedef int curl_lock_data ;
typedef int CURLSHcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int,int ) ;

CURLSHcode
FUNC_1(struct Curl_easy *VAR_2, curl_lock_data VAR_3)
{
  struct Curl_share *VAR_4 = VAR_2->share;

  if(VAR_4 == ((void*)0))
    return VAR_0;

  if(VAR_4->specifier & (1<<VAR_3)) {
    if(VAR_4->unlockfunc)
      VAR_4->unlockfunc (VAR_2, VAR_3, VAR_4->clientdata);
  }

  return VAR_1;
}
