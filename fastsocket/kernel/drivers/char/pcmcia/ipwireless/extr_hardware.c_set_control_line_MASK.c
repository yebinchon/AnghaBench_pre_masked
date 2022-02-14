
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_hardware {int dummy; } ;
struct ipw_control_packet_body {int dummy; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int value; } ;
struct ipw_control_packet {TYPE_2__ header; TYPE_1__ body; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipw_control_packet* FUNC_0 (int,unsigned int,int,int) ;
 int FUNC_1 (struct ipw_hardware*,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct ipw_hardware *VAR_4, int VAR_5,
      unsigned int VAR_6, int VAR_7, int VAR_8)
{
 struct ipw_control_packet *VAR_9;
 int VAR_10 = VAR_2;

 if (VAR_5 == VAR_1)
  VAR_10 = VAR_3;

 VAR_9 = FUNC_0(sizeof(struct ipw_control_packet),
   (VAR_6 + 1), VAR_10, VAR_7);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->header.length = sizeof(struct ipw_control_packet_body);
 VAR_9->body.value = (VAR_8 == 0 ? 0 : 1);
 FUNC_1(VAR_4, VAR_5, &VAR_9->header);
 return 0;
}
