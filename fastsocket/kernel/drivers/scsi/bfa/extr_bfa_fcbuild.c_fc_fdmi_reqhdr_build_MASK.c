
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int ) ;
 int FUNC_2 (struct ct_hdr_s*,int ,int) ;

u16
FUNC_3(struct fchs_s *VAR_1, void *VAR_2, u32 VAR_3,
       u16 VAR_4)
{

 struct ct_hdr_s *VAR_5 = (struct ct_hdr_s *) VAR_2;
 u32 VAR_6 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_6, VAR_3, 0);
 FUNC_2(VAR_5, VAR_3, VAR_4);

 return sizeof(struct ct_hdr_s);
}
