
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct r8180_priv {TYPE_2__* ieee80211; } ;
struct TYPE_3__ {size_t rates_len; size_t rates_ex_len; size_t* rates; size_t* rates_ex; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;



int
FUNC_0(
        struct r8180_priv *VAR_0,
        u8 VAR_1 )
{
    u8 VAR_2;
        u8 VAR_3;
        u8 VAR_4 = 0x7F;
        u8 VAR_5;
        unsigned short VAR_6 = 0;
        u8 VAR_7 = VAR_1&VAR_4;

    VAR_2 = VAR_0->ieee80211->current_network.rates_len;
        VAR_3 = VAR_0->ieee80211->current_network.rates_ex_len;
        for( VAR_5=0; VAR_5< VAR_2; VAR_5++ )
        {
                if( (VAR_0->ieee80211->current_network.rates[VAR_5] & VAR_4) == VAR_7 )
                {
                        VAR_6 = 1;
                        goto found_rate;
                }
        }
    for( VAR_5=0; VAR_5< VAR_3; VAR_5++ )
        {
                if( (VAR_0->ieee80211->current_network.rates_ex[VAR_5] & VAR_4) == VAR_7 )
                {
                        VAR_6 = 1;
                        goto found_rate;
                }
        }
        return VAR_6;
        found_rate:
        return VAR_6;
}
