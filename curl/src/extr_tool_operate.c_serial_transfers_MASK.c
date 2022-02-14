
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_transfer {int mlfile; int curl; } ;
struct GlobalConfig {int current; scalar_t__ fail_early; scalar_t__ test_event_based; scalar_t__ libcurl; } ;
typedef scalar_t__ CURLcode ;
typedef int CURLSH ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct GlobalConfig*,int *,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct per_transfer* FUNC_3 (struct per_transfer*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct GlobalConfig*,struct per_transfer*,scalar_t__,int*) ;
 scalar_t__ FUNC_8 (struct GlobalConfig*,struct per_transfer*) ;
 int FUNC_9 (int ) ;
 struct per_transfer* VAR_3 ;

__attribute__((used)) static CURLcode FUNC_10(struct GlobalConfig *VAR_4,
                                 CURLSH *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  CURLcode VAR_7 = VAR_0;
  struct per_transfer *VAR_8;
  bool VAR_9 = VAR_1;

  VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_9);
  if(VAR_7 || !VAR_9)
    return VAR_7;
  for(VAR_8 = VAR_3; VAR_8;) {
    bool VAR_10;
    bool VAR_11 = VAR_1;
    VAR_7 = FUNC_8(VAR_4, VAR_8);
    if(VAR_7)
      break;


    if(VAR_4->libcurl) {
      VAR_7 = FUNC_5();
      if(VAR_7)
        break;
    }






      VAR_7 = FUNC_1(VAR_8->curl);


    VAR_6 = VAR_7;

    VAR_7 = FUNC_7(VAR_4, VAR_8, VAR_7, &VAR_10);
    if(VAR_10)
      continue;


    if(VAR_7 || FUNC_6(VAR_6) ||
       (VAR_6 && VAR_4->fail_early))
      VAR_11 = VAR_2;
    else {

      VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_9);
      if(VAR_7)
        VAR_11 = VAR_2;
    }


    FUNC_4(VAR_8->mlfile);

    VAR_8 = FUNC_3(VAR_8);

    if(VAR_11)
      break;
  }
  if(VAR_6)

    VAR_7 = VAR_6;

  if(VAR_7)
    FUNC_9(VAR_4->current);

  return VAR_7;
}
