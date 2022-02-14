
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct carlu {int dummy; } ;
typedef int msg ;
typedef int block ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct carlu*,int ,void*,int,void*,int) ;
 int FUNC_1 (int const) ;

int FUNC_2(struct carlu *VAR_1, const uint32_t VAR_2,
   const uint32_t VAR_3)
{
 int VAR_4;
 __le32 VAR_5, VAR_6[2] = { FUNC_1(VAR_2), FUNC_1(VAR_3) };

 VAR_4 = FUNC_0(VAR_1, VAR_0,
     (void *) &VAR_6, sizeof(VAR_6),
     (void *) &VAR_5, sizeof(VAR_5));
 return VAR_4;
}
