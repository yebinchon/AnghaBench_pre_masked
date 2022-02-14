
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct r8180_priv*,int) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int) ;

u8
FUNC_3(
        struct net_device *VAR_0,
        u8 VAR_1
        )
{
        struct r8180_priv *VAR_2 = FUNC_1(VAR_0);
        u8 VAR_3;


        switch(VAR_1)
        {
        case 108:
                VAR_3 = 96;
                break;

        case 96:
                VAR_3 = 72;
                break;

        case 72:
                VAR_3 = 48;
                break;

        case 48:
                VAR_3 = 36;
                break;

        case 36:
                VAR_3 = 22;
                break;

        case 22:
                VAR_3 = 11;
                break;

        case 11:
                VAR_3 = 4;
                break;

        case 4:
                VAR_3 = 2;
                break;

        case 2:
                VAR_3 = 2;
                break;

        default:
                FUNC_2("GetDegradeTxRate(): Input Tx Rate(%d) is undefined!\n", VAR_1);
                return VAR_1;
        }

        if(FUNC_0(VAR_2, VAR_3))
        {

                return VAR_3;
        }
        else
        {

                return VAR_1;
        }
        return VAR_1;
}
