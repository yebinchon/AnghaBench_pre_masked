
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int mbuf_t ;
typedef int length ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int,scalar_t__,void*) ;

__attribute__((used)) static int
FUNC_3(mbuf_t VAR_2, int VAR_3, u_int32_t VAR_4, void *VAR_5, u_int32_t *VAR_6)
{
 int VAR_7 = 0;
 u_int32_t VAR_8;

 if (VAR_3 < 0) {
  return (VAR_0);
 }

 VAR_7 = FUNC_2(VAR_2, VAR_3 + sizeof(u_int8_t), sizeof(VAR_8), &VAR_8);
 if (VAR_7) {
  return (VAR_7);
 }

 u_int32_t VAR_9 = FUNC_1(VAR_2, ((void*)0));
 if (VAR_9 < (VAR_3 + sizeof(u_int8_t) + sizeof(VAR_8) + VAR_8)) {
  FUNC_0(VAR_1, "Got a bad TLV, length (%u) + offset (%d) < total length (%u)",
    VAR_8, (VAR_3 + sizeof(u_int8_t) + sizeof(VAR_8)), VAR_9);
  return (VAR_0);
 }

 if (VAR_6 != ((void*)0)) {
  *VAR_6 = VAR_8;
 }

 if (VAR_5 != ((void*)0) && VAR_4 > 0) {
  u_int32_t VAR_10 = (VAR_8 < VAR_4) ? VAR_8 : VAR_4;
  VAR_7 = FUNC_2(VAR_2, VAR_3 + sizeof(u_int8_t) + sizeof(VAR_8), VAR_10, VAR_5);
  if (VAR_7) {
   return (VAR_7);
  }
 }

 return (0);
}
