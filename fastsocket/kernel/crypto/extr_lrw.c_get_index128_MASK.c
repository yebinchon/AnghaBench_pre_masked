
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int be128 ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(be128 *VAR_0)
{
 int VAR_1;
 __be32 *VAR_2 = (__be32 *) VAR_0;

 for (VAR_2 += 3, VAR_1 = 0; VAR_1 < 128; VAR_2--, VAR_1 += 32) {
  u32 VAR_3 = FUNC_0(VAR_2);

  if (!~VAR_3)
   continue;

  return VAR_1 + FUNC_1(VAR_3);
 }

 return VAR_1;
}
