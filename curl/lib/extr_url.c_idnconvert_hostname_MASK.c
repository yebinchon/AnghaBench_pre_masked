
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostname {char* dispname; char* name; char* encalloc; } ;
struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,char**) ;
 int FUNC_1 (struct Curl_easy*,char*,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*,char**,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct Curl_easy*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static CURLcode FUNC_7(struct connectdata *VAR_6,
                                    struct hostname *VAR_7)
{
  struct Curl_easy *VAR_8 = VAR_6->data;


  (void)VAR_8;
  (void)VAR_6;





  VAR_7->dispname = VAR_7->name;


  if(!FUNC_6(VAR_7->name)) {
    FUNC_5(VAR_8, "IDN support not present, can't parse Unicode domains\n");

  }
  return VAR_0;
}
