
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ rx_chain_num; } ;
struct rt2x00_dev {TYPE_1__ default_ant; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,int,scalar_t__*) ;
 int FUNC_1 (struct rt2x00_dev*,unsigned int const,scalar_t__ const) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_1,
        const unsigned int VAR_2,
        const u8 VAR_3)
{
 u8 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->default_ant.rx_chain_num; VAR_4++) {
  FUNC_0(VAR_1, 27, &VAR_5);
  FUNC_2(&VAR_5, VAR_0, VAR_4);
  FUNC_1(VAR_1, 27, VAR_5);

  FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
