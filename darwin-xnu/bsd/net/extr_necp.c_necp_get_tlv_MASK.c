
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int mbuf_t ;


 int FUNC_0 (int ,int *,int ,int,int ,int*,int ) ;
 int FUNC_1 (int ,int *,int ,int,int ,void*,int *) ;

__attribute__((used)) static int
FUNC_2(mbuf_t VAR_0, u_int8_t *VAR_1, u_int32_t VAR_2,
    int VAR_3, u_int8_t VAR_4, u_int32_t VAR_5, void *VAR_6, u_int32_t *VAR_7)
{
 int VAR_8 = 0;

 int VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8, 0);
 if (VAR_9 < 0) {
  return (VAR_8);
 }

 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_9, VAR_5, VAR_6, VAR_7));
}
