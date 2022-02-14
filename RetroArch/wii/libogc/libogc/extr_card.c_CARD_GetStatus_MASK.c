
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct card_direntry {int length; int commentaddr; int iconspeed; int iconfmt; int iconaddr; int bannerfmt; int lastmodified; int filename; int company; int gamecode; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef scalar_t__ s32 ;
struct TYPE_8__ {int len; int comment_addr; int icon_speed; int icon_fmt; int icon_addr; int banner_fmt; int time; int filename; int company; int gamecode; } ;
typedef TYPE_1__ card_stat ;
struct TYPE_9__ {int sector_size; } ;
typedef TYPE_2__ card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_2__**) ;
 struct card_dat* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct card_direntry*,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int) ;

s32 FUNC_5(s32 VAR_7,s32 VAR_8,card_stat *VAR_9)
{
 s32 VAR_10;
 card_block *VAR_11 = ((void*)0);
 struct card_dat *VAR_12 = ((void*)0);
 struct card_direntry *VAR_13 = ((void*)0);

 if(VAR_7<VAR_5 || VAR_7>=VAR_6) return VAR_1;
 if(VAR_8<0 || VAR_8>=VAR_4) return VAR_0;

 if((VAR_10=FUNC_0(VAR_7,&VAR_11))<0) return VAR_10;

 VAR_12 = FUNC_1(VAR_11);
 if(VAR_12) {
  VAR_13 = &VAR_12->entries[VAR_8];
  FUNC_4(VAR_9->gamecode,VAR_13->gamecode,4);
  FUNC_4(VAR_9->company,VAR_13->company,2);
  FUNC_4(VAR_9->filename,VAR_13->filename,VAR_3);
  VAR_9->len = VAR_13->length*VAR_11->sector_size;
  VAR_9->time = VAR_13->lastmodified;
  VAR_9->banner_fmt = VAR_13->bannerfmt;
  VAR_9->icon_addr = VAR_13->iconaddr;
  VAR_9->icon_fmt = VAR_13->iconfmt;
  VAR_9->icon_speed = VAR_13->iconspeed;
  VAR_9->comment_addr = VAR_13->commentaddr;
  FUNC_3(VAR_13,VAR_9);
 }

 return FUNC_2(VAR_11,VAR_2);
}
