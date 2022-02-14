
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int thousand; void* second; void* minute; void* hour; } ;
struct TYPE_6__ {TYPE_1__ tim; } ;
struct TYPE_7__ {char* item_str; TYPE_2__ parent; } ;
typedef TYPE_3__ esp_gps_t ;


 void* FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(esp_gps_t *VAR_0)
{
    VAR_0->parent.tim.hour = FUNC_0(VAR_0->item_str + 0);
    VAR_0->parent.tim.minute = FUNC_0(VAR_0->item_str + 2);
    VAR_0->parent.tim.second = FUNC_0(VAR_0->item_str + 4);
    if (VAR_0->item_str[6] == '.') {
        uint16_t VAR_1 = 0;
        uint8_t VAR_2 = 7;
        while (VAR_0->item_str[VAR_2]) {
            VAR_1 = 10 * VAR_1 + VAR_0->item_str[VAR_2] - '0';
            VAR_2++;
        }
        VAR_0->parent.tim.thousand = VAR_1;
    }
}
