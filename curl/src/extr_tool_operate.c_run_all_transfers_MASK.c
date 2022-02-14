
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_transfer {int config; } ;
struct GlobalConfig {int noprogress; int isatty; scalar_t__ parallel; } ;
typedef int CURLcode ;
typedef int CURLSH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct per_transfer* FUNC_2 (struct per_transfer*) ;
 int FUNC_3 (struct GlobalConfig*,int *) ;
 int FUNC_4 (struct GlobalConfig*,struct per_transfer*,int ,int*) ;
 int FUNC_5 (struct GlobalConfig*,int *) ;
 struct per_transfer* VAR_0 ;

__attribute__((used)) static CURLcode FUNC_6(struct GlobalConfig *VAR_1,
                                  CURLSH *VAR_2,
                                  CURLcode VAR_3)
{

  bool VAR_4 = VAR_1->noprogress;
  bool VAR_5 = VAR_1->isatty;
  struct per_transfer *VAR_6;


  if(!VAR_3) {
    if(VAR_1->parallel)
      VAR_3 = FUNC_3(VAR_1, VAR_2);
    else
      VAR_3 = FUNC_5(VAR_1, VAR_2);
  }


  for(VAR_6 = VAR_0; VAR_6;) {
    bool VAR_7;
    CURLcode VAR_8 = FUNC_4(VAR_1, VAR_6, VAR_3, &VAR_7);
    if(!VAR_3)

      VAR_3 = VAR_8;


    FUNC_0(VAR_6->config);


    FUNC_1(VAR_6->config);
    VAR_6 = FUNC_2(VAR_6);
  }


  VAR_1->noprogress = VAR_4;
  VAR_1->isatty = VAR_5;


  return VAR_3;
}
