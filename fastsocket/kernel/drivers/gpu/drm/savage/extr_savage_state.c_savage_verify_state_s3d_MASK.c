
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int texctrl; int texaddr; } ;
struct TYPE_8__ {TYPE_1__ s3d; } ;
struct TYPE_9__ {TYPE_2__ state; } ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_10__ {int texaddr; int texctrl; int new_scend; int new_scstart; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_6__ VAR_9 ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(drm_savage_private_t * VAR_10,
       unsigned int VAR_11, unsigned int VAR_12,
       const uint32_t *VAR_13)
{
 if (VAR_11 < VAR_8 ||
     VAR_11 + VAR_12 - 1 > VAR_1) {
  FUNC_0("invalid register range (0x%04x-0x%04x)\n",
     VAR_11, VAR_11 + VAR_12 - 1);
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_9.new_scstart,
   ~VAR_3);
 FUNC_2(VAR_2, VAR_9.new_scend,
   ~VAR_3);


 if (VAR_11 <= VAR_6 &&
     VAR_11 + VAR_12 > VAR_8) {

  FUNC_1(VAR_6, VAR_9.texctrl);
  FUNC_1(VAR_5, VAR_9.texaddr);
  if (VAR_10->state.s3d.texctrl & VAR_7)
   return FUNC_3(VAR_10, 0,
      VAR_10->state.s3d.texaddr);
 }

 return 0;
}
