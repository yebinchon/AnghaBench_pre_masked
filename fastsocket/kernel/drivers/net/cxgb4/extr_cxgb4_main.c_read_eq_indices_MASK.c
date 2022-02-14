
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_1, u16 VAR_2, u16 *VAR_3, u16 *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_1, VAR_0) + 24 * VAR_2 + 8;
 __be64 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_5, (__be32 *)&VAR_6, 8);
 if (!VAR_7) {
  VAR_6 = FUNC_0(VAR_6);
  *VAR_4 = (VAR_6 >> 25) & 0xffff;
  *VAR_3 = (VAR_6 >> 9) & 0xffff;
 }
 return VAR_7;
}
