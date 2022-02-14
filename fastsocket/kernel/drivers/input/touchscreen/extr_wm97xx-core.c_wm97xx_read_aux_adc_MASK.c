
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {scalar_t__ id; int pen_probably_down; int codec_mutex; TYPE_1__* codec; } ;
struct TYPE_2__ {int (* dig_restore ) (struct wm97xx*) ;int (* poll_sample ) (struct wm97xx*,int,int*) ;int (* aux_prepare ) (struct wm97xx*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm97xx*) ;
 int FUNC_3 (struct wm97xx*,int,int*) ;
 int FUNC_4 (struct wm97xx*) ;
 int FUNC_5 (struct wm97xx*,int ) ;
 int FUNC_6 (struct wm97xx*,int ,int) ;

int FUNC_7(struct wm97xx *VAR_2, u16 VAR_3)
{
 int VAR_4 = 0, VAR_5;
 u16 VAR_6 = 0;


 FUNC_0(&VAR_2->codec_mutex);




 if (VAR_2->id == VAR_1 &&
     (VAR_6 = FUNC_5(VAR_2, VAR_0)) & 0x8000) {
  VAR_4 = 1;
  FUNC_6(VAR_2, VAR_0, VAR_6 & 0x7fff);
 }


 VAR_2->codec->aux_prepare(VAR_2);


 VAR_2->pen_probably_down = 1;
 VAR_2->codec->poll_sample(VAR_2, VAR_3, &VAR_5);

 if (VAR_4)
  FUNC_6(VAR_2, VAR_0, VAR_6 | 0x8000);

 VAR_2->codec->dig_restore(VAR_2);

 VAR_2->pen_probably_down = 0;

 FUNC_1(&VAR_2->codec_mutex);
 return VAR_5 & 0xfff;
}
