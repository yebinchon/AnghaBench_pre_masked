
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct FILEPROTO {int dummy; } ;
struct TYPE_3__ {int protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_2)
{

  VAR_2->data->req.protop = FUNC_0(1, sizeof(struct FILEPROTO));
  if(!VAR_2->data->req.protop)
    return VAR_1;

  return VAR_0;
}
