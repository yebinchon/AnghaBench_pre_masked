
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v2_le ;
typedef int v1_le ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int __le64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void const*,int) ;
 int FUNC_2 (int ,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const void *VAR_1, const void *VAR_2)
{
 __le64 VAR_3, VAR_4;
 uint64_t VAR_5, VAR_6;
 uint32_t VAR_7;

 FUNC_1(&VAR_3, VAR_1, sizeof(VAR_3));
 FUNC_1(&VAR_4, VAR_2, sizeof(VAR_4));
 FUNC_2(FUNC_0(VAR_3), &VAR_5, &VAR_7);
 FUNC_2(FUNC_0(VAR_4), &VAR_6, &VAR_7);

 return VAR_5 == VAR_6;
}
