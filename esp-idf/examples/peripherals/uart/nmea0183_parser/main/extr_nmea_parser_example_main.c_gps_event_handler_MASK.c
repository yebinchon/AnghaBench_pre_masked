
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int second; int minute; scalar_t__ hour; } ;
struct TYPE_4__ {int day; int month; scalar_t__ year; } ;
struct TYPE_6__ {int speed; int altitude; int longitude; int latitude; TYPE_2__ tim; TYPE_1__ date; } ;
typedef TYPE_3__ gps_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*,scalar_t__,int ,int ,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,char*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(void *VAR_3, esp_event_base_t VAR_4, int32_t VAR_5, void *VAR_6)
{
    gps_t *VAR_7 = ((void*)0);
    switch (VAR_5) {
    case 128:
        VAR_7 = (gps_t *)VAR_6;

        FUNC_0(VAR_0, "%d/%d/%d %d:%d:%d => \r\n"
                 "\t\t\t\t\t\tlatitude   = %.05f°N\r\n"
                 "\t\t\t\t\t\tlongtitude = %.05f°E\r\n"
                 "\t\t\t\t\t\taltitude   = %.02fm\r\n"
                 "\t\t\t\t\t\tspeed      = %fm/s",
                 VAR_7->date.year + VAR_2, VAR_7->date.month, VAR_7->date.day,
                 VAR_7->tim.hour + VAR_1, VAR_7->tim.minute, VAR_7->tim.second,
                 VAR_7->latitude, VAR_7->longitude, VAR_7->altitude, VAR_7->speed);
        break;
    case 129:

        FUNC_1(VAR_0, "Unknown statement:%s", (char *)VAR_6);
        break;
    default:
        break;
    }
}
