
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int statusline ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static statusline
FUNC_6(struct Curl_easy *VAR_5,
                const char *VAR_6, size_t VAR_7)
{
  statusline VAR_8 = VAR_2;
  statusline VAR_9 = VAR_7 >= 5? VAR_3 : VAR_4;
  (void)VAR_5;
  if(FUNC_1("RTSP/", VAR_6, VAR_7))
    VAR_8 = VAR_9;


  return VAR_8;
}
