
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int revision; int gs_type; int gs_subtype; } ;
struct ct_sns_req {void* max_rsp_size; void* command; TYPE_1__ header; } ;
struct ct_sns_pkt {int dummy; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct ct_sns_req*,int ,int) ;

__attribute__((used)) static inline struct ct_sns_req *
FUNC_2(struct ct_sns_req *VAR_0, uint16_t VAR_1,
    uint16_t VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(struct ct_sns_pkt));

 VAR_0->header.revision = 0x01;
 VAR_0->header.gs_type = 0xFA;
 VAR_0->header.gs_subtype = 0x10;
 VAR_0->command = FUNC_0(VAR_1);
 VAR_0->max_rsp_size = FUNC_0((VAR_2 - 16) / 4);

 return VAR_0;
}
