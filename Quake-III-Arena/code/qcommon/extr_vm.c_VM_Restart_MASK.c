
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* systemCall ) (int*) ;scalar_t__ dataBase; int name; scalar_t__ dllHandle; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_9__ {scalar_t__ vmMagic; int bssLength; int dataLength; int litLength; scalar_t__ codeLength; int dataOffset; } ;
typedef TYPE_2__ vmHeader_t ;
typedef int name ;
typedef int filename ;
typedef int byte ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,void**) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (char*,int ,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_9 (char*,int (*) (int*),int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;

vm_t *FUNC_11( vm_t *VAR_5 ) {
 vmHeader_t *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 char VAR_10[VAR_2];


 if ( VAR_5->dllHandle ) {
  char VAR_11[VAR_2];
     int (*VAR_12)( int *VAR_13 );

  VAR_12 = VAR_5->systemCall;
  FUNC_8( VAR_11, VAR_5->name, sizeof( VAR_11 ) );

  FUNC_10( VAR_5 );

  VAR_5 = FUNC_9( VAR_11, VAR_12, VAR_3 );
  return VAR_5;
 }


 FUNC_3( "VM_Restart()\n", VAR_10 );
 FUNC_4( VAR_10, sizeof(VAR_10), "vm/%s.qvm", VAR_5->name );
 FUNC_3( "Loading vm file %s.\n", VAR_10 );
 VAR_7 = FUNC_6( VAR_10, (void **)&VAR_6 );
 if ( !VAR_6 ) {
  FUNC_0( VAR_0, "VM_Restart failed.\n" );
 }


 for ( VAR_9 = 0 ; VAR_9 < sizeof( *VAR_6 ) / 4 ; VAR_9++ ) {
  ((int *)VAR_6)[VAR_9] = FUNC_7( ((int *)VAR_6)[VAR_9] );
 }


 if ( VAR_6->vmMagic != VAR_4
  || VAR_6->bssLength < 0
  || VAR_6->dataLength < 0
  || VAR_6->litLength < 0
  || VAR_6->codeLength <= 0 ) {
  FUNC_10( VAR_5 );
  FUNC_0( VAR_1, "%s has bad header", VAR_10 );
 }



 VAR_8 = VAR_6->dataLength + VAR_6->litLength + VAR_6->bssLength;
 for ( VAR_9 = 0 ; VAR_8 > ( 1 << VAR_9 ) ; VAR_9++ ) {
 }
 VAR_8 = 1 << VAR_9;


 FUNC_2( VAR_5->dataBase, 0, VAR_8 );


 FUNC_1( VAR_5->dataBase, (byte *)VAR_6 + VAR_6->dataOffset, VAR_6->dataLength + VAR_6->litLength );


 for ( VAR_9 = 0 ; VAR_9 < VAR_6->dataLength ; VAR_9 += 4 ) {
  *(int *)(VAR_5->dataBase + VAR_9) = FUNC_7( *(int *)(VAR_5->dataBase + VAR_9 ) );
 }


 FUNC_5( VAR_6 );

 return VAR_5;
}
