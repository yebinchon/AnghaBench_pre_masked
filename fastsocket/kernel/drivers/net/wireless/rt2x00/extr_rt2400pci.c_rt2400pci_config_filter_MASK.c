
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int intf_ap_count; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_11,
        const unsigned int VAR_12)
{
 u32 VAR_13;






 FUNC_1(VAR_11, VAR_4, &VAR_13);
 FUNC_0(&VAR_13, VAR_6,
      !(VAR_12 & VAR_1));
 FUNC_0(&VAR_13, VAR_8,
      !(VAR_12 & VAR_2));
 FUNC_0(&VAR_13, VAR_5,
      !(VAR_12 & VAR_0));
 FUNC_0(&VAR_13, VAR_7,
      !(VAR_12 & VAR_3));
 FUNC_0(&VAR_13, VAR_9,
      !(VAR_12 & VAR_3) &&
      !VAR_11->intf_ap_count);
 FUNC_0(&VAR_13, VAR_10, 1);
 FUNC_2(VAR_11, VAR_4, VAR_13);
}
