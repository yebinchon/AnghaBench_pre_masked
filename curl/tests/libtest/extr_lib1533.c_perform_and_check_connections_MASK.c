
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,long*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(CURL *VAR_6, const char *VAR_7,
                                         long VAR_8)
{
  CURLcode VAR_9;
  long VAR_10 = 0;

  VAR_9 = FUNC_1(VAR_6);
  if(VAR_9 != VAR_0) {
    FUNC_2(VAR_5, "curl_easy_perform() failed\n");
    return VAR_3;
  }

  VAR_9 = FUNC_0(VAR_6, VAR_1, &VAR_10);
  if(VAR_9 != VAR_0) {
    FUNC_2(VAR_5, "curl_easy_getinfo() failed\n");
    return VAR_3;
  }

  FUNC_2(VAR_5, "%s: expected: %ld connections; actual: %ld connections\n",
          VAR_7, VAR_8, VAR_10);

  if(VAR_10 != VAR_8) {
    return VAR_2;
  }

  return VAR_4;
}
