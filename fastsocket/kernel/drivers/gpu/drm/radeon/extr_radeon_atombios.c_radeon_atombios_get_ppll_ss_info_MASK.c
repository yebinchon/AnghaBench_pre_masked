
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct radeon_mode_info {TYPE_2__* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct radeon_atom_ss {int refdiv; int range; int delay; int step; int type; int percentage; } ;
struct _ATOM_SPREAD_SPECTRUM_INFO {TYPE_1__* asSS_Info; } ;
struct TYPE_4__ {int bios; } ;
struct TYPE_3__ {int ucSS_Id; int ucRecommendedRef_Div; int ucSS_Range; int ucSS_Delay; int ucSS_Step; int ucSpreadSpectrumType; int usSpreadSpectrumPercentage; } ;
typedef int ATOM_SPREAD_SPECTRUM_ASSIGNMENT ;
typedef int ATOM_COMMON_TABLE_HEADER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int*,int *,int *,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_atom_ss*,int ,int) ;

bool FUNC_4(struct radeon_device *VAR_2,
          struct radeon_atom_ss *VAR_3,
          int VAR_4)
{
 struct radeon_mode_info *VAR_5 = &VAR_2->mode_info;
 int VAR_6 = FUNC_0(VAR_0, VAR_1);
 uint16_t VAR_7, VAR_8;
 struct _ATOM_SPREAD_SPECTRUM_INFO *VAR_9;
 uint8_t VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_3(VAR_3, 0, sizeof(struct radeon_atom_ss));
 if (FUNC_1(VAR_5->atom_context, VAR_6, &VAR_8,
       &VAR_10, &VAR_11, &VAR_7)) {
  VAR_9 =
   (struct _ATOM_SPREAD_SPECTRUM_INFO *)(VAR_5->atom_context->bios + VAR_7);

  VAR_13 = (VAR_8 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
   sizeof(ATOM_SPREAD_SPECTRUM_ASSIGNMENT);

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   if (VAR_9->asSS_Info[VAR_12].ucSS_Id == VAR_4) {
    VAR_3->percentage =
     FUNC_2(VAR_9->asSS_Info[VAR_12].usSpreadSpectrumPercentage);
    VAR_3->type = VAR_9->asSS_Info[VAR_12].ucSpreadSpectrumType;
    VAR_3->step = VAR_9->asSS_Info[VAR_12].ucSS_Step;
    VAR_3->delay = VAR_9->asSS_Info[VAR_12].ucSS_Delay;
    VAR_3->range = VAR_9->asSS_Info[VAR_12].ucSS_Range;
    VAR_3->refdiv = VAR_9->asSS_Info[VAR_12].ucRecommendedRef_Div;
    return 1;
   }
  }
 }
 return 0;
}
