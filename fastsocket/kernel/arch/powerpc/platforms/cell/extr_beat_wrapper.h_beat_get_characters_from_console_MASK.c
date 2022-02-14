
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static inline s64 FUNC_2(u64 VAR_1, u64 *VAR_2,
 u8 *VAR_3)
{
 u64 VAR_4[3];
 s64 VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);
 *VAR_2 = VAR_4[0];
 FUNC_1(VAR_3, VAR_4 + 1, *VAR_2);
 return VAR_5;
}
