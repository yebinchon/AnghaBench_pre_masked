
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct fw_packet {int* header; int header_length; size_t payload_length; int speed; int generation; scalar_t__ payload_bus; scalar_t__ ack; void* payload; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;



 int VAR_1 ;



__attribute__((used)) static void FUNC_8(struct fw_packet *VAR_2, int VAR_3, int VAR_4,
  int VAR_5, int VAR_6, int VAR_7, int VAR_8,
  unsigned long long VAR_9, void *VAR_10, size_t VAR_11)
{
 int VAR_12;

 if (VAR_3 == VAR_1) {
  VAR_2->header[0] =
   FUNC_0(VAR_11) |
   VAR_5 |
   FUNC_6(VAR_1);
  VAR_2->header_length = 4;
  VAR_2->payload = VAR_10;
  VAR_2->payload_length = VAR_11;

  goto common;
 }

 if (VAR_3 > 0x10) {
  VAR_12 = VAR_3 & ~0x10;
  VAR_3 = 132;
 } else
  VAR_12 = 0;

 VAR_2->header[0] =
  FUNC_4(VAR_0) |
  FUNC_7(VAR_4) |
  FUNC_6(VAR_3) |
  FUNC_1(VAR_5);
 VAR_2->header[1] =
  FUNC_3(VAR_9 >> 32) | FUNC_5(VAR_6);
 VAR_2->header[2] =
  VAR_9;

 switch (VAR_3) {
 case 128:
  VAR_2->header[3] = *(u32 *)VAR_10;
  VAR_2->header_length = 16;
  VAR_2->payload_length = 0;
  break;

 case 132:
 case 129:
  VAR_2->header[3] =
   FUNC_0(VAR_11) |
   FUNC_2(VAR_12);
  VAR_2->header_length = 16;
  VAR_2->payload = VAR_10;
  VAR_2->payload_length = VAR_11;
  break;

 case 130:
  VAR_2->header_length = 12;
  VAR_2->payload_length = 0;
  break;

 case 131:
  VAR_2->header[3] =
   FUNC_0(VAR_11) |
   FUNC_2(VAR_12);
  VAR_2->header_length = 16;
  VAR_2->payload_length = 0;
  break;
 }
 common:
 VAR_2->speed = VAR_8;
 VAR_2->generation = VAR_7;
 VAR_2->ack = 0;
 VAR_2->payload_bus = 0;
}
