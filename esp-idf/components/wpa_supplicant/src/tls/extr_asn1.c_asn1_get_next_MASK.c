
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct asn1_hdr {int identifier; int class; int constructed; int tag; int length; int const* payload; } ;


 int VAR_0 ;
 int FUNC_0 (struct asn1_hdr*,int ,int) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(const u8 *VAR_1, size_t VAR_2, struct asn1_hdr *VAR_3)
{
 const u8 *VAR_4, *VAR_5;
 u8 VAR_6;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_4 = VAR_1;
 VAR_5 = VAR_1 + VAR_2;

 VAR_3->identifier = *VAR_4++;
 VAR_3->class = VAR_3->identifier >> 6;
 VAR_3->constructed = !!(VAR_3->identifier & (1 << 5));

 if ((VAR_3->identifier & 0x1f) == 0x1f) {
  VAR_3->tag = 0;
  do {
   if (VAR_4 >= VAR_5) {
    FUNC_1(VAR_0, "ASN.1: Identifier "
        "underflow");
    return -1;
   }
   VAR_6 = *VAR_4++;
   FUNC_1(VAR_0, "ASN.1: Extended tag data: "
       "0x%02x", VAR_6);
   VAR_3->tag = (VAR_3->tag << 7) | (VAR_6 & 0x7f);
  } while (VAR_6 & 0x80);
 } else
  VAR_3->tag = VAR_3->identifier & 0x1f;

 VAR_6 = *VAR_4++;
 if (VAR_6 & 0x80) {
  if (VAR_6 == 0xff) {
   FUNC_1(VAR_0, "ASN.1: Reserved length "
       "value 0xff used");
   return -1;
  }
  VAR_6 &= 0x7f;
  VAR_3->length = 0;
  if (VAR_6 > 4) {
   FUNC_1(VAR_0, "ASN.1: Too long length field");
   return -1;
  }
  while (VAR_6--) {
   if (VAR_4 >= VAR_5) {
    FUNC_1(VAR_0, "ASN.1: Length "
        "underflow");
    return -1;
   }
   VAR_3->length = (VAR_3->length << 8) | *VAR_4++;
  }
 } else {

  VAR_3->length = VAR_6;
 }

 if (VAR_5 < VAR_4 || VAR_3->length > (unsigned int) (VAR_5 - VAR_4)) {
  FUNC_1(VAR_0, "ASN.1: Contents underflow");
  return -1;
 }

 VAR_3->payload = VAR_4;
 return 0;
}
