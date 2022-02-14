
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int stack_ptr_addr ;
struct TYPE_9__ {scalar_t__* scratch_ages; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_10__ {int buffer; } ;
typedef TYPE_3__ drm_radeon_kcmd_buffer_t ;
struct TYPE_8__ {int n_bufs; int reg; } ;
struct TYPE_11__ {TYPE_1__ scratch; } ;
typedef TYPE_4__ drm_r300_cmd_header_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int) ;
 scalar_t__* FUNC_7 (int ,int ) ;
 int * FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(drm_radeon_private_t *VAR_3,
   drm_radeon_kcmd_buffer_t *VAR_4,
   drm_r300_cmd_header_t VAR_5)
{
 u32 *VAR_6;
 u32 VAR_7, *VAR_8, VAR_9;
 u64 *VAR_10;
 u64 VAR_11;
 VAR_2;

 if (FUNC_9(VAR_4->buffer) <
     (sizeof(u64) + VAR_5.scratch.n_bufs * sizeof(*VAR_8))) {
  return -VAR_0;
 }

 if (VAR_5.scratch.reg >= 5) {
  return -VAR_0;
 }

 VAR_3->scratch_ages[VAR_5.scratch.reg]++;

 VAR_10 = FUNC_8(VAR_4->buffer,
   sizeof(VAR_11), &VAR_11);
 VAR_6 = (u32 *)(unsigned long)FUNC_10(VAR_10);

 for (VAR_7=0; VAR_7 < VAR_5.scratch.n_bufs; VAR_7++) {
  VAR_8 = FUNC_7(VAR_4->buffer, 0);
  *VAR_8 *= 2;

  if (FUNC_4(VAR_6 + *VAR_8,
    &VAR_3->scratch_ages[VAR_5.scratch.reg],
    sizeof(u32)))
   return -VAR_0;

  if (FUNC_3(&VAR_9,
    VAR_6 + *VAR_8 + 1,
    sizeof(u32)))
   return -VAR_0;

  if (VAR_9 == 0)
   return -VAR_0;

  VAR_9--;

  if (FUNC_4(VAR_6 + *VAR_8 + 1,
     &VAR_9,
     sizeof(u32)))
   return -VAR_0;

  FUNC_6(VAR_4->buffer, sizeof(*VAR_8));
 }

 FUNC_1(2);
 FUNC_5( FUNC_2( VAR_1 + VAR_5.scratch.reg * 4, 0 ) );
 FUNC_5( VAR_3->scratch_ages[VAR_5.scratch.reg] );
 FUNC_0();

 return 0;
}
