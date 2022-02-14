
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct RTSP {int dummy; } ;
struct TYPE_3__ {struct RTSP* protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 struct RTSP* FUNC_0 (int,int) ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_2)
{
  struct RTSP *VAR_3;

  VAR_2->data->req.protop = VAR_3 = FUNC_0(1, sizeof(struct RTSP));
  if(!VAR_3)
    return VAR_1;

  return VAR_0;
}
