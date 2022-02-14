
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int rssi_offset; int cap_flags; } ;


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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (int *,int ,int) ;

int FUNC_11(struct rt2x00_dev *VAR_15)
{
 int VAR_16;
 u32 VAR_17;

 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16)
  return VAR_16;




 VAR_16 = FUNC_7(VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16)
  return VAR_16;





 FUNC_5(VAR_15, VAR_6, &VAR_17);
 FUNC_10(&VAR_17, VAR_7, 1);
 FUNC_6(VAR_15, VAR_6, VAR_17);




 VAR_16 = FUNC_3(VAR_15);
 if (VAR_16)
  return VAR_16;




 FUNC_0(VAR_0, &VAR_15->cap_flags);
 FUNC_0(VAR_1, &VAR_15->cap_flags);
 if (!FUNC_9(VAR_15))
  FUNC_0(VAR_4, &VAR_15->cap_flags);




 if (!FUNC_8(VAR_15))
  FUNC_0(VAR_9, &VAR_15->cap_flags);
 FUNC_0(VAR_11, &VAR_15->cap_flags);
 FUNC_0(VAR_14, &VAR_15->cap_flags);
 if (!FUNC_1(VAR_15))
  FUNC_0(VAR_2, &VAR_15->cap_flags);
 FUNC_0(VAR_3, &VAR_15->cap_flags);
 FUNC_0(VAR_10, &VAR_15->cap_flags);
 if (FUNC_9(VAR_15))
  FUNC_0(VAR_12, &VAR_15->cap_flags);
 else {
  FUNC_0(VAR_8, &VAR_15->cap_flags);
  FUNC_0(VAR_13, &VAR_15->cap_flags);
 }




 VAR_15->rssi_offset = VAR_5;

 return 0;
}
