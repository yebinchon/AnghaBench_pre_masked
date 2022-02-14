
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int bubble_work; } ;
struct poseidon {scalar_t__ cur_transfer_mode; struct video_data video_data; } ;
typedef int s32 ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct video_data*) ;
 int VAR_3 ;
 int FUNC_2 (struct video_data*) ;
 int FUNC_3 (struct video_data*) ;
 int FUNC_4 (struct poseidon*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct poseidon *VAR_4)
{
 struct video_data *VAR_5 = &VAR_4->video_data;
 s32 VAR_6;

 FUNC_4(VAR_4, VAR_1, 0, &VAR_6);
 FUNC_4(VAR_4, VAR_0, VAR_2, &VAR_6);

 if (VAR_4->cur_transfer_mode) {
  FUNC_3(VAR_5);
  FUNC_0(&VAR_5->bubble_work, VAR_3);
 } else {

  FUNC_2(VAR_5);
 }
 FUNC_1(VAR_5);
 return 0;
}
