
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
typedef enum antenna { ____Placeholder_antenna } antenna ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt2x00_dev*,int ,int,int,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_7,
         enum antenna VAR_8)
{
 u32 VAR_9;
 u8 VAR_10 = (VAR_8 == VAR_0) ? 1 : 0;
 u8 VAR_11 = (VAR_8 == VAR_0) ? 0 : 1;

 if (FUNC_3(VAR_7)) {
  FUNC_1(VAR_7, VAR_1, &VAR_9);
  FUNC_5(&VAR_9, VAR_2, VAR_10);
  FUNC_2(VAR_7, VAR_1, VAR_9);
 } else if (FUNC_4(VAR_7))
  FUNC_0(VAR_7, VAR_6, 0xff,
       VAR_10, 0);

 FUNC_1(VAR_7, VAR_3, &VAR_9);
 FUNC_5(&VAR_9, VAR_4, 0);
 FUNC_5(&VAR_9, VAR_5, VAR_11);
 FUNC_2(VAR_7, VAR_3, VAR_9);
}
