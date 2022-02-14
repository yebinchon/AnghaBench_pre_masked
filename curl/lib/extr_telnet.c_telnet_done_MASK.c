
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct TELNET {int * telnet_vars; } ;
struct TYPE_3__ {scalar_t__ protop; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_1,
                                 CURLcode VAR_2, bool VAR_3)
{
  struct TELNET *VAR_4 = (struct TELNET *)VAR_1->data->req.protop;
  (void)VAR_2;
  (void)VAR_3;

  if(!VAR_4)
    return VAR_0;

  FUNC_1(VAR_4->telnet_vars);
  VAR_4->telnet_vars = ((void*)0);

  FUNC_0(VAR_1->data->req.protop);

  return VAR_0;
}
