
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ia64_sal_retval {scalar_t__ v0; scalar_t__ status; } ;


 int FUNC_0 (struct ia64_sal_retval,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u64 FUNC_1(u64 VAR_1, u64 VAR_2)
{
 struct ia64_sal_retval VAR_3;
 VAR_3.status = 0;
 VAR_3.v0 = 0;

 FUNC_0(VAR_3,
   (u64) VAR_0,
   (u64) VAR_1, (u64) VAR_2, 0, 0, 0, 0, 0);
 return VAR_3.v0;
}
