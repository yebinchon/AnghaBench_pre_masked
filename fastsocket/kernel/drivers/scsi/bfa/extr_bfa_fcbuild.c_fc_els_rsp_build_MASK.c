
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fchs_s {int ox_id; void* s_id; void* d_id; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct fchs_s*,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct fchs_s *VAR_1, u32 VAR_2, u32 VAR_3, __be16 VAR_4)
{
 FUNC_0(VAR_1, &VAR_0, sizeof(struct fchs_s));
 VAR_1->d_id = VAR_2;
 VAR_1->s_id = VAR_3;
 VAR_1->ox_id = VAR_4;
}
