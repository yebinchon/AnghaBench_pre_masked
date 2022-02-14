
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int waiting; int chipset; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_8__ {unsigned int count; unsigned int start; scalar_t__ global; } ;
struct TYPE_10__ {TYPE_1__ state; } ;
typedef TYPE_3__ drm_savage_cmd_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (int const*,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_6 (TYPE_2__*,unsigned int,unsigned int,int const*) ;
 int FUNC_7 (TYPE_2__*,unsigned int,unsigned int,int const*) ;

__attribute__((used)) static int FUNC_8(drm_savage_private_t * VAR_7,
     const drm_savage_cmd_header_t * VAR_8,
     const uint32_t *VAR_9)
{
 unsigned int VAR_10 = VAR_8->state.count;
 unsigned int VAR_11 = VAR_8->state.start;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;
 int VAR_14;
 VAR_2;

 if (!VAR_10)
  return 0;

 if (FUNC_5(VAR_7->chipset)) {
  VAR_14 = FUNC_6(VAR_7, VAR_11, VAR_10, VAR_9);
  if (VAR_14 != 0)
   return VAR_14;

  if (VAR_11 < VAR_6) {
   if (VAR_11 + VAR_10 > VAR_5 + 1)
    VAR_12 = VAR_10 - (VAR_5 + 1 - VAR_11);
   if (VAR_11 + VAR_10 > VAR_6)
    VAR_10 = VAR_6 - VAR_11;
  } else if (VAR_11 <= VAR_5) {
   if (VAR_11 + VAR_10 > VAR_5 + 1) {
    VAR_10 -= VAR_5 + 1 - VAR_11;
    VAR_11 = VAR_5 + 1;
   } else
    return 0;
  }
 } else {
  VAR_14 = FUNC_7(VAR_7, VAR_11, VAR_10, VAR_9);
  if (VAR_14 != 0)
   return VAR_14;

  if (VAR_11 < VAR_3) {
   if (VAR_11 + VAR_10 > VAR_4 + 1)
    VAR_12 = VAR_10 -
      (VAR_4 + 1 - VAR_11);
   if (VAR_11 + VAR_10 > VAR_3)
    VAR_10 = VAR_3 - VAR_11;
  } else if (VAR_11 <= VAR_4) {
   if (VAR_11 + VAR_10 > VAR_4 + 1) {
    VAR_10 -= VAR_4 + 1 - VAR_11;
    VAR_11 = VAR_4 + 1;
   } else
    return 0;
  }
 }

 VAR_13 = VAR_10 + (VAR_10 + 254) / 255 + VAR_12 + (VAR_12 + 254) / 255;

 if (VAR_8->state.global) {
  FUNC_0(VAR_13 + 1);
  FUNC_4(VAR_0 | VAR_1);
  VAR_7->waiting = 1;
 } else {
  FUNC_0(VAR_13);
 }

 do {
  while (VAR_10 > 0) {
   unsigned int VAR_15 = VAR_10 < 255 ? VAR_10 : 255;
   FUNC_3(VAR_11, VAR_15);
   FUNC_2(VAR_9, VAR_15);
   VAR_10 -= VAR_15;
   VAR_11 += VAR_15;
   VAR_9 += VAR_15;
  }
  VAR_11 += 2;
  VAR_9 += 2;
  VAR_10 = VAR_12;
  VAR_12 = 0;
 } while (VAR_10);

 FUNC_1();

 return 0;
}
