
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int p1 ;
struct TYPE_8__ {int Size; int Revision; int Type; } ;
struct TYPE_10__ {char PoolTag; int DataSize; int fAllocateNetBuffer; int ProtocolId; TYPE_1__ Header; } ;
struct TYPE_9__ {int NetBufferListPool; int NetBufferList; } ;
typedef TYPE_2__ PACKET_BUFFER ;
typedef TYPE_3__ NET_BUFFER_LIST_POOL_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_5 ;

PACKET_BUFFER *FUNC_4()
{
 PACKET_BUFFER *VAR_6;
 NET_BUFFER_LIST_POOL_PARAMETERS VAR_7;


 VAR_6 = FUNC_3(sizeof(PACKET_BUFFER));


 FUNC_2(&VAR_7, sizeof(VAR_7));
 VAR_7 = VAR_0;
 VAR_7 = VAR_4;
 VAR_7 = VAR_2;
 VAR_7 = VAR_1;
 VAR_7 = VAR_5;
 VAR_7 = VAR_3;
 VAR_7 = 'SETH';
 VAR_6->NetBufferListPool = FUNC_1(((void*)0), &VAR_7);


 VAR_6->NetBufferList = FUNC_0(VAR_6->NetBufferListPool, 0, 0);

 return VAR_6;
}
