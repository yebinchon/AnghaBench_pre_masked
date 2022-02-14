
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_share {int specifier; int hostcache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct Curl_share* FUNC_1 (int,int) ;
 int FUNC_2 (struct Curl_share*) ;

struct Curl_share *
FUNC_3(void)
{
  struct Curl_share *VAR_1 = FUNC_1(1, sizeof(struct Curl_share));
  if(VAR_1) {
    VAR_1->specifier |= (1<<VAR_0);

    if(FUNC_0(&VAR_1->hostcache)) {
      FUNC_2(VAR_1);
      return ((void*)0);
    }
  }

  return VAR_1;
}
