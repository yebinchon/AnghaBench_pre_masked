
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_packet {int* header; int header_length; size_t payload_length; scalar_t__ payload_bus; void* payload; } ;


 int FUNC_0 () ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;

void FUNC_14(struct fw_packet *VAR_3, u32 *VAR_4,
        int VAR_5, void *VAR_6, size_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_7(VAR_4[0]);
 VAR_9 = FUNC_8(VAR_4[0]);
 VAR_11 = FUNC_4(VAR_4[0]);
 VAR_12 = FUNC_6(VAR_4[1]);
 VAR_10 = FUNC_5(VAR_4[3]);

 VAR_3->header[0] =
  FUNC_10(VAR_0) |
  FUNC_13(VAR_9) |
  FUNC_2(VAR_12);
 VAR_3->header[1] =
  FUNC_11(VAR_11) |
  FUNC_9(VAR_5);
 VAR_3->header[2] = 0;

 switch (VAR_8) {
 case 128:
 case 129:
  VAR_3->header[0] |= FUNC_12(VAR_2);
  VAR_3->header_length = 12;
  VAR_3->payload_length = 0;
  break;

 case 130:
  VAR_3->header[0] |=
   FUNC_12(VAR_1);
  if (VAR_6 != ((void*)0))
   VAR_3->header[3] = *(u32 *)VAR_6;
  else
   VAR_3->header[3] = 0;
  VAR_3->header_length = 16;
  VAR_3->payload_length = 0;
  break;

 case 131:
 case 132:
  VAR_3->header[0] |= FUNC_12(VAR_8 + 2);
  VAR_3->header[3] =
   FUNC_1(VAR_7) |
   FUNC_3(VAR_10);
  VAR_3->header_length = 16;
  VAR_3->payload = VAR_6;
  VAR_3->payload_length = VAR_7;
  break;

 default:
  FUNC_0();
  return;
 }

 VAR_3->payload_bus = 0;
}
