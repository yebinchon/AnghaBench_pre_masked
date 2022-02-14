
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,unsigned long) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_3(unsigned long VAR_5, unsigned long VAR_6)
{
    esp_err_t VAR_7;
    if (VAR_4 > 0) {
      VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_4, VAR_6);
      if (VAR_7 != VAR_1) {
        FUNC_0(VAR_2, "Failed to flush buffered events (%d)!\n", VAR_7);
      }
    }

    VAR_7 = FUNC_1(VAR_0, VAR_5, VAR_6);
    if (VAR_7 != VAR_1) {
      FUNC_0(VAR_2, "Failed to flush apptrace data (%d)!\n", VAR_7);
    }
    VAR_4 = 0;
}
