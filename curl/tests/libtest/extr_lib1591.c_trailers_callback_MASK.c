
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;


 int VAR_0 ;
 struct curl_slist* FUNC_0 (struct curl_slist*,char*) ;

__attribute__((used)) static int FUNC_1(struct curl_slist **VAR_1, void *VAR_2)
{
  (void)VAR_2;
  *VAR_1 = FUNC_0(*VAR_1, "my-super-awesome-trailer: trail1");
  *VAR_1 = FUNC_0(*VAR_1, "my-other-awesome-trailer: trail2");
  return VAR_0;
}
