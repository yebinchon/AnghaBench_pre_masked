
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ resolve; int mimepost; scalar_t__* str; scalar_t__ postfields; scalar_t__ postfieldsize; } ;
struct TYPE_3__ {scalar_t__ resolve; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ change; } ;
typedef enum dupstring { ____Placeholder_dupstring } dupstring ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct Curl_easy*) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ,int) ;

__attribute__((used)) static CURLcode FUNC_6(struct Curl_easy *VAR_5, struct Curl_easy *VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  enum dupstring VAR_8;



  VAR_5->set = VAR_6->set;
  FUNC_2(&VAR_5->set.mimepost, VAR_5);


  FUNC_5(VAR_5->set.str, 0, VAR_3 * sizeof(char *));


  for(VAR_8 = (enum dupstring)0; VAR_8< VAR_4; VAR_8++) {
    VAR_7 = FUNC_3(&VAR_5->set.str[VAR_8], VAR_6->set.str[VAR_8]);
    if(VAR_7)
      return VAR_7;
  }


  VAR_8 = VAR_2;
  if(VAR_6->set.postfieldsize && VAR_6->set.str[VAR_8]) {

    VAR_5->set.str[VAR_8] = FUNC_0(VAR_6->set.str[VAR_8],
                                  FUNC_4(VAR_6->set.postfieldsize));
    if(!VAR_5->set.str[VAR_8])
      return VAR_1;

    VAR_5->set.postfields = VAR_5->set.str[VAR_8];
  }


  VAR_7 = FUNC_1(&VAR_5->set.mimepost, &VAR_6->set.mimepost);

  if(VAR_6->set.resolve)
    VAR_5->change.resolve = VAR_5->set.resolve;

  return VAR_7;
}
