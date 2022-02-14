
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int z_streamp ;
typedef int uInt ;
struct inflate_blocks_state {int dummy; } ;
struct TYPE_9__ {int mode; int checkfn; struct TYPE_9__* window; struct TYPE_9__* end; struct TYPE_9__* hufts; } ;
typedef TYPE_1__ inflate_huft ;
typedef TYPE_1__ inflate_blocks_statef ;
typedef int check_func ;
typedef TYPE_1__ Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_1__*) ;

inflate_blocks_statef *FUNC_4(z_streamp VAR_3, check_func VAR_4, uInt VAR_5)
{
  inflate_blocks_statef *VAR_6;

  if ((VAR_6 = (inflate_blocks_statef *)FUNC_1
       (VAR_3,1,sizeof(struct inflate_blocks_state))) == VAR_2)
    return VAR_6;
  if ((VAR_6->hufts =
       (inflate_huft *)FUNC_1(VAR_3, sizeof(inflate_huft), VAR_0)) == VAR_2)
  {
    FUNC_2(VAR_3, VAR_6);
    return VAR_2;
  }
  if ((VAR_6->window = (Byte *)FUNC_1(VAR_3, 1, VAR_5)) == VAR_2)
  {
    FUNC_2(VAR_3, VAR_6->hufts);
    FUNC_2(VAR_3, VAR_6);
    return VAR_2;
  }
  VAR_6->end = VAR_6->window + VAR_5;
  VAR_6->checkfn = VAR_4;
  VAR_6->mode = VAR_1;
  FUNC_0(("inflate:   blocks allocated\n"));
  FUNC_3(VAR_6, VAR_3, VAR_2);
  return VAR_6;
}
