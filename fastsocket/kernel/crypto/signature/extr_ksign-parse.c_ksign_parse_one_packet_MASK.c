
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
typedef int ksign_user_id_actor_t ;
typedef int ksign_signature_actor_t ;
typedef int ksign_public_key_actor_t ;


 int VAR_0 ;



 int FUNC_0 (unsigned long const*,unsigned long const*,unsigned long*,int,int ,void*) ;
 int FUNC_1 (unsigned long const*,unsigned long const*,int ,void*) ;
 int FUNC_2 (unsigned long const*,unsigned long const*,int ,void*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(const uint8_t **VAR_1,
      const uint8_t *VAR_2,
      ksign_signature_actor_t VAR_3,
      ksign_public_key_actor_t VAR_4,
      ksign_user_id_actor_t VAR_5,
      void *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 uint8_t VAR_13[8];
 int VAR_14;


 VAR_7 = 0;
 if (*VAR_1 >= VAR_2)
  goto leave;
 VAR_9 = *(*VAR_1)++;

 VAR_7 = -VAR_0;

 VAR_14 = 0;
 VAR_13[VAR_14++] = VAR_9;
 if (!(VAR_9 & 0x80)) {
  FUNC_3("ksign: invalid packet (ctb=%02x)\n", VAR_9);
  goto leave;
 }

 VAR_12 = 0;
 if (VAR_9 & 0x40) {
  VAR_10 = VAR_9 & 0x3f;
  if (*VAR_1 >= VAR_2) {
   FUNC_3("ksign: 1st length byte missing\n");
   goto leave;
  }
  VAR_8 = *(*VAR_1)++;
  VAR_13[VAR_14++] = VAR_8;

  if (VAR_8 < 192) {
   VAR_12 = VAR_8;
  } else if (VAR_8 < 224) {
   VAR_12 = (VAR_8 - 192) * 256;
   if (*VAR_1 >= VAR_2) {
    FUNC_3("ksign: 2nd length byte missing\n");
    goto leave;
   }
   VAR_8 = *(*VAR_1)++;
   VAR_13[VAR_14++] = VAR_8;
   VAR_12 += VAR_8 + 192;
  } else if (VAR_8 == 255) {
   if (*VAR_1 + 3 >= VAR_2) {
    FUNC_3("ksign: 4 uint8_t length invalid\n");
    goto leave;
   }
   VAR_12 = (VAR_13[VAR_14++] = *(*VAR_1)++ << 24);
   VAR_12 |= (VAR_13[VAR_14++] = *(*VAR_1)++ << 16);
   VAR_12 |= (VAR_13[VAR_14++] = *(*VAR_1)++ << 8);
   VAR_12 |= (VAR_13[VAR_14++] = *(*VAR_1)++ << 0);
  } else {
   VAR_12 = 0;
  }
 } else {
  VAR_10 = (VAR_9 >> 2) & 0xf;
  VAR_11 = ((VAR_9 & 3) == 3) ? 0 : (1 << (VAR_9 & 3));
  if( !VAR_11 ) {
   VAR_12 = 0;
  } else {
   if (*VAR_1 + VAR_11 > VAR_2) {
    FUNC_3("ksign: length bytes missing\n");
    goto leave;
   }
   for( ; VAR_11; VAR_11-- ) {
    VAR_12 <<= 8;
    VAR_12 |= VAR_13[VAR_14++] = *(*VAR_1)++;
   }
  }
 }

 if (*VAR_1 + VAR_12 > VAR_2) {
  FUNC_3("ksign: packet length longer than available data\n");
  goto leave;
 }


 switch (VAR_10) {
 case 130:
  VAR_7 = FUNC_0(*VAR_1, *VAR_1 + VAR_12, VAR_13, VAR_14,
         VAR_4, VAR_6);
  break;
 case 129:
  VAR_7 = FUNC_1(*VAR_1, *VAR_1 + VAR_12,
        VAR_3, VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_2(*VAR_1, *VAR_1 + VAR_12,
      VAR_5, VAR_6);
  break;
 default:
  VAR_7 = 0;
  break;
 }

 *VAR_1 += VAR_12;
leave:
 return VAR_7;
}
