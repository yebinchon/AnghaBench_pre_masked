
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pre_emphasis; } ;
struct poseidon {TYPE_1__ radio_data; int udev; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct poseidon*,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct poseidon*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct poseidon *VAR_13)
{
 int VAR_14;
 u32 VAR_15;

 FUNC_2(VAR_5);
 FUNC_0(VAR_3/2);
 VAR_14 = FUNC_4(VAR_13->udev, 0, VAR_2);
 if (VAR_14 < 0)
  goto out;

 VAR_14 = FUNC_3(VAR_13, VAR_6);
 if (VAR_14 != 0)
  goto out;

 VAR_14 = FUNC_1(VAR_13, VAR_4, VAR_7, &VAR_15);
 VAR_14 = FUNC_1(VAR_13, VAR_9,
    VAR_13->radio_data.pre_emphasis, &VAR_15);
 VAR_14 |= FUNC_1(VAR_13, VAR_10,
    VAR_8, &VAR_15);
 VAR_14 |= FUNC_1(VAR_13, VAR_1,
    VAR_0, &VAR_15);
 VAR_14 |= FUNC_1(VAR_13, VAR_12, VAR_11, &VAR_15);
out:
 return VAR_14;
}
