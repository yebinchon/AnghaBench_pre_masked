
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {TYPE_3__* ops; TYPE_1__* rx; } ;
struct TYPE_6__ {TYPE_2__* lib; } ;
struct TYPE_5__ {scalar_t__ (* set_device_state ) (struct rt2x00_dev*,int ) ;} ;
struct TYPE_4__ {int data_size; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct rt2x00_dev *VAR_50)
{
 u32 VAR_51;

 FUNC_2(VAR_50, VAR_28, 0x00020002);
 FUNC_2(VAR_50, VAR_29, 0x00000002);
 FUNC_2(VAR_50, VAR_30, 0x00023f20);
 FUNC_2(VAR_50, VAR_31, 0x00000002);

 FUNC_1(VAR_50, VAR_46, &VAR_51);
 FUNC_0(&VAR_51, VAR_49, 33);
 FUNC_0(&VAR_51, VAR_48, 63);
 FUNC_0(&VAR_51, VAR_47, 0);
 FUNC_2(VAR_50, VAR_46, VAR_51);

 FUNC_1(VAR_50, VAR_21, &VAR_51);
 FUNC_0(&VAR_51, VAR_22,
      (VAR_50->rx->data_size / 128));
 FUNC_2(VAR_50, VAR_21, VAR_51);

 FUNC_1(VAR_50, VAR_9, &VAR_51);
 FUNC_0(&VAR_51, VAR_16, 0);
 FUNC_0(&VAR_51, VAR_17, 0);
 FUNC_0(&VAR_51, VAR_14, 0);
 FUNC_0(&VAR_51, VAR_15, 0);
 FUNC_0(&VAR_51, VAR_12, 0);
 FUNC_0(&VAR_51, VAR_10, 0);
 FUNC_0(&VAR_51, VAR_11, 0);
 FUNC_0(&VAR_51, VAR_13, 0);
 FUNC_2(VAR_50, VAR_9, VAR_51);

 FUNC_2(VAR_50, VAR_6, 0x3f080000);

 FUNC_1(VAR_50, VAR_0, &VAR_51);
 FUNC_0(&VAR_51, VAR_1, 133);
 FUNC_0(&VAR_51, VAR_3, 134);
 FUNC_0(&VAR_51, VAR_2, 136);
 FUNC_0(&VAR_51, VAR_4, 135);
 FUNC_2(VAR_50, VAR_0, VAR_51);

 FUNC_1(VAR_50, VAR_38, &VAR_51);
 FUNC_0(&VAR_51, VAR_39, 3);
 FUNC_0(&VAR_51, VAR_40, 1);
 FUNC_0(&VAR_51, VAR_41, 32);
 FUNC_0(&VAR_51, VAR_42, 1);
 FUNC_0(&VAR_51, VAR_43, 36);
 FUNC_0(&VAR_51, VAR_44, 1);
 FUNC_2(VAR_50, VAR_38, VAR_51);

 FUNC_2(VAR_50, VAR_32, 0x3f3b3100);

 if (VAR_50->ops->lib->set_device_state(VAR_50, VAR_45))
  return -VAR_23;

 FUNC_2(VAR_50, VAR_24, 0x00217223);
 FUNC_2(VAR_50, VAR_25, 0x00235518);

 FUNC_1(VAR_50, VAR_26, &VAR_51);
 FUNC_0(&VAR_51, VAR_27, 64);
 FUNC_2(VAR_50, VAR_26, VAR_51);

 FUNC_1(VAR_50, VAR_33, &VAR_51);
 FUNC_0(&VAR_51, VAR_34, 17);
 FUNC_0(&VAR_51, VAR_36, 154);
 FUNC_0(&VAR_51, VAR_35, 0);
 FUNC_0(&VAR_51, VAR_37, 154);
 FUNC_2(VAR_50, VAR_33, VAR_51);

 FUNC_1(VAR_50, VAR_8, &VAR_51);
 FUNC_0(&VAR_51, VAR_20, 1);
 FUNC_0(&VAR_51, VAR_18, 0);
 FUNC_0(&VAR_51, VAR_19, 0);
 FUNC_2(VAR_50, VAR_8, VAR_51);

 FUNC_1(VAR_50, VAR_8, &VAR_51);
 FUNC_0(&VAR_51, VAR_20, 0);
 FUNC_0(&VAR_51, VAR_19, 1);
 FUNC_2(VAR_50, VAR_8, VAR_51);






 FUNC_1(VAR_50, VAR_5, &VAR_51);
 FUNC_1(VAR_50, VAR_7, &VAR_51);

 return 0;
}
