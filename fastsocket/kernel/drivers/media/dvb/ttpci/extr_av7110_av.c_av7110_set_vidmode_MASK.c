
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av7110 {int * pids; int playing; } ;
typedef enum av7110_video_mode { ____Placeholder_av7110_video_mode } av7110_video_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct av7110*,int ,int ,int ,int ,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct av7110*,int ,int ,int,...) ;
 int FUNC_2 (int,char*,struct av7110*) ;

int FUNC_3(struct av7110 *VAR_8, enum av7110_video_mode VAR_9)
{
 int VAR_10;
 FUNC_2(2, "av7110:%p, \n", VAR_8);

 VAR_10 = FUNC_1(VAR_8, VAR_0, VAR_6, 1, VAR_9);

 if (!VAR_10 && !VAR_8->playing) {
  VAR_10 = FUNC_0(VAR_8, VAR_8->pids[VAR_5],
      VAR_8->pids[VAR_2],
      VAR_8->pids[VAR_4],
      0, VAR_8->pids[VAR_3]);
  if (!VAR_10)
   VAR_10 = FUNC_1(VAR_8, VAR_1, VAR_7, 0);
 }
 return VAR_10;
}
