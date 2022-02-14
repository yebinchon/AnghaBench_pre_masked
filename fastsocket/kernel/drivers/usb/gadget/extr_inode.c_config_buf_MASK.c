
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dev_data {TYPE_2__* req; TYPE_1__* config; TYPE_1__* hs_config; TYPE_3__* gadget; } ;
struct TYPE_6__ {scalar_t__ speed; } ;
struct TYPE_5__ {TYPE_1__* buf; } ;
struct TYPE_4__ {int wTotalLength; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (struct dev_data *VAR_3, u8 VAR_4, unsigned VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;


 if (VAR_5 > 0)
  return -VAR_0;

 if (FUNC_0(VAR_3->gadget)) {
  VAR_7 = (VAR_3->gadget->speed == VAR_2);
  if (VAR_4 == VAR_1)
   VAR_7 = !VAR_7;
 }
 if (VAR_7) {
  VAR_3->req->buf = VAR_3->hs_config;
  VAR_6 = FUNC_1(VAR_3->hs_config->wTotalLength);
 } else {
  VAR_3->req->buf = VAR_3->config;
  VAR_6 = FUNC_1(VAR_3->config->wTotalLength);
 }
 ((u8 *)VAR_3->req->buf) [1] = VAR_4;
 return VAR_6;
}
