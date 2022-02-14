
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct card_direntry {int iconaddr; int iconfmt; int commentaddr; int lastmodified; int iconspeed; int bannerfmt; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef scalar_t__ s32 ;
typedef int cardcallback ;
struct TYPE_4__ {int icon_addr; int comment_addr; int icon_fmt; int icon_speed; int banner_fmt; } ;
typedef TYPE_1__ card_stat ;
typedef int card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,int **) ;
 struct card_dat* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct card_direntry*,TYPE_1__*) ;
 int FUNC_5 (int *) ;

s32 FUNC_6(s32 VAR_9,s32 VAR_10,card_stat *VAR_11,cardcallback VAR_12)
{
 s32 VAR_13;
 card_block *VAR_14 = ((void*)0);
 struct card_dat *VAR_15 = ((void*)0);
 struct card_direntry *VAR_16 = ((void*)0);

 if(VAR_9<VAR_7 || VAR_9>=VAR_8) return VAR_2;
 if(VAR_10<0 || VAR_10>=VAR_5) return VAR_1;
 if(VAR_11->icon_addr!=-1 && VAR_11->icon_addr>VAR_6) return VAR_1;
 if(VAR_11->comment_addr!=-1 && VAR_11->comment_addr>8128) return VAR_1;
 if((VAR_13=FUNC_0(VAR_9,&VAR_14))<0) return VAR_13;

 VAR_13 = VAR_0;
 VAR_15 = FUNC_1(VAR_14);
 if(VAR_15) {
  VAR_16 = &VAR_15->entries[VAR_10];
  VAR_16->bannerfmt = VAR_11->banner_fmt;
  VAR_16->iconaddr = VAR_11->icon_addr;
  VAR_16->iconfmt = VAR_11->icon_fmt;
  VAR_16->iconspeed = VAR_11->icon_speed;
  VAR_16->commentaddr = VAR_11->comment_addr;
  FUNC_4(VAR_16,VAR_11);

  if(VAR_16->iconaddr==-1) VAR_16->iconfmt = ((VAR_16->iconfmt&~VAR_4)|VAR_3);

  VAR_16->lastmodified = FUNC_5(((void*)0));
  if((VAR_13=FUNC_3(VAR_9,VAR_12))>=0) return VAR_13;
 }

 return FUNC_2(VAR_14,VAR_13);
}
