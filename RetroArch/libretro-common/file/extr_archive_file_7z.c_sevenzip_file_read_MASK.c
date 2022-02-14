
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int temp ;
typedef int infile ;
struct TYPE_28__ {int file; int s; } ;
struct TYPE_27__ {int s; int * realStream; } ;
struct TYPE_23__ {scalar_t__ NumFiles; TYPE_4__* Files; scalar_t__ NumFolders; scalar_t__ NumPackStreams; int * Folders; int * PackCRCs; int * PackCRCsDefined; int * PackSizes; } ;
struct TYPE_22__ {scalar_t__ size; int * data; } ;
struct TYPE_26__ {TYPE_2__ db; TYPE_1__ FileNames; int * FileNameOffsets; int * FileIndexToFolderIndexMap; int * FolderStartFileIndex; int * PackStreamStartPositions; int * FolderStartPackStreamIndex; scalar_t__ dataPos; scalar_t__ startPosAfterHeader; } ;
struct TYPE_25__ {scalar_t__ IsDir; } ;
struct TYPE_24__ {void* Free; int Alloc; } ;
typedef scalar_t__ SRes ;
typedef TYPE_3__ ISzAlloc ;
typedef TYPE_4__ CSzFileItem ;
typedef TYPE_5__ CSzArEx ;
typedef TYPE_6__ CLookToRead ;
typedef TYPE_7__ CFileInStream ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (TYPE_6__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *,scalar_t__,scalar_t__*,int **,size_t*,size_t*,size_t*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*) ;
 size_t FUNC_10 (TYPE_5__*,scalar_t__,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_13 (char const*,void const*,long) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (long) ;
 int FUNC_16 (void*,int *,long) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char*,char const*) ;
 scalar_t__ FUNC_19 (int *,char*,int) ;
 int * FUNC_20 (char const*) ;

__attribute__((used)) static int FUNC_21(
      const char *VAR_7,
      const char *VAR_8, void **VAR_9,
      const char *VAR_10)
{
   CFileInStream VAR_11;
   CLookToRead VAR_12;
   ISzAlloc VAR_13;
   ISzAlloc VAR_14;
   CSzArEx VAR_15;
   uint8_t *VAR_16 = 0;
   long VAR_17 = -1;



   VAR_13.Alloc = VAR_4;
   VAR_13.Free = VAR_6;
   VAR_14.Alloc = VAR_5;
   VAR_14.Free = VAR_6;
   if (FUNC_4(&VAR_11.file, VAR_7))
      return -1;


   FUNC_1(&VAR_11);
   FUNC_6(&VAR_12, 0);
   VAR_12.realStream = &VAR_11.s;
   FUNC_7(&VAR_12);
   FUNC_0();

   VAR_15.db.PackSizes = ((void*)0);
   VAR_15.db.PackCRCsDefined = ((void*)0);
   VAR_15.db.PackCRCs = ((void*)0);
   VAR_15.db.Folders = ((void*)0);
   VAR_15.db.Files = ((void*)0);
   VAR_15.db.NumPackStreams = 0;
   VAR_15.db.NumFolders = 0;
   VAR_15.db.NumFiles = 0;
   VAR_15.startPosAfterHeader = 0;
   VAR_15.dataPos = 0;
   VAR_15.FolderStartPackStreamIndex = ((void*)0);
   VAR_15.PackStreamStartPositions = ((void*)0);
   VAR_15.FolderStartFileIndex = ((void*)0);
   VAR_15.FileIndexToFolderIndexMap = ((void*)0);
   VAR_15.FileNameOffsets = ((void*)0);
   VAR_15.FileNames.data = ((void*)0);
   VAR_15.FileNames.size = 0;

   FUNC_11(&VAR_15);

   if (FUNC_12(&VAR_15, &VAR_12.s, &VAR_13, &VAR_14) == VAR_3)
   {
      uint32_t VAR_18;
      bool VAR_19 = 0;
      uint16_t *VAR_20 = ((void*)0);
      size_t VAR_21 = 0;
      uint32_t VAR_22 = 0xFFFFFFFF;
      SRes VAR_23 = VAR_3;

      for (VAR_18 = 0; VAR_18 < VAR_15.db.NumFiles; VAR_18++)
      {
         size_t VAR_24;
         char VAR_25[VAR_0];
         size_t VAR_26 = 0;
         size_t VAR_27 = 0;
         const CSzFileItem *VAR_28 = VAR_15.db.Files + VAR_18;



         if (VAR_28->IsDir)
            continue;

         VAR_24 = FUNC_10(&VAR_15, VAR_18, ((void*)0));

         if (VAR_24 > VAR_21)
         {
            if (VAR_20)
               FUNC_14(VAR_20);
            VAR_21 = VAR_24;
            VAR_20 = (uint16_t *)FUNC_15(VAR_21 * sizeof(VAR_20[0]));

            if (VAR_20 == 0)
            {
               VAR_23 = VAR_2;
               break;
            }
         }

         FUNC_10(&VAR_15, VAR_18, VAR_20);
         VAR_23 = VAR_1;
         VAR_25[0] = '\0';

         if (VAR_20)
            VAR_23 = FUNC_19(VAR_20, VAR_25, sizeof(VAR_25))
               ? VAR_3 : VAR_1;

         if (FUNC_18(VAR_25, VAR_8))
         {
            size_t VAR_29 = 0;




            VAR_19 = 1;
            VAR_23 = FUNC_8(&VAR_15, &VAR_12.s, VAR_18, &VAR_22,
                  &VAR_16, &VAR_29, &VAR_26, &VAR_27,
                  &VAR_13, &VAR_14);

            if (VAR_23 != VAR_3)
               break;

            VAR_17 = VAR_27;

            if (VAR_10 != ((void*)0))
            {
               const void *VAR_30 = (const void*)(VAR_16 + VAR_26);

               if (!FUNC_13(VAR_10, VAR_30, VAR_17))
               {
                  VAR_23 = VAR_3;
                  VAR_19 = 1;
                  VAR_17 = -1;
               }
            }
            else
            {





               *VAR_9 = FUNC_15(VAR_17 + 1);
               ((char*)(*VAR_9))[VAR_17] = '\0';
               FUNC_16(*VAR_9,VAR_16 + VAR_26,VAR_17);
            }
            break;
         }
      }

      if (VAR_20)
         FUNC_14(VAR_20);
      FUNC_3(&VAR_13, VAR_16);

      if (!(VAR_19 && VAR_23 == VAR_3))
      {





         VAR_17 = -1;
      }
   }

   FUNC_9(&VAR_15, &VAR_13);
   FUNC_2(&VAR_11.file);

   return (int)VAR_17;
}
