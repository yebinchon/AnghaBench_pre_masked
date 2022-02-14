
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_3(void *VAR_4, uint16_t VAR_5, void *VAR_6)
{
    if (VAR_3) {
        if (FUNC_1(VAR_2, VAR_4, VAR_5) != VAR_0) {
            FUNC_0(VAR_1, "Ethernet send packet failed");
        }
    }
    FUNC_2(VAR_6);
    return VAR_0;
}
