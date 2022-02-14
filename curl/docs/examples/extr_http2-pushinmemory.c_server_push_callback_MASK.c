
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_pushheaders {int dummy; } ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 char* FUNC_1 (struct curl_pushheaders*,char*) ;
 int * VAR_4 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *) ;
 size_t VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(CURL *VAR_7,
                                CURL *VAR_8,
                                size_t VAR_9,
                                struct curl_pushheaders *VAR_10,
                                void *VAR_11)
{
  char *VAR_12;
  int *VAR_13 = (int *)VAR_11;
  (void)VAR_7;
  (void)VAR_9;

  if(VAR_5 == VAR_3)

    return VAR_1;


  FUNC_3(&VAR_4[VAR_5]);
  FUNC_0(VAR_8, VAR_0, &VAR_4[VAR_5]);
  VAR_5++;

  VAR_12 = FUNC_1(VAR_10, ":path");
  if(VAR_12)
    FUNC_2(VAR_6, "* Pushed :path '%s'\n", VAR_12 );

  (*VAR_13)++;
  return VAR_2;
}
