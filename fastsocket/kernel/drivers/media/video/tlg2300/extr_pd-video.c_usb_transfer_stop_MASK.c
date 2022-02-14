
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {scalar_t__* urb_array; scalar_t__ is_streaming; struct poseidon* pd; } ;
struct poseidon {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct poseidon*,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct video_data *VAR_3)
{
 if (VAR_3->is_streaming) {
  int VAR_4;
  s32 VAR_5;
  struct poseidon *VAR_6 = VAR_3->pd;

  VAR_3->is_streaming = 0;
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   if (VAR_3->urb_array[VAR_4])
    FUNC_1(VAR_3->urb_array[VAR_4]);
  }

  FUNC_0(VAR_6, VAR_0, VAR_2,
          &VAR_5);
 }
 return 0;
}
