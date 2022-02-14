
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
typedef size_t UINT ;
typedef size_t UCHAR ;
struct TYPE_8__ {TYPE_2__* Session; } ;
struct TYPE_7__ {int TotalSendSize; int TotalSendSizeReal; TYPE_1__* UdpAccel; scalar_t__ UseUdpAcceleration; } ;
struct TYPE_6__ {scalar_t__ MyPortByNatTServer; } ;
typedef int TCPSOCK ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ CONNECTION ;


 int FUNC_0 (size_t*,int *,int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t*) ;
 size_t VAR_0 ;
 size_t FUNC_4 (size_t,int) ;
 size_t VAR_1 ;
 size_t* FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;
 int * VAR_2 ;
 int FUNC_7 (TYPE_2__*,int *,size_t*,size_t) ;
 size_t FUNC_8 () ;

void FUNC_9(CONNECTION *VAR_3, TCPSOCK *VAR_4)
{
 UINT VAR_5, VAR_6, VAR_7;
 UINT VAR_8;
 SESSION *VAR_9;
 UCHAR *VAR_10;
 bool VAR_11 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_9 = VAR_3->Session;

 VAR_5 = FUNC_8() % VAR_1;
 VAR_7 = VAR_0;

 if (VAR_9 != ((void*)0) && VAR_9->UseUdpAcceleration && VAR_9->UdpAccel != ((void*)0))
 {
  if (VAR_9->UdpAccel->MyPortByNatTServer != 0)
  {
   VAR_5 = FUNC_4(VAR_5, (FUNC_6(VAR_2) + sizeof(USHORT)));

   VAR_11 = 1;
  }
 }

 VAR_10 = FUNC_5(VAR_5);

 for (VAR_6 = 0;VAR_6 < VAR_5;VAR_6++)
 {
  VAR_10[VAR_6] = FUNC_8();
 }

 if (VAR_11)
 {
  USHORT VAR_12 = FUNC_1((USHORT)VAR_9->UdpAccel->MyPortByNatTServer);

  FUNC_0(VAR_10, VAR_2, FUNC_6(VAR_2));
  FUNC_0(VAR_10 + FUNC_6(VAR_2), &VAR_12, sizeof(USHORT));
 }

 VAR_7 = FUNC_2(VAR_7);
 VAR_8 = FUNC_2(VAR_5);
 FUNC_7(VAR_3->Session, VAR_4, &VAR_7, sizeof(UINT));
 FUNC_7(VAR_3->Session, VAR_4, &VAR_8, sizeof(UINT));
 FUNC_7(VAR_3->Session, VAR_4, VAR_10, VAR_5);

 VAR_3->Session->TotalSendSize += sizeof(UINT) * 2 + VAR_5;
 VAR_3->Session->TotalSendSizeReal += sizeof(UINT) * 2 + VAR_5;

 FUNC_3(VAR_10);
}
