
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_net_hdr {int gso_type; scalar_t__ gso_size; int flags; int csum_offset; int csum_start; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ gso_size; unsigned short gso_type; scalar_t__ gso_segs; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (struct sk_buff*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_9,
         struct virtio_net_hdr *VAR_10)
{
 unsigned short VAR_11 = 0;
 if (VAR_10->gso_type != VAR_8) {
  switch (VAR_10->gso_type & ~VAR_7) {
  case 130:
   VAR_11 = VAR_2;
   break;
  case 129:
   VAR_11 = VAR_3;
   break;
  case 128:
   VAR_11 = VAR_5;
   break;
  default:
   return -VAR_0;
  }

  if (VAR_10->gso_type & VAR_7)
   VAR_11 |= VAR_4;

  if (VAR_10->gso_size == 0)
   return -VAR_0;
 }

 if (VAR_10->flags & VAR_6) {
  if (!FUNC_0(VAR_9, VAR_10->csum_start,
       VAR_10->csum_offset))
   return -VAR_0;
 }

 if (VAR_10->gso_type != VAR_8) {
  FUNC_1(VAR_9)->gso_size = VAR_10->gso_size;
  FUNC_1(VAR_9)->gso_type = VAR_11;


  FUNC_1(VAR_9)->gso_type |= VAR_1;
  FUNC_1(VAR_9)->gso_segs = 0;
 }
 return 0;
}
