
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
struct TYPE_6__ {int microcode_version; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_7__ {int buffer; } ;
typedef TYPE_2__ drm_radeon_kcmd_buffer_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct drm_file*,int*) ;

__attribute__((used)) static int FUNC_4(drm_radeon_private_t *
       VAR_7,
       struct drm_file *VAR_8,
       drm_radeon_kcmd_buffer_t *
       VAR_9,
       unsigned int *VAR_10)
{
 u32 *VAR_11 = FUNC_1(VAR_9->buffer, 0);
 u32 VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_14 = ((*VAR_11 & VAR_2) >> 16);
 *VAR_10 = 2 + VAR_14;

 if ((*VAR_11 & 0xc0000000) != VAR_1) {
  FUNC_0("Not a type 3 packet\n");
  return -VAR_0;
 }

 if (4 * *VAR_10 > FUNC_2(VAR_9->buffer)) {
  FUNC_0("Packet size larger than size of data provided\n");
  return -VAR_0;
 }

 switch (*VAR_11 & 0xff00) {


 case 141:
 case 139:
 case 140:
 case 128:
 case 129:
 case 142:




  break;

 case 133:
 case 131:
 case 132:
 case 143:

  if (VAR_7->microcode_version != VAR_6) {
   FUNC_0("Invalid 3d packet for r100-class chip\n");
   return -VAR_0;
  }
  break;

 case 138:

  if (VAR_14 > 18) {
   FUNC_0("Too large payload in 3D_LOAD_VBPNTR (count=%d)\n",
      VAR_14);
   return -VAR_0;
  }


  VAR_11 = FUNC_1(VAR_9->buffer, 1);

  VAR_13 = *VAR_11 & ~0xc000;
  VAR_16 = 0;
  VAR_15 = 2;
  while ((VAR_16 < VAR_13) && (VAR_15 < (VAR_14 + 2))) {
   VAR_15++;
   VAR_11 = FUNC_1(VAR_9->buffer, VAR_15);
   if (FUNC_3(VAR_7, VAR_8,
         VAR_11)) {
    FUNC_0
        ("Invalid offset (k=%d i=%d) in 3D_LOAD_VBPNTR packet.\n",
         VAR_16, VAR_15);
    return -VAR_0;
   }
   VAR_16++;
   VAR_15++;
   if (VAR_16 == VAR_13)
    break;

   VAR_11 = FUNC_1(VAR_9->buffer, VAR_15);

   if (FUNC_3(VAR_7,
         VAR_8, VAR_11))
   {
    FUNC_0
        ("Invalid offset (k=%d i=%d) in 3D_LOAD_VBPNTR packet.\n",
         VAR_16, VAR_15);
    return -VAR_0;
   }
   VAR_16++;
   VAR_15++;
  }

  if ((VAR_16 != VAR_13) || (VAR_15 != (VAR_14 + 2))) {
   FUNC_0
       ("Malformed 3D_LOAD_VBPNTR packet (k=%d i=%d narrays=%d count+1=%d).\n",
         VAR_16, VAR_15, VAR_13, VAR_14 + 1);
   return -VAR_0;
  }
  break;

 case 137:
  if (VAR_7->microcode_version != VAR_5) {
   FUNC_0("Invalid 3d packet for r200-class chip\n");
   return -VAR_0;
  }

  VAR_11 = FUNC_1(VAR_9->buffer, 1);
  if (FUNC_3(VAR_7, VAR_8, VAR_11)) {
    FUNC_0("Invalid rndr_gen_indx offset\n");
    return -VAR_0;
  }
  break;

 case 130:
  if (VAR_7->microcode_version != VAR_6) {
   FUNC_0("Invalid 3d packet for r100-class chip\n");
   return -VAR_0;
  }

  VAR_11 = FUNC_1(VAR_9->buffer, 1);
  if ((*VAR_11 & 0x8000ffff) != 0x80000810) {
   FUNC_0("Invalid indx_buffer reg address %08X\n", *VAR_11);
   return -VAR_0;
  }
  VAR_11 = FUNC_1(VAR_9->buffer, 2);
  if (FUNC_3(VAR_7, VAR_8, VAR_11)) {
   FUNC_0("Invalid indx_buffer offset is %08X\n", *VAR_11);
   return -VAR_0;
  }
  break;

 case 135:
 case 134:
 case 136:

  VAR_11 = FUNC_1(VAR_9->buffer, 1);
  if (*VAR_11 & (VAR_4
         | VAR_3)) {
   u32 *VAR_17 = FUNC_1(VAR_9->buffer, 2);
   VAR_12 = *VAR_17 << 10;
   if (FUNC_3
       (VAR_7, VAR_8, &VAR_12)) {
    FUNC_0("Invalid first packet offset\n");
    return -VAR_0;
   }
   *VAR_17 = (*VAR_17 & 0xffc00000) | VAR_12 >> 10;
  }

  if ((*VAR_11 & VAR_4) &&
      (*VAR_11 & VAR_3)) {
   u32 *VAR_18 = FUNC_1(VAR_9->buffer, 3);
   VAR_12 = *VAR_18 << 10;
   if (FUNC_3
       (VAR_7, VAR_8, &VAR_12)) {
    FUNC_0("Invalid second packet offset\n");
    return -VAR_0;
   }
   *VAR_18 = (*VAR_18 & 0xffc00000) | VAR_12 >> 10;
  }
  break;

 default:
  FUNC_0("Invalid packet type %x\n", *VAR_11 & 0xff00);
  return -VAR_0;
 }

 return 0;
}
