
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct SingleRequest {scalar_t__ ignorebody; } ;
struct Curl_easy {struct SingleRequest req; } ;
typedef int contenc_writer ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connectdata*,int ,char*,size_t) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_2,
                                      contenc_writer *VAR_3,
                                      const char *VAR_4, size_t VAR_5)
{
  struct Curl_easy *VAR_6 = VAR_2->data;
  struct SingleRequest *VAR_7 = &VAR_6->req;

  (void) VAR_3;

  if(!VAR_5 || VAR_7->ignorebody)
    return VAR_1;

  return FUNC_0(VAR_2, VAR_0, (char *) VAR_4, VAR_5);
}
