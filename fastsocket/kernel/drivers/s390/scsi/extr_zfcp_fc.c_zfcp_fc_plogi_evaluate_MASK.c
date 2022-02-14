
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {int maxframe_size; int supported_classes; } ;
struct TYPE_2__ {int* common_serv_param; int* class1_serv_param; int* class2_serv_param; int* class3_serv_param; int* class4_serv_param; } ;
struct fsf_plogi {TYPE_1__ serv_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct zfcp_port *VAR_4, struct fsf_plogi *VAR_5)
{
 VAR_4->maxframe_size = VAR_5->serv_param.common_serv_param[7] |
  ((VAR_5->serv_param.common_serv_param[6] & 0x0F) << 8);
 if (VAR_5->serv_param.class1_serv_param[0] & 0x80)
  VAR_4->supported_classes |= VAR_0;
 if (VAR_5->serv_param.class2_serv_param[0] & 0x80)
  VAR_4->supported_classes |= VAR_1;
 if (VAR_5->serv_param.class3_serv_param[0] & 0x80)
  VAR_4->supported_classes |= VAR_2;
 if (VAR_5->serv_param.class4_serv_param[0] & 0x80)
  VAR_4->supported_classes |= VAR_3;
}
