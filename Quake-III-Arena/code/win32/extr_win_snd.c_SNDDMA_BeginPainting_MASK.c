
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* buffer; } ;
struct TYPE_10__ {TYPE_1__* lpVtbl; } ;
struct TYPE_9__ {scalar_t__ (* GetStatus ) (TYPE_2__*,int*) ;scalar_t__ (* Lock ) (TYPE_2__*,int ,int ,int**,int *,int**,int*,int ) ;int (* Restore ) (TYPE_2__*) ;int (* Play ) (TYPE_2__*,int ,int ,int ) ;} ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 TYPE_8__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int ,int**,int *,int**,int*,int ) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8( void ) {
 int VAR_9;
 DWORD VAR_10;
 DWORD *VAR_11, *VAR_12;
 HRESULT VAR_13;
 DWORD VAR_14;

 if ( !VAR_8 ) {
  return;
 }


 if ( VAR_8->lpVtbl->GetStatus (VAR_8, &VAR_14) != VAR_4 ) {
  FUNC_0 ("Couldn't get sound buffer status\n");
 }

 if (VAR_14 & VAR_1)
  VAR_8->lpVtbl->Restore (VAR_8);

 if (!(VAR_14 & VAR_2))
  VAR_8->lpVtbl->Play(VAR_8, 0, 0, VAR_0);



 VAR_9 = 0;
 VAR_5.buffer = ((void*)0);

 while ((VAR_13 = VAR_8->lpVtbl->Lock(VAR_8, 0, VAR_6, &VAR_11, &VAR_7,
           &VAR_12, &VAR_10, 0)) != VAR_4)
 {
  if (VAR_13 != VAR_3)
  {
   FUNC_0( "SNDDMA_BeginPainting: Lock failed with error '%s'\n", FUNC_1( VAR_13 ) );
   FUNC_2 ();
   return;
  }
  else
  {
   VAR_8->lpVtbl->Restore( VAR_8 );
  }

  if (++VAR_9 > 2)
   return;
 }
 VAR_5.buffer = (unsigned char *)VAR_11;
}
