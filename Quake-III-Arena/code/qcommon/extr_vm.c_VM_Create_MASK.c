
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int (* systemCall ) (int*) ;int dataMask; int instructionPointersLength; scalar_t__ codeLength; int programStack; scalar_t__ stackBottom; int compiled; void* instructionPointers; void* dataBase; int * name; scalar_t__ dllHandle; int entryPoint; int fqpath; } ;
typedef TYPE_1__ vm_t ;
typedef scalar_t__ vmInterpret_t ;
struct TYPE_13__ {scalar_t__ vmMagic; int bssLength; int dataLength; int litLength; scalar_t__ codeLength; int dataOffset; int instructionCount; } ;
typedef TYPE_2__ vmHeader_t ;
typedef int filename ;
typedef int byte ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,void**) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (int *,char const*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_12 (char const*,int ,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;

vm_t *FUNC_17( const char *VAR_12, int (*VAR_13)(int *),
    vmInterpret_t VAR_14 ) {
 vm_t *VAR_15;
 vmHeader_t *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 char VAR_21[VAR_1];

 if ( !VAR_12 || !VAR_12[0] || !VAR_13 ) {
  FUNC_0( VAR_0, "VM_Create: bad parms" );
 }

 VAR_20 = FUNC_8();


 for ( VAR_19 = 0 ; VAR_19 < VAR_2 ; VAR_19++ ) {
  if (!FUNC_10(VAR_11[VAR_19].name, VAR_12)) {
   VAR_15 = &VAR_11[VAR_19];
   return VAR_15;
  }
 }


 for ( VAR_19 = 0 ; VAR_19 < VAR_2 ; VAR_19++ ) {
  if ( !VAR_11[VAR_19].name[0] ) {
   break;
  }
 }

 if ( VAR_19 == VAR_2 ) {
  FUNC_0( VAR_0, "VM_Create: no free vm_t" );
 }

 VAR_15 = &VAR_11[VAR_19];

 FUNC_11( VAR_15->name, VAR_12, sizeof( VAR_15->name ) );
 VAR_15->systemCall = VAR_13;


 if ( VAR_14 == VAR_5 ) {
  if ( FUNC_4( "fs_restrict" ) ) {
   VAR_14 = VAR_4;
  }
 }

 if ( VAR_14 == VAR_5 ) {

  FUNC_2( "Loading dll file %s.\n", VAR_15->name );
  VAR_15->dllHandle = FUNC_12( VAR_12, VAR_15->fqpath , &VAR_15->entryPoint, VAR_6 );
  if ( VAR_15->dllHandle ) {
   return VAR_15;
  }

  FUNC_2( "Failed to load dll, looking for qvm.\n" );
  VAR_14 = VAR_4;
 }


 FUNC_3( VAR_21, sizeof(VAR_21), "vm/%s.qvm", VAR_15->name );
 FUNC_2( "Loading vm file %s.\n", VAR_21 );
 VAR_17 = FUNC_6( VAR_21, (void **)&VAR_16 );
 if ( !VAR_16 ) {
  FUNC_2( "Failed.\n" );
  FUNC_14( VAR_15 );
  return ((void*)0);
 }


 for ( VAR_19 = 0 ; VAR_19 < sizeof( *VAR_16 ) / 4 ; VAR_19++ ) {
  ((int *)VAR_16)[VAR_19] = FUNC_9( ((int *)VAR_16)[VAR_19] );
 }


 if ( VAR_16->vmMagic != VAR_7
  || VAR_16->bssLength < 0
  || VAR_16->dataLength < 0
  || VAR_16->litLength < 0
  || VAR_16->codeLength <= 0 ) {
  FUNC_14( VAR_15 );
  FUNC_0( VAR_0, "%s has bad header", VAR_21 );
 }



 VAR_18 = VAR_16->dataLength + VAR_16->litLength + VAR_16->bssLength;
 for ( VAR_19 = 0 ; VAR_18 > ( 1 << VAR_19 ) ; VAR_19++ ) {
 }
 VAR_18 = 1 << VAR_19;


 VAR_15->dataBase = FUNC_7( VAR_18, VAR_8 );
 VAR_15->dataMask = VAR_18 - 1;


 FUNC_1( VAR_15->dataBase, (byte *)VAR_16 + VAR_16->dataOffset, VAR_16->dataLength + VAR_16->litLength );


 for ( VAR_19 = 0 ; VAR_19 < VAR_16->dataLength ; VAR_19 += 4 ) {
  *(int *)(VAR_15->dataBase + VAR_19) = FUNC_9( *(int *)(VAR_15->dataBase + VAR_19 ) );
 }


 VAR_15->instructionPointersLength = VAR_16->instructionCount * 4;
 VAR_15->instructionPointers = FUNC_7( VAR_15->instructionPointersLength, VAR_8 );


 VAR_15->codeLength = VAR_16->codeLength;

 if ( VAR_14 >= VAR_4 ) {
  VAR_15->compiled = VAR_10;
  FUNC_13( VAR_15, VAR_16 );
 } else {
  VAR_15->compiled = VAR_9;
  FUNC_16( VAR_15, VAR_16 );
 }


 FUNC_5( VAR_16 );


 FUNC_15( VAR_15 );


 VAR_15->programStack = VAR_15->dataMask + 1;
 VAR_15->stackBottom = VAR_15->programStack - VAR_3;

 FUNC_2("%s loaded in %d bytes on the hunk\n", VAR_12, VAR_20 - FUNC_8());

 return VAR_15;
}
