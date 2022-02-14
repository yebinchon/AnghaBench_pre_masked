
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_4__ {int showall; scalar_t__* company; scalar_t__* gamecode; scalar_t__* filename; scalar_t__ filelen; scalar_t__ fileno; int chn; } ;
typedef TYPE_1__ card_dir ;


 int FUNC_0 (TYPE_1__*) ;

s32 FUNC_1(s32 VAR_0, card_dir *VAR_1, bool VAR_2)
{

 VAR_1->chn = VAR_0;
 VAR_1->fileno = 0;
 VAR_1->filelen = 0;
 VAR_1->filename[0] = 0;
 VAR_1->gamecode[0] = 0;
 VAR_1->company[0] = 0;
 VAR_1->showall = VAR_2;
 return FUNC_0(VAR_1);
}
