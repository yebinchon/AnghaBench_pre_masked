
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int * block_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_1(int VAR_5, uint8_t** VAR_6)
{
    if (VAR_4[VAR_5].block_buf == ((void*)0)) {
        VAR_4[VAR_5].block_buf = FUNC_0(VAR_3, VAR_2);
        if (VAR_4[VAR_5].block_buf == ((void*)0)) {
            return VAR_0;
        }
    }
    *VAR_6 = VAR_4[VAR_5].block_buf;
    return VAR_1;
}
