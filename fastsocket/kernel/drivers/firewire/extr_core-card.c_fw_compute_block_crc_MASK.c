
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

int FUNC_2(u32 *VAR_0)
{
 __be32 VAR_1[256];
 int VAR_2, VAR_3;

 VAR_3 = (*VAR_0 >> 16) & 0xff;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  VAR_1[VAR_2] = FUNC_0(VAR_0[VAR_2 + 1]);
 *VAR_0 |= FUNC_1(0, (u8 *) VAR_1, VAR_3 * 4);

 return VAR_3;
}
