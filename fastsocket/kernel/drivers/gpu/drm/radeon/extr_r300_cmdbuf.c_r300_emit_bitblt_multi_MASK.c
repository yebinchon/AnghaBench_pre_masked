
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
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static __inline__ int FUNC_6(drm_radeon_private_t *VAR_5,
          drm_radeon_kcmd_buffer_t *VAR_6)
{
 u32 *VAR_7 = FUNC_4(VAR_6->buffer, 0);
 int VAR_8, VAR_9;
 VAR_4;


 VAR_8 = (*VAR_7 & VAR_1) >> 16;

 if (*VAR_7 & 0x8000) {
  u32 VAR_10;
  u32 *VAR_11 = FUNC_4(VAR_6->buffer, 1);
  if (*VAR_11 & (VAR_3
         | VAR_2)) {

   u32 *VAR_12 = FUNC_4(VAR_6->buffer, 2);
   VAR_10 = *VAR_12 << 10;
   VAR_9 = !FUNC_5(VAR_5, VAR_10);
   if (VAR_9) {
    FUNC_2("Invalid bitblt first offset is %08X\n", VAR_10);
    return -VAR_0;
   }
  }

  if ((*VAR_11 & VAR_3) &&
      (*VAR_11 & VAR_2)) {
   u32 *VAR_13 = FUNC_4(VAR_6->buffer, 3);
   VAR_10 = *VAR_13 << 10;
   VAR_9 = !FUNC_5(VAR_5, VAR_10);
   if (VAR_9) {
    FUNC_2("Invalid bitblt second offset is %08X\n", VAR_10);
    return -VAR_0;
   }

  }
 }

 FUNC_1(VAR_8+2);
 FUNC_3(VAR_6->buffer, VAR_8 + 2);
 FUNC_0();

 return 0;
}
