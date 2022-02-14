
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* pakfile; char* filename; char* origname; int zipfile; int offset; int length; struct TYPE_10__* next; int type; } ;
typedef TYPE_1__ quakefile_t ;
struct TYPE_11__ {scalar_t__ ident; int dirofs; int dirlen; char* name; int filepos; int filelen; } ;
typedef TYPE_2__ dsinpackfile_t ;
typedef TYPE_2__ dpackheader_t ;
typedef TYPE_2__ dpackfile_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (TYPE_2__*,int,int,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *,int,int ) ;
 TYPE_1__* FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (char*,char*) ;

quakefile_t *FUNC_14(char *VAR_3, char *VAR_4)
{
 FILE *VAR_5;
 dpackheader_t VAR_6;
 dsinpackfile_t *VAR_7;
 dpackfile_t *VAR_8;
 quakefile_t *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);

 VAR_5 = FUNC_7(VAR_3, "rb");
 if (!VAR_5)
 {
  FUNC_5("can't open pak file %s", VAR_3);
  return ((void*)0);
 }

 if ((FUNC_8(&VAR_6, 1, sizeof(dpackheader_t), VAR_5) != sizeof(dpackheader_t))
  || (VAR_6.ident != VAR_0 && VAR_6.ident != VAR_2)
  || (FUNC_10(VAR_5, FUNC_3(VAR_6.dirofs), VAR_1))
  )
 {
  FUNC_6(VAR_5);
  FUNC_5("invalid pak file %s", VAR_3);
  return ((void*)0);
 }

 if (VAR_6.ident == VAR_0)
 {

  VAR_12 = FUNC_3(VAR_6.dirlen) / sizeof(dpackfile_t);
  VAR_8 = (dpackfile_t *) FUNC_11(VAR_12 * sizeof(dpackfile_t));
  if (!VAR_8) FUNC_1("out of memory");

  if (FUNC_8(VAR_8, sizeof(dpackfile_t), VAR_12, VAR_5) != VAR_12)
  {
   FUNC_6(VAR_5);
   FUNC_9(VAR_8);
   FUNC_5("can't read the Quake pak file dir entries from %s", VAR_3);
   return ((void*)0);
  }
  FUNC_6(VAR_5);

  VAR_7 = (dsinpackfile_t *) FUNC_11(VAR_12 * sizeof(dsinpackfile_t));
  if (!VAR_7) FUNC_1("out of memory");
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  {
   FUNC_13(VAR_7[VAR_13].name, VAR_8[VAR_13].name);
   VAR_7[VAR_13].filepos = FUNC_3(VAR_8[VAR_13].filepos);
   VAR_7[VAR_13].filelen = FUNC_3(VAR_8[VAR_13].filelen);
  }
  FUNC_9(VAR_8);
 }
 else
 {

  VAR_12 = FUNC_3(VAR_6.dirlen) / sizeof(dsinpackfile_t);
  VAR_7 = (dsinpackfile_t *) FUNC_11(VAR_12 * sizeof(dsinpackfile_t));
  if (!VAR_7) FUNC_1("out of memory");

  if (FUNC_8(VAR_7, sizeof(dsinpackfile_t), VAR_12, VAR_5) != VAR_12)
  {
   FUNC_6(VAR_5);
   FUNC_9(VAR_7);
   FUNC_5("can't read the Sin pak file dir entries from %s", VAR_3);
   return ((void*)0);
  }
  FUNC_6(VAR_5);
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  {
   VAR_7[VAR_13].filepos = FUNC_3(VAR_7[VAR_13].filepos);
   VAR_7[VAR_13].filelen = FUNC_3(VAR_7[VAR_13].filelen);
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
 {
  FUNC_0(VAR_7[VAR_13].name);
  if (FUNC_2(VAR_4, VAR_7[VAR_13].name, 0))
  {
   VAR_11 = FUNC_11(sizeof(quakefile_t));
   if (!VAR_11) FUNC_1("out of memory");
   FUNC_12(VAR_11, 0, sizeof(quakefile_t));
   FUNC_13(VAR_11->pakfile, VAR_3);
   FUNC_13(VAR_11->filename, VAR_3);
   FUNC_13(VAR_11->origname, VAR_7[VAR_13].name);
   VAR_11->zipfile = 0;
   VAR_11->offset = VAR_7[VAR_13].filepos;
   VAR_11->length = VAR_7[VAR_13].filelen;
   VAR_11->type = FUNC_4(VAR_7[VAR_13].name);

   VAR_11->next = ((void*)0);
   if (VAR_10) VAR_10->next = VAR_11;
   else VAR_9 = VAR_11;
   VAR_10 = VAR_11;
  }
 }
 FUNC_9(VAR_7);
 return VAR_9;
}
