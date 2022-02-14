
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {int dummy; } ;
struct TYPE_3__ {int wwn; } ;
typedef TYPE_1__ fcgs_gfn_req_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_2 (struct ct_hdr_s*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

u16
FUNC_4(struct fchs_s *VAR_3, void *VAR_4, u32 VAR_5, wwn_t VAR_6)
{
 struct ct_hdr_s *VAR_7 = (struct ct_hdr_s *) VAR_4;
 fcgs_gfn_req_t *VAR_8 = (fcgs_gfn_req_t *) (VAR_7 + 1);
 u32 VAR_9 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_9, VAR_5, 0);
 FUNC_2(VAR_7, VAR_5, VAR_2,
   VAR_0);

 FUNC_3(VAR_8, 0, sizeof(fcgs_gfn_req_t));
 VAR_8->wwn = VAR_6;

 return sizeof(struct ct_hdr_s) + sizeof(fcgs_gfn_req_t);
}
