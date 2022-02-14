
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int number_entry; } ;
typedef TYPE_1__ unz_global_info ;
struct TYPE_9__ {scalar_t__ uncompressed_size; void* crc; } ;
typedef TYPE_2__ unz_file_info ;
typedef int unzFile ;
struct TYPE_10__ {int hashSize; char* pakFilename; char* pakBasename; int numfiles; TYPE_4__* buildBuffer; void* pure_checksum; void* checksum; TYPE_4__** hashTable; int handle; } ;
typedef TYPE_3__ pack_t ;
typedef int filename_inzip ;
struct TYPE_11__ {char* name; struct TYPE_11__* next; int pos; } ;
typedef TYPE_4__ fileInPack_t ;


 void* FUNC_0 (int*,int) ;
 void* FUNC_1 (int*,int,void*) ;
 long FUNC_2 (char*,int) ;
 void* FUNC_3 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,int) ;
 int VAR_2 ;
 int FUNC_7 (int*) ;
 void* FUNC_8 (int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,TYPE_2__*,char*,int,int *,int ,int *,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static pack_t *FUNC_17( char *VAR_5, const char *VAR_6 )
{
 fileInPack_t *VAR_7;
 pack_t *VAR_8;
 unzFile VAR_9;
 int VAR_10;
 unz_global_info VAR_11;
 char VAR_12[VAR_1];
 unz_file_info VAR_13;
 int VAR_14, VAR_15;
 long VAR_16;
 int VAR_17;
 int *VAR_18;
 char *VAR_19;

 VAR_17 = 0;

 VAR_9 = FUNC_16(VAR_5);
 VAR_10 = FUNC_13 (VAR_9,&VAR_11);

 if (VAR_10 != VAR_2)
  return ((void*)0);

 VAR_4 += VAR_11.number_entry;

 VAR_15 = 0;
 FUNC_14(VAR_9);
 for (VAR_14 = 0; VAR_14 < VAR_11.number_entry; VAR_14++)
 {
  VAR_10 = FUNC_11(VAR_9, &VAR_13, VAR_12, sizeof(VAR_12), ((void*)0), 0, ((void*)0), 0);
  if (VAR_10 != VAR_2) {
   break;
  }
  VAR_15 += FUNC_10(VAR_12) + 1;
  FUNC_15(VAR_9);
 }

 VAR_7 = FUNC_8( (VAR_11.number_entry * sizeof( fileInPack_t )) + VAR_15 );
 VAR_19 = ((char *) VAR_7) + VAR_11.number_entry * sizeof( fileInPack_t );
 VAR_18 = FUNC_8( VAR_11.number_entry * sizeof(int) );



 for (VAR_14 = 1; VAR_14 <= VAR_0; VAR_14 <<= 1) {
  if (VAR_14 > VAR_11.number_entry) {
   break;
  }
 }

 VAR_8 = FUNC_8( sizeof( pack_t ) + VAR_14 * sizeof(fileInPack_t *) );
 VAR_8->hashSize = VAR_14;
 VAR_8->hashTable = (fileInPack_t **) (((char *) VAR_8) + sizeof( pack_t ));
 for(VAR_14 = 0; VAR_14 < VAR_8->hashSize; VAR_14++) {
  VAR_8->hashTable[VAR_14] = ((void*)0);
 }

 FUNC_6( VAR_8->pakFilename, VAR_5, sizeof( VAR_8->pakFilename ) );
 FUNC_6( VAR_8->pakBasename, VAR_6, sizeof( VAR_8->pakBasename ) );


 if ( FUNC_10( VAR_8->pakBasename ) > 4 && !FUNC_4( VAR_8->pakBasename + FUNC_10( VAR_8->pakBasename ) - 4, ".pk3" ) ) {
  VAR_8->pakBasename[FUNC_10( VAR_8->pakBasename ) - 4] = 0;
 }

 VAR_8->handle = VAR_9;
 VAR_8->numfiles = VAR_11.number_entry;
 FUNC_14(VAR_9);

 for (VAR_14 = 0; VAR_14 < VAR_11.number_entry; VAR_14++)
 {
  VAR_10 = FUNC_11(VAR_9, &VAR_13, VAR_12, sizeof(VAR_12), ((void*)0), 0, ((void*)0), 0);
  if (VAR_10 != VAR_2) {
   break;
  }
  if (VAR_13.uncompressed_size > 0) {
   VAR_18[VAR_17++] = FUNC_3(VAR_13.crc);
  }
  FUNC_5( VAR_12 );
  VAR_16 = FUNC_2(VAR_12, VAR_8->hashSize);
  VAR_7[VAR_14].name = VAR_19;
  FUNC_9( VAR_7[VAR_14].name, VAR_12 );
  VAR_19 += FUNC_10(VAR_12) + 1;

  FUNC_12(VAR_9, &VAR_7[VAR_14].pos);

  VAR_7[VAR_14].next = VAR_8->hashTable[VAR_16];
  VAR_8->hashTable[VAR_16] = &VAR_7[VAR_14];
  FUNC_15(VAR_9);
 }

 VAR_8->checksum = FUNC_0( VAR_18, 4 * VAR_17 );
 VAR_8->pure_checksum = FUNC_1( VAR_18, 4 * VAR_17, FUNC_3(VAR_3) );
 VAR_8->checksum = FUNC_3( VAR_8->checksum );
 VAR_8->pure_checksum = FUNC_3( VAR_8->pure_checksum );

 FUNC_7(VAR_18);

 VAR_8->buildBuffer = VAR_7;
 return VAR_8;
}
