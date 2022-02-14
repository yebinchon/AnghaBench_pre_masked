
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* callback_data; int callback; int status; int command; } ;
struct sclp_vt220_request {TYPE_2__ sclp_req; } ;
struct TYPE_3__ {int sclp_receive_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct sclp_vt220_request *VAR_7)
{
 if (!(VAR_6.sclp_receive_mask & VAR_1)) {
  VAR_7->sclp_req.status = VAR_3;
  return -VAR_0;
 }
 VAR_7->sclp_req.command = VAR_2;
 VAR_7->sclp_req.status = VAR_4;
 VAR_7->sclp_req.callback = VAR_5;
 VAR_7->sclp_req.callback_data = (void *) VAR_7;

 return FUNC_0(&VAR_7->sclp_req);
}
