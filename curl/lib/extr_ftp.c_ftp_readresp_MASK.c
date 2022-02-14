
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pingpong {struct connectdata* conn; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_4__ {int httpcode; } ;
struct TYPE_3__ {char* buffer; } ;
struct Curl_easy {TYPE_2__ info; TYPE_1__ state; } ;
typedef int curl_socket_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pingpong*,int*,size_t*) ;
 int FUNC_1 (struct connectdata*,char* const,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct Curl_easy*,char*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(curl_socket_t VAR_5,
                             struct pingpong *VAR_6,
                             int *VAR_7,
                             size_t *VAR_8)
{
  struct connectdata *VAR_9 = VAR_6->conn;
  struct Curl_easy *VAR_10 = VAR_9->data;



  int VAR_11;
  CURLcode VAR_12 = FUNC_0(VAR_5, VAR_6, &VAR_11, VAR_8);
  VAR_10->info.httpcode = VAR_11;

  if(VAR_7)
    *VAR_7 = VAR_11;

  if(421 == VAR_11) {







    FUNC_2(VAR_10, "We got a 421 - timeout!\n");
    FUNC_3(VAR_9, VAR_1);
    return VAR_0;
  }

  return VAR_12;
}
