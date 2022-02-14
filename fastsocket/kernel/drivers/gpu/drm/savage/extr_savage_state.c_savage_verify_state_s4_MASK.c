
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int texdescr; int texaddr1; int texaddr0; } ;
struct TYPE_8__ {TYPE_1__ s4; } ;
struct TYPE_9__ {TYPE_2__ state; } ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_10__ {int texaddr1; int texaddr0; int texdescr; int new_drawctrl1; int new_drawctrl0; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_6__ VAR_12 ;
 int FUNC_3 (TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_4(drm_savage_private_t * VAR_13,
      unsigned int VAR_14, unsigned int VAR_15,
      const uint32_t *VAR_16)
{
 int VAR_17 = 0;

 if (VAR_14 < VAR_3 ||
     VAR_14 + VAR_15 - 1 > VAR_7) {
  FUNC_0("invalid register range (0x%04x-0x%04x)\n",
     VAR_14, VAR_14 + VAR_15 - 1);
  return -VAR_0;
 }

 FUNC_2(VAR_1, VAR_12,
   ~VAR_4);
 FUNC_2(VAR_2, VAR_12,
   ~VAR_4);


 if (VAR_14 <= VAR_8 &&
     VAR_14 + VAR_15 > VAR_11) {

  FUNC_1(VAR_8, VAR_12);
  FUNC_1(VAR_5, VAR_12);
  FUNC_1(VAR_6, VAR_12);
  if (VAR_13->state.s4.texdescr & VAR_9)
   VAR_17 |= FUNC_3(VAR_13, 0,
      VAR_13->state.s4.texaddr0);
  if (VAR_13->state.s4.texdescr & VAR_10)
   VAR_17 |= FUNC_3(VAR_13, 1,
      VAR_13->state.s4.texaddr1);
 }

 return VAR_17;
}
