
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ physaddr; scalar_t__ virtaddr; scalar_t__ sectionsize; scalar_t__ sectionptr; scalar_t__ relptr; scalar_t__ linenoptr; int numreloc; int numlineno; scalar_t__ flags; } ;
typedef TYPE_1__ u8 ;
typedef size_t u32 ;
typedef TYPE_1__ section_header_struct ;
struct TYPE_13__ {int numsections; scalar_t__ timedate; scalar_t__ symtabptr; scalar_t__ numsymtabs; int optheader; int flags; int* magic; } ;
typedef TYPE_3__ coff_header_struct ;
typedef int coff_header ;
struct TYPE_14__ {int versionstamp; scalar_t__ textsize; scalar_t__ datasize; scalar_t__ bsssize; scalar_t__ entrypoint; scalar_t__ textaddr; scalar_t__ dataaddr; } ;
typedef TYPE_4__ aout_header_struct ;
typedef int aout_header ;
struct TYPE_16__ {scalar_t__ PC; } ;
struct TYPE_15__ {TYPE_7__ regs; } ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 TYPE_6__* VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_1__) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (void*,int,int,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(const char *VAR_2)
{
   coff_header_struct VAR_3;
   aout_header_struct VAR_4;
   section_header_struct *VAR_5=((void*)0);
   FILE *VAR_6;
   u8 *VAR_7;
   u32 VAR_8, VAR_9;
   size_t VAR_10 = 0;

   if ((VAR_6 = FUNC_9(VAR_2, "rb")) == ((void*)0))
      return -1;

   VAR_10 = FUNC_10((void *)&VAR_3, sizeof(VAR_3), 1, VAR_6);

   FUNC_5(VAR_3.numsections);
   FUNC_0(VAR_3.timedate);
   FUNC_0(VAR_3.timedate);
   FUNC_0(VAR_3.symtabptr);
   FUNC_0(VAR_3.numsymtabs);
   FUNC_5(VAR_3.optheader);
   FUNC_5(VAR_3.flags);


   if (VAR_3.magic[0] != 0x05 || VAR_3.magic[1] != 0x00 ||
       VAR_3.optheader != sizeof(VAR_4))
   {

      FUNC_8(VAR_6);
      return -1;
   }

   VAR_10 = FUNC_10((void *)&VAR_4, sizeof(VAR_4), 1, VAR_6);

   FUNC_5(VAR_4.versionstamp);
   FUNC_0(VAR_4.textsize);
   FUNC_0(VAR_4.datasize);
   FUNC_0(VAR_4.bsssize);
   FUNC_0(VAR_4.entrypoint);
   FUNC_0(VAR_4.textaddr);
   FUNC_0(VAR_4.dataaddr);



   if ((VAR_5 = (section_header_struct *)FUNC_13(sizeof(section_header_struct) * VAR_3.numsections)) == ((void*)0))
   {
      FUNC_8(VAR_6);
      return -2;
   }


   for (VAR_8 = 0; VAR_8 < VAR_3.numsections; VAR_8++)
   {
      VAR_10 = FUNC_10((void *)&VAR_5[VAR_8], sizeof(section_header_struct), 1, VAR_6);

      FUNC_0(VAR_5[VAR_8].physaddr);
      FUNC_0(VAR_5[VAR_8].virtaddr);
      FUNC_0(VAR_5[VAR_8].sectionsize);
      FUNC_0(VAR_5[VAR_8].sectionptr);
      FUNC_0(VAR_5[VAR_8].relptr);
      FUNC_0(VAR_5[VAR_8].linenoptr);
      FUNC_5(VAR_5[VAR_8].numreloc);
      FUNC_5(VAR_5[VAR_8].numlineno);
      FUNC_0(VAR_5[VAR_8].flags);

   }

   FUNC_6();


   FUNC_7();


   for (VAR_8 = 0; VAR_8 < VAR_3.numsections; VAR_8++)
   {
      if (VAR_5[VAR_8].sectionsize == 0 ||
          VAR_5[VAR_8].sectionptr == 0)

         continue;

      if ((VAR_7 = (u8 *)FUNC_13(VAR_5[VAR_8].sectionsize)) == ((void*)0))
      {
         FUNC_8(VAR_6);
         FUNC_11(VAR_5);
         return -2;
      }

      FUNC_12(VAR_6, VAR_5[VAR_8].sectionptr, VAR_1);
      VAR_10 = FUNC_10((void *)VAR_7, 1, VAR_5[VAR_8].sectionsize, VAR_6);

      for (VAR_9 = 0; VAR_9 < VAR_5[VAR_8].sectionsize; VAR_9++)
         FUNC_1(VAR_5[VAR_8].physaddr+VAR_9, VAR_7[VAR_9]);
      FUNC_4(VAR_5[VAR_8].physaddr,
                     VAR_5[VAR_8].sectionsize);

      FUNC_11(VAR_7);
   }


   FUNC_11(VAR_5);
   FUNC_8(VAR_6);

   FUNC_2(VAR_0, &VAR_0->regs);
   VAR_0->regs.PC = VAR_4.entrypoint;
   FUNC_3(VAR_0, &VAR_0->regs);
   return 0;
}
