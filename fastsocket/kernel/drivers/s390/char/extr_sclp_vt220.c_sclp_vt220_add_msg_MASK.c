
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
struct TYPE_5__ {scalar_t__ length; } ;
struct sclp_vt220_sccb {TYPE_3__ evbuf; TYPE_2__ header; } ;
struct TYPE_4__ {scalar_t__ sccb; } ;
struct sclp_vt220_request {TYPE_1__ sclp_req; } ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (void*,void const*,int) ;
 int FUNC_1 (struct sclp_vt220_request*) ;

__attribute__((used)) static int
FUNC_2(struct sclp_vt220_request *VAR_0,
     const unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 struct sclp_vt220_sccb *VAR_4;
 void *VAR_5;
 unsigned char VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_2 > FUNC_1(VAR_0))
  VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 <= 0)
  return 0;

 VAR_4 = (struct sclp_vt220_sccb *) VAR_0->sclp_req.sccb;
 VAR_5 = (void *) ((addr_t) VAR_4 + VAR_4->header.length);

 if (VAR_3) {

  for (VAR_7=0, VAR_8=0;
       (VAR_7 < VAR_2) && (VAR_8 < FUNC_1(VAR_0));
       VAR_7++) {

   VAR_6 = VAR_1[VAR_7];

   if (VAR_6 == 0x0a) {
    if (VAR_8 + 1 < FUNC_1(VAR_0)) {
     ((unsigned char *) VAR_5)[VAR_8++] = VAR_6;
     ((unsigned char *) VAR_5)[VAR_8++] = 0x0d;
    } else
     break;

   } else
    ((unsigned char *) VAR_5)[VAR_8++] = VAR_6;
  }
  VAR_4->header.length += VAR_8;
  VAR_4->evbuf.length += VAR_8;
  return VAR_7;
 } else {
  FUNC_0(VAR_5, (const void *) VAR_1, VAR_2);
  VAR_4->header.length += VAR_2;
  VAR_4->evbuf.length += VAR_2;
  return VAR_2;
 }
}
