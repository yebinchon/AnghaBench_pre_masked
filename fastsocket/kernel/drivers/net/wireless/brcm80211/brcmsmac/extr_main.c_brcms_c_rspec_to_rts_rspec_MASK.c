
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {TYPE_2__* stf; TYPE_3__* band; TYPE_1__* protection; } ;
struct TYPE_6__ {scalar_t__ gmode; } ;
struct TYPE_5__ {int ss_opmode; } ;
struct TYPE_4__ {scalar_t__ _g; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcms_c_info*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

u32
FUNC_5(struct brcms_c_info *VAR_6, u32 VAR_7,
      bool VAR_8, u16 VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_8)

  VAR_10 = VAR_7;
 else if (VAR_6->band->gmode && VAR_6->protection->_g && !FUNC_2(VAR_7))







  VAR_10 = FUNC_1(VAR_6, VAR_0);
 else




  VAR_10 = FUNC_1(VAR_6, VAR_7);

 if (FUNC_0(VAR_6->band)) {

  VAR_10 &= ~VAR_2;





  if (FUNC_4(VAR_7) && !FUNC_2(VAR_10))
   VAR_10 |= (VAR_1 << VAR_3);
  else
   VAR_10 |= (VAR_9 << VAR_3);


  if (FUNC_3(VAR_10)) {
   VAR_10 &= ~VAR_4;
   VAR_10 |= (VAR_6->stf->ss_opmode << VAR_5);
  }
 }
 return VAR_10;
}
