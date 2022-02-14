
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; int type; } ;
struct TYPE_5__ {int length; int response_code; int function_code; } ;
struct sclp_vt220_sccb {TYPE_3__ evbuf; TYPE_2__ header; } ;
struct TYPE_4__ {void* sccb; } ;
struct sclp_vt220_request {TYPE_1__ sclp_req; scalar_t__ retry_count; } ;
struct evbuf_header {int dummy; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static struct sclp_vt220_request *
FUNC_1(void *VAR_3)
{
 struct sclp_vt220_request *VAR_4;
 struct sclp_vt220_sccb *VAR_5;


 VAR_4 = ((struct sclp_vt220_request *)
   ((addr_t) VAR_3 + VAR_1)) - 1;
 VAR_4->retry_count = 0;
 VAR_4->sclp_req.sccb = VAR_3;

 VAR_5 = (struct sclp_vt220_sccb *) VAR_3;
 FUNC_0((void *) VAR_5, 0, sizeof(struct sclp_vt220_sccb));
 VAR_5->header.length = sizeof(struct sclp_vt220_sccb);
 VAR_5->header.function_code = VAR_2;
 VAR_5->header.response_code = 0x0000;
 VAR_5->evbuf.type = VAR_0;
 VAR_5->evbuf.length = sizeof(struct evbuf_header);

 return VAR_4;
}
