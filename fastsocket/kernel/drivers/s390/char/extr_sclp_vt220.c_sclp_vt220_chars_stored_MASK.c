
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int length; } ;
struct sclp_vt220_sccb {TYPE_2__ evbuf; } ;
struct TYPE_3__ {scalar_t__ sccb; } ;
struct sclp_vt220_request {TYPE_1__ sclp_req; } ;
struct evbuf_header {int dummy; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(struct sclp_vt220_request *VAR_0)
{
 struct sclp_vt220_sccb *VAR_1;
 VAR_1 = (struct sclp_vt220_sccb *) VAR_0->sclp_req.sccb;
 return VAR_1->evbuf.length - sizeof(struct evbuf_header);
}
