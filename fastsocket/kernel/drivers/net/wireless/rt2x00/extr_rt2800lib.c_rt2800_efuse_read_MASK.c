
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int csr_mutex; int * eeprom; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ,int *) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rt2x00_dev *VAR_14, unsigned int VAR_15)
{
 u32 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 u16 VAR_19;
 u16 VAR_20;
 u16 VAR_21;

 if (FUNC_6(VAR_14, VAR_13)) {
  VAR_17 = VAR_1;
  VAR_18 = VAR_6;
  VAR_19 = VAR_8;
  VAR_20 = VAR_10;
  VAR_21 = VAR_12;
 } else {
  VAR_17 = VAR_0;
  VAR_18 = VAR_5;
  VAR_19 = VAR_7;
  VAR_20 = VAR_9;
  VAR_21 = VAR_11;
 }
 FUNC_1(&VAR_14->csr_mutex);

 FUNC_4(VAR_14, VAR_17, &VAR_16);
 FUNC_7(&VAR_16, VAR_2, VAR_15);
 FUNC_7(&VAR_16, VAR_4, 0);
 FUNC_7(&VAR_16, VAR_3, 1);
 FUNC_5(VAR_14, VAR_17, VAR_16);


 FUNC_3(VAR_14, VAR_17, VAR_3, &VAR_16);

 FUNC_4(VAR_14, VAR_21, &VAR_16);

 *(u32 *)&VAR_14->eeprom[VAR_15] = FUNC_0(VAR_16);
 FUNC_4(VAR_14, VAR_20, &VAR_16);
 *(u32 *)&VAR_14->eeprom[VAR_15 + 2] = FUNC_0(VAR_16);
 FUNC_4(VAR_14, VAR_19, &VAR_16);
 *(u32 *)&VAR_14->eeprom[VAR_15 + 4] = FUNC_0(VAR_16);
 FUNC_4(VAR_14, VAR_18, &VAR_16);
 *(u32 *)&VAR_14->eeprom[VAR_15 + 6] = FUNC_0(VAR_16);

 FUNC_2(&VAR_14->csr_mutex);
}
