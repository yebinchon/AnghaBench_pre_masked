
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct FILEPROTO {int fd; int * path; int freepath; } ;
struct TYPE_3__ {struct FILEPROTO* protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_1,
                               CURLcode VAR_2, bool VAR_3)
{
  struct FILEPROTO *VAR_4 = VAR_1->data->req.protop;
  (void)VAR_2;
  (void)VAR_3;

  if(VAR_4) {
    FUNC_0(VAR_4->freepath);
    VAR_4->path = ((void*)0);
    if(VAR_4->fd != -1)
      FUNC_1(VAR_4->fd);
    VAR_4->fd = -1;
  }

  return VAR_0;
}
