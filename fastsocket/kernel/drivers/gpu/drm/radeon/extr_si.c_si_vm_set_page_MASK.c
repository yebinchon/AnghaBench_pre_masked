
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {int* ptr; int length_dw; } ;
struct radeon_device {TYPE_2__* asic; } ;
struct TYPE_3__ {scalar_t__ pt_ring_index; } ;
struct TYPE_4__ {TYPE_1__ vm; } ;


 void* FUNC_0 (int ,int ,int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct radeon_device *VAR_6,
      struct radeon_ib *VAR_7,
      uint64_t VAR_8,
      uint64_t VAR_9, unsigned VAR_10,
      uint32_t VAR_11, uint32_t VAR_12)
{
 uint32_t VAR_13 = FUNC_5(VAR_6, VAR_12);
 uint64_t VAR_14;
 unsigned VAR_15;

 if (VAR_6->asic->vm.pt_ring_index == VAR_3) {
  while (VAR_10) {
   VAR_15 = 2 + VAR_10 * 2;
   if (VAR_15 > 0x3FFE)
    VAR_15 = 0x3FFE;

   VAR_7->ptr[VAR_7->length_dw++] = FUNC_2(VAR_2, VAR_15);
   VAR_7->ptr[VAR_7->length_dw++] = (FUNC_4(0) |
     FUNC_3(1));
   VAR_7->ptr[VAR_7->length_dw++] = VAR_8;
   VAR_7->ptr[VAR_7->length_dw++] = FUNC_7(VAR_8);
   for (; VAR_15 > 2; VAR_15 -= 2, --VAR_10, VAR_8 += 8) {
    if (VAR_12 & VAR_4) {
     VAR_14 = FUNC_6(VAR_6, VAR_9);
     VAR_14 &= 0xFFFFFFFFFFFFF000ULL;
    } else if (VAR_12 & VAR_5) {
     VAR_14 = VAR_9;
    } else {
     VAR_14 = 0;
    }
    VAR_9 += VAR_11;
    VAR_14 |= VAR_13;
    VAR_7->ptr[VAR_7->length_dw++] = VAR_14;
    VAR_7->ptr[VAR_7->length_dw++] = FUNC_7(VAR_14);
   }
  }
 } else {

  if (VAR_12 & VAR_4) {
   while (VAR_10) {
    VAR_15 = VAR_10 * 2;
    if (VAR_15 > 0xFFFFE)
     VAR_15 = 0xFFFFE;


    VAR_7->ptr[VAR_7->length_dw++] = FUNC_0(VAR_1, 0, 0, 0, VAR_15);
    VAR_7->ptr[VAR_7->length_dw++] = VAR_8;
    VAR_7->ptr[VAR_7->length_dw++] = FUNC_7(VAR_8) & 0xff;
    for (; VAR_15 > 0; VAR_15 -= 2, --VAR_10, VAR_8 += 8) {
     if (VAR_12 & VAR_4) {
      VAR_14 = FUNC_6(VAR_6, VAR_9);
      VAR_14 &= 0xFFFFFFFFFFFFF000ULL;
     } else if (VAR_12 & VAR_5) {
      VAR_14 = VAR_9;
     } else {
      VAR_14 = 0;
     }
     VAR_9 += VAR_11;
     VAR_14 |= VAR_13;
     VAR_7->ptr[VAR_7->length_dw++] = VAR_14;
     VAR_7->ptr[VAR_7->length_dw++] = FUNC_7(VAR_14);
    }
   }
  } else {
   while (VAR_10) {
    VAR_15 = VAR_10 * 2;
    if (VAR_15 > 0xFFFFE)
     VAR_15 = 0xFFFFE;

    if (VAR_12 & VAR_5)
     VAR_14 = VAR_9;
    else
     VAR_14 = 0;

    VAR_7->ptr[VAR_7->length_dw++] = FUNC_1(VAR_15);
    VAR_7->ptr[VAR_7->length_dw++] = VAR_8;
    VAR_7->ptr[VAR_7->length_dw++] = FUNC_7(VAR_8) & 0xff;
    VAR_7->ptr[VAR_7->length_dw++] = VAR_13;
    VAR_7->ptr[VAR_7->length_dw++] = 0;
    VAR_7->ptr[VAR_7->length_dw++] = VAR_14;
    VAR_7->ptr[VAR_7->length_dw++] = FUNC_7(VAR_14);
    VAR_7->ptr[VAR_7->length_dw++] = VAR_11;
    VAR_7->ptr[VAR_7->length_dw++] = 0;
    VAR_8 += VAR_15 * 4;
    VAR_9 += (VAR_15 / 2) * VAR_11;
    VAR_10 -= VAR_15 / 2;
   }
  }
  while (VAR_7->length_dw & 0x7)
   VAR_7->ptr[VAR_7->length_dw++] = FUNC_0(VAR_0, 0, 0, 0, 0);
 }
}
