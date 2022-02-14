
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int * mbuf_t ;


 int FUNC_0 (int *,int ,int,int ,int) ;
 int FUNC_1 (int *,int,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(mbuf_t VAR_0, u_int8_t *VAR_1, u_int32_t VAR_2, int VAR_3, u_int8_t VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7 = -1;
 if (VAR_0 != ((void*)0)) {
  VAR_7 = FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6);
 } else if (VAR_1 != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 }
 return (VAR_7);
}
