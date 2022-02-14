
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Curl_multi {scalar_t__ in_callback; } ;
struct TYPE_2__ {int maxconnects; scalar_t__* errorbuffer; } ;
struct Curl_easy {struct Curl_multi* multi; TYPE_1__ set; struct Curl_multi* multi_easy; } ;
typedef int CURLcode ;
typedef scalar_t__ CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct Curl_multi* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct Curl_multi*,struct Curl_easy*) ;
 int FUNC_3 (struct Curl_multi*) ;
 int FUNC_4 (struct Curl_multi*,struct Curl_easy*) ;
 int FUNC_5 (struct Curl_multi*,int ,int ) ;
 int FUNC_6 (struct Curl_multi*) ;
 int FUNC_7 (struct Curl_multi*) ;
 int FUNC_8 (struct Curl_easy*,char*) ;
 int VAR_7 ;
 int FUNC_9 (struct Curl_easy*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static CURLcode FUNC_11(struct Curl_easy *VAR_8, bool VAR_9)
{
  struct Curl_multi *VAR_10;
  CURLMcode VAR_11;
  CURLcode VAR_12 = VAR_2;
  FUNC_1(VAR_7);

  if(!VAR_8)
    return VAR_0;

  if(VAR_8->set.errorbuffer)

    VAR_8->set.errorbuffer[0] = 0;

  if(VAR_8->multi) {
    FUNC_8(VAR_8, "easy handle already used in multi handle");
    return VAR_1;
  }

  if(VAR_8->multi_easy)
    VAR_10 = VAR_8->multi_easy;
  else {


    VAR_10 = FUNC_0(1, 3);
    if(!VAR_10)
      return VAR_3;
    VAR_8->multi_easy = VAR_10;
  }

  if(VAR_10->in_callback)
    return VAR_4;


  FUNC_5(VAR_10, VAR_5, VAR_8->set.maxconnects);

  VAR_11 = FUNC_2(VAR_10, VAR_8);
  if(VAR_11) {
    FUNC_3(VAR_10);
    if(VAR_11 == VAR_6)
      return VAR_3;
    return VAR_1;
  }

  FUNC_9(VAR_8, &VAR_7);



  VAR_8->multi = VAR_10;


  VAR_12 = VAR_9 ? FUNC_6(VAR_10) : FUNC_7(VAR_10);



  (void)FUNC_4(VAR_10, VAR_8);

  FUNC_10(&VAR_7);


  return VAR_12;
}
