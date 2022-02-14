
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zd_addr_t ;
typedef int u64 ;
typedef int u32 ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (int const*) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*,int*,int const*,int ) ;

u64 FUNC_4(struct zd_chip *VAR_0)
{
 int VAR_1;
 static const zd_addr_t VAR_2[] =
  { 128, 129 };
 u32 VAR_3[2];
 u64 VAR_4;

 FUNC_1(&VAR_0->mutex);
 VAR_1 = FUNC_3(VAR_0, VAR_3, (const zd_addr_t *)VAR_2,
                         FUNC_0(VAR_2));
 FUNC_2(&VAR_0->mutex);
 if (VAR_1)
  return 0;

 VAR_4 = VAR_3[1];
 VAR_4 = (VAR_4 << 32) | VAR_3[0];

 return VAR_4;
}
