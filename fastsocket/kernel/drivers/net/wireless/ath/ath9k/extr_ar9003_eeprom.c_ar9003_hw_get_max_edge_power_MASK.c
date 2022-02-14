
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned int u16 ;
struct ar9300_eeprom {scalar_t__** ctl_freqbin_2G; scalar_t__** ctl_freqbin_5G; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct ar9300_eeprom*,int,unsigned int,int) ;
 unsigned int FUNC_1 (struct ar9300_eeprom*,int,unsigned int,unsigned int,int) ;
 unsigned int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static u16 FUNC_3(struct ar9300_eeprom *VAR_4,
     u16 VAR_5, int VAR_6, bool VAR_7)
{
 u16 VAR_8 = VAR_3;
 u8 *VAR_9 = VAR_7 ?
  &VAR_4->ctl_freqbin_2G[VAR_6][0] :
  &VAR_4->ctl_freqbin_5G[VAR_6][0];
 u16 VAR_10 = VAR_7 ?
  VAR_1 : VAR_2;
 unsigned int VAR_11;


 for (VAR_11 = 0;
      (VAR_11 < VAR_10) && (VAR_9[VAR_11] != VAR_0);
      VAR_11++) {




  if (VAR_5 == FUNC_2(VAR_9[VAR_11], VAR_7)) {
   VAR_8 =
    FUNC_0(VAR_4, VAR_6,
        VAR_11, VAR_7);
   break;
  } else if ((VAR_11 > 0) &&
      (VAR_5 < FUNC_2(VAR_9[VAR_11],
            VAR_7))) {
   VAR_8 =
    FUNC_1(VAR_4, VAR_6,
          VAR_11, VAR_5,
          VAR_7);




   break;
  }
 }
 return VAR_8;
}
