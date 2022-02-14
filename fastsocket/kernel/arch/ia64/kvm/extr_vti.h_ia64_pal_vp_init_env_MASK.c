
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ia64_pal_retval {int status; int v0; } ;
typedef int s64 ;


 int FUNC_0 (struct ia64_pal_retval,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline s64 FUNC_1(u64 VAR_1, u64 VAR_2,
   u64 VAR_3, u64 *VAR_4)
{
 struct ia64_pal_retval VAR_5;

 FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2,
   VAR_3);
 *VAR_4 = VAR_5.v0;

 return VAR_5.status;
}
