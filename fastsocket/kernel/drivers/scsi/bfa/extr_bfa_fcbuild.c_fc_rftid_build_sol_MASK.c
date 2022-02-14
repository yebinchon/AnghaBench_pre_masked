
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fcgs_rftid_req_s {int dap; scalar_t__ fc4_type; } ;
struct ct_hdr_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ct_hdr_s*,int,int ) ;
 int FUNC_2 (struct fchs_s*,int,int,int) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (struct fcgs_rftid_req_s*,int ,int) ;

u16
FUNC_5(struct fchs_s *VAR_2, void *VAR_3, u32 VAR_4, u16 VAR_5,
     u8 *VAR_6, u32 VAR_7)
{
 struct ct_hdr_s *VAR_8 = (struct ct_hdr_s *) VAR_3;
 struct fcgs_rftid_req_s *VAR_9 = (struct fcgs_rftid_req_s *)(VAR_8 + 1);
 u32 VAR_10 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_10, VAR_4, VAR_5);
 FUNC_1(VAR_8, VAR_4, VAR_1);

 FUNC_4(VAR_9, 0, sizeof(struct fcgs_rftid_req_s));

 VAR_9->dap = VAR_4;
 FUNC_3((void *)VAR_9->fc4_type, (void *)VAR_6,
  (VAR_7 < 32 ? VAR_7 : 32));

 return sizeof(struct fcgs_rftid_req_s) + sizeof(struct ct_hdr_s);
}
