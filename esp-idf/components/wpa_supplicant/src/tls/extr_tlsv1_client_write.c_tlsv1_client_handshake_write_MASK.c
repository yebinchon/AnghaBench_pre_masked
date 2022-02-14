
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {int state; } ;





 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 (struct tlsv1_client*,size_t*) ;
 int * FUNC_2 (struct tlsv1_client*,size_t*) ;
 int FUNC_3 (int ,char*,...) ;

u8 * FUNC_4(struct tlsv1_client *VAR_2, size_t *VAR_3,
      int VAR_4)
{
 switch (VAR_2->state) {
 case 128:
  return FUNC_2(VAR_2, VAR_3);
 case 129:
  return FUNC_1(VAR_2, VAR_3);
 case 130:
  FUNC_3(VAR_1, "TLSv1: Handshake completed "
      "successfully");
  VAR_2->state = VAR_0;
  *VAR_3 = 0;
  if (VAR_4) {

   return FUNC_0(1);
  }
  return ((void*)0);
 default:
  FUNC_3(VAR_1, "TLSv1: Unexpected state %d while "
      "generating reply", VAR_2->state);
  return ((void*)0);
 }
}
