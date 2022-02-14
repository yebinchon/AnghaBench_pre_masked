
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_3__ {int chn; scalar_t__ filenum; } ;
typedef TYPE_1__ card_file ;
typedef int card_block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int **) ;
 int FUNC_1 (int *,int ) ;

s32 FUNC_2(card_file *VAR_6)
{
 s32 VAR_7;
 card_block *VAR_8 = ((void*)0);

 if(VAR_6->chn<VAR_4 || VAR_6->chn>=VAR_5) return VAR_0;
 if(VAR_6->filenum<0 || VAR_6->filenum>=VAR_3) return VAR_1;
 if((VAR_7=FUNC_0(VAR_6->chn,&VAR_8))<0) return VAR_7;

 VAR_6->chn = -1;
 FUNC_1(VAR_8,VAR_2);
 return VAR_2;
}
