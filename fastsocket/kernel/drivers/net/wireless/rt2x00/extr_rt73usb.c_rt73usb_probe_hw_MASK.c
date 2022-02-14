
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
 int FUNC_0 (int ,int *) ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_9)
{
 int VAR_10;
 u32 VAR_11;




 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  return VAR_10;





 FUNC_2(VAR_9, VAR_4, &VAR_11);
 FUNC_1(&VAR_11, VAR_5, 0);
 FUNC_3(VAR_9, VAR_4, VAR_11);




 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  return VAR_10;





 FUNC_0(VAR_0, &VAR_9->cap_flags);




 FUNC_0(VAR_6, &VAR_9->cap_flags);
 if (!VAR_8)
  FUNC_0(VAR_1, &VAR_9->cap_flags);
 FUNC_0(VAR_2, &VAR_9->cap_flags);
 FUNC_0(VAR_7, &VAR_9->cap_flags);




 VAR_9->rssi_offset = VAR_3;

 return 0;
}
