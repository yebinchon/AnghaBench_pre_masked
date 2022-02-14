
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tvnormid; } ;
struct TYPE_4__ {TYPE_1__ context; } ;
struct poseidon {TYPE_2__ video_data; scalar_t__ cur_transfer_mode; int udev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct poseidon*,int ,int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct poseidon*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct poseidon *VAR_21)
{
 s32 VAR_22 = 0, VAR_23, VAR_24;

 FUNC_3(VAR_6);
 FUNC_1(VAR_3/2);


 VAR_22 = FUNC_5(VAR_21->udev, 0,
     (VAR_21->cur_transfer_mode ?
      VAR_4 :
      VAR_2));
 if (VAR_22 < 0)
  goto error;


 VAR_22 = FUNC_4(VAR_21, VAR_7);
 VAR_22 |= FUNC_2(VAR_21, VAR_5,
    VAR_8, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_19,
    VAR_12, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_20,
    VAR_9, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_18,
    VAR_11, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_16, VAR_15, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_17, 1, &VAR_23);


 VAR_24 = FUNC_0(VAR_21->video_data.context.tvnormid);
 VAR_22 |= FUNC_2(VAR_21, VAR_13, VAR_24, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_14,
    VAR_10, &VAR_23);
 VAR_22 |= FUNC_2(VAR_21, VAR_1,
    VAR_0, &VAR_23);
error:
 return VAR_22;
}
