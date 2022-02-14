
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct carm_msg_get_fw_ver {void* data_addr; void* handle; int subtype; int type; } ;
struct carm_host {int dummy; } ;
struct carm_fw_ver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct carm_host*,unsigned int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct carm_msg_get_fw_ver*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct carm_host *VAR_2,
      unsigned int VAR_3, void *VAR_4)
{
 struct carm_msg_get_fw_ver *VAR_5 = VAR_4;
 u32 VAR_6 = (u32) (FUNC_1(VAR_2, VAR_3) + sizeof(*VAR_5));

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->type = VAR_0;
 VAR_5->subtype = VAR_1;
 VAR_5->handle = FUNC_2(FUNC_0(VAR_3));
 VAR_5->data_addr = FUNC_2(VAR_6);

 return sizeof(struct carm_msg_get_fw_ver) +
        sizeof(struct carm_fw_ver);
}
