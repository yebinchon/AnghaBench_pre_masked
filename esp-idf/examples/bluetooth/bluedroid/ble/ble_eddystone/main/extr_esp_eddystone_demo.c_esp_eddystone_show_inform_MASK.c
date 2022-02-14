
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int version; int battery_voltage; int temperature; int adv_count; int time; } ;
struct TYPE_10__ {int tx_power; int url; } ;
struct TYPE_9__ {int ranging_data; int instance_id; int namespace_id; } ;
struct TYPE_12__ {TYPE_4__ tlm; TYPE_3__ url; TYPE_2__ uid; } ;
struct TYPE_8__ {int frame_type; } ;
struct TYPE_13__ {TYPE_5__ inform; TYPE_1__ common; } ;
typedef TYPE_6__ esp_eddystone_result_t ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(const esp_eddystone_result_t* VAR_1)
{
    switch(VAR_1->common.frame_type)
    {
        case 129: {
            FUNC_0(VAR_0, "Eddystone UID inform:");
            FUNC_0(VAR_0, "Measured power(RSSI at 0m distance):%d dbm", VAR_1->inform.uid.ranging_data);
            FUNC_0(VAR_0, "EDDYSTONE_DEMO: Namespace ID:0x");
            FUNC_1(VAR_0, VAR_1->inform.uid.namespace_id, 10);
            FUNC_0(VAR_0, "EDDYSTONE_DEMO: Instance ID:0x");
            FUNC_1(VAR_0, VAR_1->inform.uid.instance_id, 6);
            break;
        }
        case 128: {
            FUNC_0(VAR_0, "Eddystone URL inform:");
            FUNC_0(VAR_0, "Measured power(RSSI at 0m distance):%d dbm", VAR_1->inform.url.tx_power);
            FUNC_0(VAR_0, "URL: %s", VAR_1->inform.url.url);
            break;
        }
        case 130: {
            FUNC_0(VAR_0, "Eddystone TLM inform:");
            FUNC_0(VAR_0, "version: %d", VAR_1->inform.tlm.version);
            FUNC_0(VAR_0, "battery voltage: %d mV", VAR_1->inform.tlm.battery_voltage);
            FUNC_0(VAR_0, "beacon temperature in degrees Celsius: %6.1f", VAR_1->inform.tlm.temperature);
            FUNC_0(VAR_0, "adv pdu count since power-up: %d", VAR_1->inform.tlm.adv_count);
            FUNC_0(VAR_0, "time since power-up: %d s", (VAR_1->inform.tlm.time)/10);
            break;
        }
        default:
            break;
    }
}
