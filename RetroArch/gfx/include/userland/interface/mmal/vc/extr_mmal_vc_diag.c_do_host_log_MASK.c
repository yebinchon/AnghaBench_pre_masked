
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int log ;
typedef int VC_MEM_ADDR_T ;
typedef int VC_MEM_ACCESS_HANDLE_T ;
struct TYPE_3__ {char* buffer; } ;
typedef TYPE_1__ MMAL_VC_HOST_LOG_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,int,int) ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(int VAR_1, const char **VAR_2)
{
   VC_MEM_ACCESS_HANDLE_T VAR_3;
   VC_MEM_ADDR_T VAR_4;
   MMAL_VC_HOST_LOG_T VAR_5;
   const char *VAR_6 = &VAR_5.buffer[0];
   const char *VAR_7 = &VAR_5.buffer[sizeof(VAR_5.buffer)];
   int VAR_8;

   (void) VAR_1;
   (void) VAR_2;

   if ((VAR_8 = FUNC_1(&VAR_3)) < 0)
   {
      FUNC_4(VAR_0,"Unable to open videocore memory: %d\n", VAR_8);
      return -1;
   }
   if (!FUNC_3(VAR_3, "mmal_host_log", &VAR_4))
   {
      FUNC_4(VAR_0, "Could not read mmal_host_log address\n");
      goto fail;
   }
   if (!FUNC_2(VAR_3, &VAR_5, VAR_4, sizeof(VAR_5)))
   {
      FUNC_4(VAR_0, "Could not read log at 0x%x\n", VAR_4);
      goto fail;
   }

   while (VAR_6 < VAR_7)
   {
      if (*VAR_6)
         VAR_6 += FUNC_5("%s", VAR_6);


      while (VAR_6 < VAR_7 && *VAR_6 == 0) ++VAR_6;
   }

   FUNC_0(VAR_3);
   return 0;

fail:
   FUNC_0(VAR_3);
   return -1;
}
