
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int channels_info; } ;
struct rt2x00_dev {TYPE_2__ spec; TYPE_4__* hw; int flags; } ;
struct TYPE_8__ {TYPE_1__* wiphy; } ;
struct TYPE_7__ {int bitrates; int channels; } ;
struct TYPE_5__ {TYPE_3__** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_3)
{
 if (FUNC_3(VAR_0, &VAR_3->flags))
  FUNC_0(VAR_3->hw);

 if (FUNC_2(VAR_3->hw->wiphy->bands[VAR_1])) {
  FUNC_1(VAR_3->hw->wiphy->bands[VAR_1]->channels);
  FUNC_1(VAR_3->hw->wiphy->bands[VAR_1]->bitrates);
  VAR_3->hw->wiphy->bands[VAR_1] = ((void*)0);
  VAR_3->hw->wiphy->bands[VAR_2] = ((void*)0);
 }

 FUNC_1(VAR_3->spec.channels_info);
}
