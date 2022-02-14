
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct FILEPROTO {char* path; char* freepath; int fd; } ;
struct TYPE_7__ {int path; } ;
struct TYPE_8__ {TYPE_3__ up; } ;
struct TYPE_6__ {int upload; } ;
struct TYPE_5__ {struct FILEPROTO* protop; } ;
struct Curl_easy {TYPE_4__ state; TYPE_2__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct Curl_easy*,int ,int ,char**,size_t*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct Curl_easy*,char*,int ) ;
 int FUNC_3 (struct connectdata*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_7, bool *VAR_8)
{
  struct Curl_easy *VAR_9 = VAR_7->data;
  char *VAR_10;
  struct FILEPROTO *VAR_11 = VAR_9->req.protop;
  int VAR_12;




  size_t VAR_13;

  CURLcode VAR_14 = FUNC_1(VAR_9, VAR_9->state.up.path, 0, &VAR_10,
                                   &VAR_13, VAR_3);
  if(VAR_14)
    return VAR_14;
  if(FUNC_4(VAR_10, 0, VAR_13)) {

    FUNC_0(VAR_10);
    return VAR_2;
  }

  VAR_12 = FUNC_5(VAR_10, VAR_5);
  VAR_11->path = VAR_10;

  VAR_11->freepath = VAR_10;

  VAR_11->fd = VAR_12;
  if(!VAR_9->set.upload && (VAR_12 == -1)) {
    FUNC_2(VAR_9, "Couldn't open file %s", VAR_9->state.up.path);
    FUNC_3(VAR_7, VAR_0, VAR_3);
    return VAR_0;
  }
  *VAR_8 = VAR_6;

  return VAR_1;
}
