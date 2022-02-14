
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int dev; struct ath_hw* sc_ah; } ;
struct ath_hw {int eeprom_blob; } ;
struct ath9k_eeprom_ctx {int complete; struct ath_hw* ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_hw* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,char const*,int ,int ,struct ath9k_eeprom_ctx*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ath_softc *VAR_5, const char *VAR_6)
{
 struct ath9k_eeprom_ctx VAR_7;
 struct ath_hw *VAR_8 = VAR_8 = VAR_5->sc_ah;
 int VAR_9;


 FUNC_2(&VAR_7.complete);
 VAR_7.ah = VAR_5->sc_ah;

 VAR_9 = FUNC_3(VAR_2, 1, VAR_6, VAR_5->dev, VAR_1,
          &VAR_7, VAR_4);
 if (VAR_9 < 0) {
  FUNC_1(FUNC_0(VAR_8),
   "EEPROM request failed\n");
  return VAR_9;
 }

 FUNC_4(&VAR_7.complete);

 if (!VAR_8->eeprom_blob) {
  FUNC_1(FUNC_0(VAR_8),
   "Unable to load EEPROM file %s\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
