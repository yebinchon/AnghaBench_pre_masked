
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int mdns_srv_item_t ;
typedef int mdns_ip_protocol_t ;
typedef int mdns_if_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int **,size_t,int) ;

__attribute__((used)) static void FUNC_1(mdns_srv_item_t ** VAR_2, size_t VAR_3, bool VAR_4)
{
    uint8_t VAR_5, VAR_6;
    for (VAR_5=0; VAR_5<VAR_0; VAR_5++) {
        for (VAR_6=0; VAR_6<VAR_1; VAR_6++) {
            FUNC_0((mdns_if_t)VAR_5, (mdns_ip_protocol_t)VAR_6, VAR_2, VAR_3, VAR_4);
        }
    }
}
