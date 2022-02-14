
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_server {int state; int verify; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_1 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_2 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_3 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_4 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_5 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_6 (int *,scalar_t__ const*,size_t) ;
 int FUNC_7 (struct tlsv1_server*,int ,int ) ;
 int FUNC_8 (int ,char*,...) ;

int FUNC_9(struct tlsv1_server *VAR_6, u8 VAR_7,
       const u8 *VAR_8, size_t *VAR_9)
{
 if (VAR_7 == VAR_4) {
  if (*VAR_9 < 2) {
   FUNC_8(VAR_1, "TLSv1: Alert underflow");
   FUNC_7(VAR_6, VAR_3,
        VAR_2);
   return -1;
  }
  FUNC_8(VAR_1, "TLSv1: Received alert %d:%d",
      VAR_8[0], VAR_8[1]);
  *VAR_9 = 2;
  VAR_6->state = VAR_0;
  return -1;
 }

 switch (VAR_6->state) {
 case 129:
  if (FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9))
   return -1;
  break;
 case 131:
  if (FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9))
   return -1;
  break;
 case 128:
  if (FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9))
   return -1;
  break;
 case 133:
  if (FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9))
   return -1;
  break;
 case 132:
  if (FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9))
   return -1;
  break;
 case 130:
  if (FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9))
   return -1;
  break;
 default:
  FUNC_8(VAR_1, "TLSv1: Unexpected state %d "
      "while processing received message",
      VAR_6->state);
  return -1;
 }

 if (VAR_7 == VAR_5)
  FUNC_6(&VAR_6->verify, VAR_8, *VAR_9);

 return 0;
}
