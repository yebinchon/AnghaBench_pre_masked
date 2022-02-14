
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
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
 int FUNC_0 (int ,int *) ;
 int VAR_9 ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_10)
{
 int VAR_11;
 u16 VAR_12;




 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11)
  return VAR_11;





 FUNC_3(VAR_10, VAR_2, &VAR_12);
 FUNC_6(&VAR_12, VAR_3, 0);
 FUNC_4(VAR_10, VAR_2, VAR_12);




 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11)
  return VAR_11;




 FUNC_0(VAR_4, &VAR_10->cap_flags);
 FUNC_0(VAR_5, &VAR_10->cap_flags);
 if (!VAR_9) {
  FUNC_0(VAR_0, &VAR_10->cap_flags);
  FUNC_0(VAR_6, &VAR_10->cap_flags);
 }
 FUNC_0(VAR_8, &VAR_10->cap_flags);
 FUNC_0(VAR_7, &VAR_10->cap_flags);




 VAR_10->rssi_offset = VAR_1;

 return 0;
}
