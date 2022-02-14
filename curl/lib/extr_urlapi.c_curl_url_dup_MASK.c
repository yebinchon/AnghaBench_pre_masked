
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_URL {int portnum; } ;
typedef struct Curl_URL CURLU ;


 int FUNC_0 (struct Curl_URL*,struct Curl_URL*,int ) ;
 struct Curl_URL* FUNC_1 (int,int) ;
 int FUNC_2 (struct Curl_URL*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

CURLU *FUNC_3(CURLU *VAR_9)
{
  struct Curl_URL *VAR_10 = FUNC_1(sizeof(struct Curl_URL), 1);
  if(VAR_10) {
    FUNC_0(VAR_10, VAR_9, VAR_7);
    FUNC_0(VAR_10, VAR_9, VAR_8);
    FUNC_0(VAR_10, VAR_9, VAR_3);
    FUNC_0(VAR_10, VAR_9, VAR_2);
    FUNC_0(VAR_10, VAR_9, VAR_1);
    FUNC_0(VAR_10, VAR_9, VAR_5);
    FUNC_0(VAR_10, VAR_9, VAR_4);
    FUNC_0(VAR_10, VAR_9, VAR_6);
    FUNC_0(VAR_10, VAR_9, VAR_0);
    VAR_10->portnum = VAR_9->portnum;
  }
  return VAR_10;
  fail:
  FUNC_2(VAR_10);
  return ((void*)0);
}
