
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_dev {unsigned int bulk_out_maxpacket; } ;
struct fsg_buffhd {unsigned int bulk_out_intended_length; TYPE_1__* outreq; } ;
struct TYPE_2__ {unsigned int length; } ;



__attribute__((used)) static void FUNC_0(struct fsg_dev *VAR_0,
  struct fsg_buffhd *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_1->bulk_out_intended_length = VAR_2;
 VAR_3 = VAR_2 % VAR_0->bulk_out_maxpacket;
 if (VAR_3 > 0)
  VAR_2 += VAR_0->bulk_out_maxpacket - VAR_3;
 VAR_1->outreq->length = VAR_2;
}
