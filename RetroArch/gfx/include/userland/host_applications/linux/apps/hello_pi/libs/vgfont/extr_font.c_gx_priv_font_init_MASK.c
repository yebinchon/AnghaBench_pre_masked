
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VCOS_STATUS_T ;
struct TYPE_2__ {char* file; size_t len; int mem; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 size_t FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,int ,size_t) ;
 int FUNC_6 (char*,char*,char const*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (size_t,char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;

VCOS_STATUS_T FUNC_11(const char *VAR_10)
{
   VCOS_STATUS_T VAR_11;
   size_t VAR_12;
   int VAR_13;
   if (FUNC_9())
   {
      VAR_11 = VAR_5;
      goto fail_init;
   }

   int VAR_14 = -1;

   FUNC_6(VAR_8, "%s/%s", VAR_10, VAR_7.file);
   VAR_14 = FUNC_4(VAR_8, VAR_0);

   if (VAR_14 < 0)
   {
      FUNC_0("Could not open font file '%s'", VAR_7.file);
      VAR_11 = VAR_4;
      goto fail_open;
   }

   VAR_12 = FUNC_3(VAR_14, 0, VAR_1);
   FUNC_3(VAR_14, 0, VAR_2);

   VAR_7.mem = FUNC_8(VAR_12, VAR_7.file);
   if (!VAR_7.mem)
   {
      FUNC_0("No memory for font %s", VAR_8);
      VAR_11 = VAR_5;
      goto fail_mem;
   }

   VAR_13 = FUNC_5(VAR_14, VAR_7.mem, VAR_12);
   if (VAR_13 != VAR_12)
   {
      FUNC_0("Could not read font %s", VAR_8);
      VAR_11 = VAR_3;
      goto fail_rd;
   }
   VAR_7.len = VAR_12;
   FUNC_2(VAR_14);

   FUNC_1("Opened font file '%s'", VAR_8);

   VAR_9 = 1;
   return VAR_6;

fail_rd:
   FUNC_7(VAR_7.mem);
fail_mem:
   if (VAR_14 >= 0) FUNC_2(VAR_14);
fail_open:
   FUNC_10();
fail_init:
   return VAR_11;
}
