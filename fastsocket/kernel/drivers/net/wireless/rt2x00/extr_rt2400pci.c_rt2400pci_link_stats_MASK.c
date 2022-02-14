
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {int false_cca; int rx_failed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2x00_dev*,int,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_2,
     struct link_qual *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5;




 FUNC_2(VAR_2, VAR_0, &VAR_4);
 VAR_3->rx_failed = FUNC_1(VAR_4, VAR_1);




 FUNC_0(VAR_2, 39, &VAR_5);
 VAR_3->false_cca = VAR_5;
}
