
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_host {scalar_t__ error; TYPE_1__* req; } ;
struct TYPE_2__ {scalar_t__ errors; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mg_host*,int ) ;

__attribute__((used)) static void FUNC_1(struct mg_host *VAR_3)
{
 if (VAR_3->req)
  if (++VAR_3->req->errors >= VAR_2 ||
      VAR_3->error == VAR_1)
   FUNC_0(VAR_3, -VAR_0);
}
