
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_c_info {TYPE_5__* default_bss; TYPE_4__** bandstate; TYPE_2__* pub; TYPE_1__* stf; } ;
typedef scalar_t__ s32 ;
struct TYPE_12__ {int mcs; } ;
struct TYPE_11__ {TYPE_6__ rateset; int flags; } ;
struct TYPE_9__ {int mcs; } ;
struct TYPE_10__ {TYPE_3__ hw_rateset; } ;
struct TYPE_8__ {size_t _nbands; int _n_enab; } ;
struct TYPE_7__ {scalar_t__ txstreams; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int FUNC_1 (struct brcms_c_info*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct brcms_c_info *VAR_8)
{
 uint VAR_9;
 s32 VAR_10 = VAR_0;

 if (VAR_8->stf->txstreams == VAR_7)
  VAR_10 = VAR_7;
 else
  VAR_10 = VAR_6;


 FUNC_1(VAR_8, VAR_2, 1);
 if (VAR_10 == VAR_7)
  VAR_8->pub->_n_enab = VAR_5;
 else
  VAR_8->pub->_n_enab = VAR_4;
 VAR_8->default_bss->flags |= VAR_1;

 FUNC_0(&VAR_8->default_bss->rateset,
         VAR_8->stf->txstreams);
 for (VAR_9 = 0; VAR_9 < VAR_8->pub->_nbands; VAR_9++)
  FUNC_2(VAR_8->bandstate[VAR_9]->hw_rateset.mcs,
         VAR_8->default_bss->rateset.mcs, VAR_3);

 return 0;
}
