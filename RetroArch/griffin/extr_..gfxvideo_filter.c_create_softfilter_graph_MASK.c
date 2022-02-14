
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct softfilter_work_packet {int dummy; } ;
struct filter_thread_data {int done; int thread; int cond; int lock; int userdata; } ;
struct config_file_userdata {char** prefix; int conf; } ;
typedef int softfilter_simd_mask_t ;
struct TYPE_5__ {scalar_t__ num_plugs; int pix_fmt; int out_pix_fmt; unsigned int max_width; unsigned int max_height; unsigned int threads; struct filter_thread_data* thread_data; int impl_data; struct softfilter_work_packet* packets; TYPE_2__* impl; int conf; } ;
typedef TYPE_1__ rarch_softfilter_t ;
typedef int name ;
typedef int key ;
typedef enum retro_pixel_format { ____Placeholder_retro_pixel_format } retro_pixel_format ;
struct TYPE_6__ {char* short_ident; unsigned int (* query_input_formats ) () ;unsigned int (* query_output_formats ) (unsigned int) ;unsigned int (* query_num_threads ) (int ) ;int (* create ) (int *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,struct config_file_userdata*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int ,char*,char*,int) ;
 unsigned int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int ,struct filter_thread_data*) ;
 unsigned int FUNC_10 () ;
 unsigned int FUNC_11 (unsigned int) ;
 int FUNC_12 (int *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ,struct config_file_userdata*) ;
 unsigned int FUNC_13 (int ) ;

__attribute__((used)) static bool FUNC_14(rarch_softfilter_t *VAR_5,
      enum retro_pixel_format VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      softfilter_simd_mask_t VAR_9,
      unsigned VAR_10)
{
   unsigned VAR_11, VAR_12, VAR_13, VAR_14 = 0;
   struct config_file_userdata VAR_15;
   char VAR_16[64], VAR_17[64];

   (void)VAR_14;

   VAR_16[0] = VAR_17[0] = '\0';

   FUNC_7(VAR_16, sizeof(VAR_16), "filter");

   if (!FUNC_3(VAR_5->conf, VAR_16, VAR_17, sizeof(VAR_17)))
   {
      FUNC_0("Could not find 'filter' array in config.\n");
      return 0;
   }

   if (VAR_5->num_plugs == 0)
   {
      FUNC_0("No filter plugs found. Exiting...\n");
      return 0;
   }

   VAR_5->impl = FUNC_8(VAR_5, VAR_17);
   if (!VAR_5->impl)
   {
      FUNC_0("Could not find implementation.\n");
      return 0;
   }

   VAR_15.conf = VAR_5->conf;

   VAR_15.prefix[0] = VAR_16;
   VAR_15.prefix[1] = VAR_5->impl->short_ident;


   VAR_5->pix_fmt = VAR_6;
   VAR_11 = VAR_5->impl->query_input_formats();

   switch (VAR_6)
   {
      case 128:
         VAR_12 = VAR_2;
         break;
      case 129:
         VAR_12 = VAR_1;
         break;
      default:
         return 0;
   }

   if (!(VAR_12 & VAR_11))
   {
      FUNC_0("Softfilter does not support input format.\n");
      return 0;
   }

   VAR_13 = VAR_5->impl->query_output_formats(VAR_12);

   if (VAR_13 & VAR_12)
      VAR_5->out_pix_fmt = VAR_6;
   else if (VAR_13 & VAR_2)
      VAR_5->out_pix_fmt = 128;
   else if (VAR_13 & VAR_1)
      VAR_5->out_pix_fmt = 129;
   else
   {
      FUNC_0("Did not find suitable output format for softfilter.\n");
      return 0;
   }

   VAR_5->max_width = VAR_7;
   VAR_5->max_height = VAR_8;

   VAR_5->impl_data = VAR_5->impl->create(
         &VAR_4, VAR_12, VAR_12, VAR_7, VAR_8,
         VAR_10 != VAR_0 ? VAR_10 :
         FUNC_4(), VAR_9,
         &VAR_15);
   if (!VAR_5->impl_data)
   {
      FUNC_0("Failed to create softfilter state.\n");
      return 0;
   }

   VAR_10 = VAR_5->impl->query_num_threads(VAR_5->impl_data);
   if (!VAR_10)
   {
      FUNC_0("Invalid number of threads.\n");
      return 0;
   }

   VAR_5->threads = VAR_10;
   FUNC_1("Using %u threads for softfilter.\n", VAR_10);

   VAR_5->packets = (struct softfilter_work_packet*)
      FUNC_2(VAR_10, sizeof(*VAR_5->packets));
   if (!VAR_5->packets)
   {
      FUNC_0("Failed to allocate softfilter packets.\n");
      return 0;
   }
   return 1;
}
