
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ether_header {int dummy; } ;
typedef TYPE_2__* packet_buffer_ref ;
struct TYPE_6__ {int len; } ;
struct TYPE_7__ {int m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static packet_buffer_ref
FUNC_3(int VAR_5)
{
    packet_buffer_ref VAR_6;
    int VAR_7;


    VAR_7 = VAR_5 + sizeof(struct ether_header);
    if (VAR_7 > (int)VAR_1) {
 if (VAR_7 > (int)VAR_0) {
     FUNC_2("bond: packet_buffer_allocate size %d > max %u\n",
            VAR_7, VAR_0);
     return (((void*)0));
 }
 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3);
    } else {
 VAR_6 = FUNC_1(VAR_4, VAR_2);
    }
    if (VAR_6 == ((void*)0)) {
 return (((void*)0));
    }
    VAR_6->m_len = VAR_7;
    VAR_6->m_pkthdr.len = VAR_7;
    return (VAR_6);
}
