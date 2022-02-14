
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {scalar_t__ status; scalar_t__ maxlen; scalar_t__ len; int data; scalar_t__ channel; } ;
typedef TYPE_1__ UDPpacket ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(uint8 VAR_4,uint8 VAR_5)
{
        UDPpacket VAR_6;

        VAR_6.channel=0;
        VAR_6.data=FUNC_0(VAR_2,1);
        VAR_6.len=VAR_6.maxlen=VAR_0+1;
        VAR_6.status=0;

        FUNC_1(VAR_1,0,&VAR_6);

        VAR_3++;
        return(1);
}
