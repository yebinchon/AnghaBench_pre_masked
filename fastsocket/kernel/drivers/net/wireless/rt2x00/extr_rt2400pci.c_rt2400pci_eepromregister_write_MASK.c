
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct eeprom_93cx6 {int reg_chip_select; int reg_data_clock; int reg_data_out; int reg_data_in; struct rt2x00_dev* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct eeprom_93cx6 *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_5->data;
 u32 VAR_7 = 0;

 FUNC_0(&VAR_7, VAR_3, !!VAR_5->reg_data_in);
 FUNC_0(&VAR_7, VAR_4, !!VAR_5->reg_data_out);
 FUNC_0(&VAR_7, VAR_2,
      !!VAR_5->reg_data_clock);
 FUNC_0(&VAR_7, VAR_1,
      !!VAR_5->reg_chip_select);

 FUNC_1(VAR_6, VAR_0, VAR_7);
}
