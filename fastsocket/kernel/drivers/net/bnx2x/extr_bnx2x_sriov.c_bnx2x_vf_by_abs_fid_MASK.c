
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnx2x_virtf {int dummy; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 struct bnx2x_virtf* FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__) ;

__attribute__((used)) static
struct bnx2x_virtf *FUNC_3(struct bnx2x *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = (u16)FUNC_2(VAR_0, VAR_1);
 return (VAR_2 < FUNC_0(VAR_0)) ? FUNC_1(VAR_0, VAR_2) : ((void*)0);
}
