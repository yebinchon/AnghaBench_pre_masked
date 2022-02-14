
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwOfs; int dwData; int dwTimeStamp; } ;
struct TYPE_5__ {int lX; int lY; } ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DIMOUSESTATE ;
typedef TYPE_2__ DIDEVICEOBJECTDATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,TYPE_2__*,int*,int ) ;
 scalar_t__ FUNC_3 (int ,int,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_5( int *VAR_12, int *VAR_13 ) {
 DIDEVICEOBJECTDATA VAR_14;
 DIMOUSESTATE VAR_15;
 DWORD VAR_16;
 HRESULT VAR_17;
  int VAR_18;
 static float VAR_19;

 if ( !VAR_9 ) {
  return;
 }


 for (;;)
 {
  VAR_16 = 1;

  VAR_17 = FUNC_2(VAR_9,
    sizeof(DIDEVICEOBJECTDATA), &VAR_14, &VAR_16, 0);
  if ((VAR_17 == VAR_0) || (VAR_17 == VAR_1)) {
   FUNC_1(VAR_9);
   return;
  }


  if ( FUNC_0(VAR_17) ) {
   break;
  }

  if ( VAR_16 == 0 ) {
   break;
  }

  switch (VAR_14.dwOfs) {
  case 132:
   if (VAR_14.dwData & 0x80)
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_2, VAR_11, 0, ((void*)0) );
   else
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_2, VAR_10, 0, ((void*)0) );
   break;

  case 131:
   if (VAR_14.dwData & 0x80)
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_3, VAR_11, 0, ((void*)0) );
   else
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_3, VAR_10, 0, ((void*)0) );
   break;

  case 130:
   if (VAR_14.dwData & 0x80)
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_4, VAR_11, 0, ((void*)0) );
   else
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_4, VAR_10, 0, ((void*)0) );
   break;

  case 129:
   if (VAR_14.dwData & 0x80)
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_5, VAR_11, 0, ((void*)0) );
   else
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_5, VAR_10, 0, ((void*)0) );
   break;

  case 128:
   VAR_18 = VAR_14.dwData;
   if (VAR_18 == 0) {

   } else if (VAR_18 < 0) {
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_6, VAR_11, 0, ((void*)0) );
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_6, VAR_10, 0, ((void*)0) );
   } else {
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_7, VAR_11, 0, ((void*)0) );
    FUNC_4( VAR_14.dwTimeStamp, VAR_8, VAR_7, VAR_10, 0, ((void*)0) );
   }
   break;
  }
 }



 VAR_17 = FUNC_3(VAR_9,
   sizeof(DIDEVICEOBJECTDATA), &VAR_15);
 if ( FUNC_0(VAR_17) ) {
  *VAR_12 = *VAR_13 = 0;
  return;
 }
 *VAR_12 = VAR_15.lX;
 *VAR_13 = VAR_15.lY;
}
