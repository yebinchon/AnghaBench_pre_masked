
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ps3av_send_hdr {int dummy; } ;
struct ps3av_reply_hdr {scalar_t__ version; int size; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct ps3av_send_hdr*,struct ps3av_reply_hdr const*,int) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ps3av_send_hdr *VAR_4,
          const struct ps3av_reply_hdr *VAR_5,
          int VAR_6)
{
 int VAR_7;

 if (VAR_5->version != VAR_2) {
  FUNC_0(&VAR_3->dev->core, "reply_packet invalid version:%x\n",
   VAR_5->version);
  return -VAR_0;
 }
 VAR_7 = VAR_5->size + VAR_1;
 if (VAR_7 > VAR_6)
  VAR_7 = VAR_6;
 FUNC_1(VAR_4, VAR_5, VAR_7);
 return 0;
}
