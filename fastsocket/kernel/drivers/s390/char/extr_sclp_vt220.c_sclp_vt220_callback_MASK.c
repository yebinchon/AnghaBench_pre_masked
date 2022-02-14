
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int response_code; } ;
struct sclp_vt220_sccb {TYPE_1__ header; } ;
struct TYPE_4__ {void* status; scalar_t__ sccb; } ;
struct sclp_vt220_request {TYPE_2__ sclp_req; int retry_count; } ;
struct sclp_req {scalar_t__ status; } ;
struct sccb_header {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct sclp_req*) ;
 int FUNC_1 (struct sccb_header*) ;
 int FUNC_2 (struct sclp_vt220_request*) ;

__attribute__((used)) static void
FUNC_3(struct sclp_req *VAR_3, void *VAR_4)
{
 struct sclp_vt220_request *VAR_5;
 struct sclp_vt220_sccb *VAR_6;

 VAR_5 = (struct sclp_vt220_request *) VAR_4;
 if (VAR_3->status == VAR_1) {
  FUNC_2(VAR_5);
  return;
 }
 VAR_6 = (struct sclp_vt220_sccb *) VAR_5->sclp_req.sccb;


 switch (VAR_6->header.response_code) {
 case 0x0020 :
  break;

 case 0x05f0:
  break;

 case 0x0340:
  if (++VAR_5->retry_count > VAR_0)
   break;

  if (FUNC_1((struct sccb_header *) VAR_6) > 0) {

   VAR_6->header.response_code = 0x0000;
   VAR_5->sclp_req.status = VAR_2;
   if (FUNC_0(VAR_3) == 0)
    return;
  }
  break;

 case 0x0040:
  if (++VAR_5->retry_count > VAR_0)
   break;
  VAR_6->header.response_code = 0x0000;
  VAR_5->sclp_req.status = VAR_2;
  if (FUNC_0(VAR_3) == 0)
   return;
  break;

 default:
  break;
 }
 FUNC_2(VAR_5);
}
