
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_URL {int dummy; } ;
typedef scalar_t__ CURLUcode ;
typedef int CURLU ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (char const*,int *,unsigned int) ;

__attribute__((used)) static CURLUcode FUNC_3(const char *VAR_0, CURLU *VAR_1, unsigned int VAR_2)
{
  CURLUcode VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if(VAR_3) {
    FUNC_0(VAR_1);
    FUNC_1(VAR_1, 0, sizeof(struct Curl_URL));
  }
  return VAR_3;
}
