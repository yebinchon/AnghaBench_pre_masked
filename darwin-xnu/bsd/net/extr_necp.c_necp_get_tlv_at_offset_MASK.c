
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int * mbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,int,int,void*,int*) ;

__attribute__((used)) static int
FUNC_6(mbuf_t VAR_3, u_int8_t *VAR_4, u_int32_t VAR_5,
        int VAR_6, u_int32_t VAR_7, void *VAR_8, u_int32_t *VAR_9)
{
 if (VAR_3 != ((void*)0)) {

  return FUNC_5(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9);
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2, "necp_get_tlv_at_offset buffer is NULL");
  return (VAR_0);
 }




 if (VAR_6 + sizeof(u_int8_t) + sizeof(u_int32_t) > VAR_5) {
  FUNC_0(VAR_2, "necp_get_tlv_at_offset buffer_length is too small for TLV (%u < %u)",
    VAR_5, VAR_6 + sizeof(u_int8_t) + sizeof(u_int32_t));
  return (VAR_0);
 }


 u_int32_t VAR_10 = FUNC_3(VAR_4, VAR_6);
 if (VAR_10 > VAR_5 - (VAR_6 + sizeof(u_int8_t) + sizeof(u_int32_t))) {
  FUNC_0(VAR_2, "necp_get_tlv_at_offset buffer_length is too small for TLV of length %u (%u < %u)",
    VAR_10, VAR_5, VAR_6 + sizeof(u_int8_t) + sizeof(u_int32_t) + VAR_10);
  return (VAR_0);
 }

 if (VAR_8 != ((void*)0) && VAR_7 > 0) {

  if (VAR_7 < VAR_10) {
   FUNC_0(VAR_2, "necp_get_tlv_at_offset out_buffer_length is too small for TLV value (%u < %u)",
     VAR_7, VAR_10);
   return (VAR_0);
  }


  u_int8_t *VAR_11 = FUNC_4(VAR_4, VAR_6, ((void*)0));
  if (VAR_11 == ((void*)0)) {
   FUNC_1(VAR_2, "necp_get_tlv_at_offset tlv_value is NULL");
   return (VAR_1);
  }


  FUNC_2(VAR_8, VAR_11, VAR_10);
 }


 if (VAR_9 != ((void*)0)) {
  *VAR_9 = VAR_10;
 }

 return (0);
}
