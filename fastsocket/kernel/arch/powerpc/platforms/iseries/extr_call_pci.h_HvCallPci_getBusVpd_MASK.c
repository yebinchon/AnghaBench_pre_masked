
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(u16 VAR_2, u64 VAR_3,
  u16 VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3,
   VAR_4, VAR_1);
 if (VAR_5 == -1)
  return -1;
 else
  return VAR_5 & 0xFFFF;
}
