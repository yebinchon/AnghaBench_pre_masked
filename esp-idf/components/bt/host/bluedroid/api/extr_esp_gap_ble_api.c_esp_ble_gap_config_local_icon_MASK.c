
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int icon; } ;
struct TYPE_8__ {TYPE_1__ cfg_local_icon; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;

esp_err_t FUNC_2 (uint16_t VAR_8)
{
    esp_err_t VAR_9;
    btc_msg_t VAR_10;
    btc_ble_gap_args_t VAR_11;

    FUNC_0(VAR_4);

    switch (VAR_8) {
    case 161:
    case 175:
    case 159:
    case 157:
    case 132:
    case 169:
    case 153:
    case 177:
    case 185:
    case 184:
    case 160:
    case 135:
    case 134:
    case 170:
    case 154:
    case 156:
    case 130:
    case 128:
    case 129:
    case 155:
    case 133:
    case 171:
    case 172:
    case 165:
    case 178:
    case 152:
    case 168:
    case 146:
    case 145:
    case 147:
    case 148:
    case 149:
    case 151:
    case 150:
    case 131:
    case 176:
    case 158:
    case 166:
    case 173:
    case 182:
    case 180:
    case 183:
    case 181:
    case 179:
    case 162:
    case 136:
    case 141:
    case 174:
    case 167:
    case 143:
    case 142:
    case 144:
    case 164:
    case 163:
    case 140:
    case 139:
    case 138:
    case 137:
        VAR_10.sig = VAR_2;
        VAR_10.pid = VAR_1;
        VAR_10.act = VAR_0;
        VAR_11.cfg_local_icon.icon = VAR_8;
        VAR_9 = (FUNC_1(&VAR_10, &VAR_11, sizeof(btc_ble_gap_args_t), ((void*)0)) == VAR_3 ? VAR_7 : VAR_6);
        break;
    default:
        VAR_9 = VAR_5;
        break;
    }
    return VAR_9;
}
