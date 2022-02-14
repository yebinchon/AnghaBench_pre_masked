
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT ;
struct TYPE_8__ {int LinkType; int LinkSpeed; } ;
struct TYPE_7__ {int Length; scalar_t__ Data; int Oid; } ;
typedef TYPE_1__* PPACKET_OID_DATA ;
typedef int PACKET_OID_DATA ;
typedef TYPE_2__ NetType ;
typedef int LPADAPTER ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;

BOOLEAN FUNC_5(LPADAPTER VAR_5, NetType *VAR_6)
{
    BOOLEAN VAR_7;
    ULONG VAR_8=(sizeof(PACKET_OID_DATA)+sizeof(ULONG)-1);
    PPACKET_OID_DATA VAR_9;

    VAR_9=FUNC_0(VAR_1 | VAR_2,VAR_8);
    if (VAR_9 == ((void*)0)) {
        FUNC_2("PacketGetLinkLayerFromRegistry failed\n");
        return VAR_0;
    }

    VAR_9->Oid = VAR_4;
    VAR_9->Length = sizeof (ULONG);
    VAR_7 = FUNC_4(VAR_5,VAR_0,VAR_9);
    VAR_6->LinkType=*((UINT*)VAR_9->Data);


    VAR_9->Oid = VAR_3;
    VAR_9->Length = sizeof (ULONG);
    VAR_7 = FUNC_4(VAR_5,VAR_0,VAR_9);
 VAR_6->LinkSpeed=*((UINT*)VAR_9->Data)*100;
    FUNC_1 (VAR_9);

 FUNC_3("Media:%d\n",VAR_6->LinkType);
 FUNC_3("Speed=%d\n",VAR_6->LinkSpeed);

    return VAR_7;
}
