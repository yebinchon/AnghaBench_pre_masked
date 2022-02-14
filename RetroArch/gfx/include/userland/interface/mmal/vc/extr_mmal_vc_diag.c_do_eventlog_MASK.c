
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int log ;
typedef int VC_MEM_ADDR_T ;
typedef int VC_MEM_ACCESS_HANDLE_T ;
struct TYPE_4__ {int magic; int size; int elemsize; int version; int index; int num_entries; } ;
typedef TYPE_1__ MMAL_DBG_LOG_T ;
typedef int MMAL_DBG_ENTRY_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int*,size_t*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*,int,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (char*,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(int VAR_2, const char **VAR_3)
{
   VC_MEM_ACCESS_HANDLE_T VAR_4;
   VC_MEM_ADDR_T VAR_5;
   size_t VAR_6;
   VC_MEM_ADDR_T VAR_7;
   MMAL_DBG_LOG_T VAR_8;

   (void)VAR_2; (void)VAR_3;
   int VAR_9;
   if ((VAR_9 = FUNC_2(&VAR_4)) < 0)
   {
      FUNC_5(VAR_1,"Unable to open videocore memory: %d\n", VAR_9);
      return -1;
   }
   if (!FUNC_1(VAR_4, "mmal_dbg_log", &VAR_5, &VAR_6))
   {
      FUNC_5(VAR_1,"Could not get MMAL log address\n");
      goto fail;
   }
   if (!FUNC_4(VAR_4, &VAR_7, VAR_5))
   {
      FUNC_5(VAR_1,"Could not read MMAL log pointer at address 0x%x\n",
              VAR_5);
      goto fail;
   }
   if (!FUNC_3(VAR_4, &VAR_8, VAR_7, sizeof(VAR_8)))
   {
      FUNC_5(VAR_1,"Could not read MMAL log at address 0x%x\n",
              VAR_7);
      goto fail;
   }
   if (VAR_8.magic != VAR_0)
   {
      FUNC_5(VAR_1,"Bad magic 0x%08x in log at 0x%x\n", VAR_8.magic, VAR_7);
      goto fail;
   }
   if (VAR_8.size != sizeof(VAR_8))
   {
      FUNC_5(VAR_1,"MMAL Log size mismatch (got %d, expected %lu)\n",
              VAR_8.size, sizeof(VAR_8));
      goto fail;
   }
   if (VAR_8.elemsize != sizeof(MMAL_DBG_ENTRY_T))
   {
      FUNC_5(VAR_1,"MMAL log element size mismatch (got %d, expected %lu)\n",
              VAR_8.elemsize, sizeof(MMAL_DBG_ENTRY_T));
      goto fail;
   }

   FUNC_7("reading MMAL log at 0x%x version %d magic %x\n",
          VAR_7, VAR_8.version, VAR_8.magic);
   FUNC_7("%d events, %d entries each size %d\n", VAR_8.index, VAR_8.num_entries,
          VAR_8.elemsize);
   FUNC_6(VAR_4, &VAR_8);

   FUNC_0(VAR_4);
   return 0;
fail:
   FUNC_0(VAR_4);
   return -1;

}
