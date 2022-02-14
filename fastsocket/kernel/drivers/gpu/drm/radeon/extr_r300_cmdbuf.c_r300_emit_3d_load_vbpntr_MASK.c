
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int drm_radeon_private_t ;
struct TYPE_3__ {int buffer; } ;
typedef TYPE_1__ drm_radeon_kcmd_buffer_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int) ;
 int* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static __inline__ int FUNC_8(drm_radeon_private_t *VAR_4,
            drm_radeon_kcmd_buffer_t *VAR_5,
            u32 VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 u32 *VAR_10;
 u32 VAR_11;
 VAR_3;

 VAR_7 = (VAR_6 & VAR_2) >> 16;

 if ((VAR_7 + 1) > 64) {
  FUNC_2("Too large payload in 3D_LOAD_VBPNTR (count=%d)\n",
     VAR_7);
  return -VAR_0;
 }



 FUNC_5(VAR_5->buffer, 4);

 VAR_11 = *(u32 *)FUNC_6(VAR_5->buffer, 0);
 VAR_9 = 0;
 VAR_8 = 1;
 while ((VAR_9 < VAR_11) && (VAR_8 < (VAR_7 + 1))) {
  VAR_8++;
  VAR_10 = FUNC_6(VAR_5->buffer, VAR_8);
  if (!FUNC_7(VAR_4, *VAR_10)) {
   FUNC_2
       ("Offset failed range check (k=%d i=%d) while processing 3D_LOAD_VBPNTR packet.\n",
        VAR_9, VAR_8);
   return -VAR_0;
  }
  VAR_9++;
  VAR_8++;
  if (VAR_9 == VAR_11)
   break;

  VAR_10 = FUNC_6(VAR_5->buffer, VAR_8);
  if (!FUNC_7(VAR_4, *VAR_10)) {
   FUNC_2
       ("Offset failed range check (k=%d i=%d) while processing 3D_LOAD_VBPNTR packet.\n",
        VAR_9, VAR_8);
   return -VAR_0;
  }
  VAR_9++;
  VAR_8++;
 }

 if ((VAR_9 != VAR_11) || (VAR_8 != (VAR_7 + 1))) {
  FUNC_2
      ("Malformed 3D_LOAD_VBPNTR packet (k=%d i=%d narrays=%d count+1=%d).\n",
       VAR_9, VAR_8, VAR_11, VAR_7 + 1);
  return -VAR_0;
 }



 FUNC_1(VAR_7 + 2);
 FUNC_3(VAR_6);
 FUNC_4(VAR_5->buffer, VAR_7 + 1);
 FUNC_0();

 return 0;
}
