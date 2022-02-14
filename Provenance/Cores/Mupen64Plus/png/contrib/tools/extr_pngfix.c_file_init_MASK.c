
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global {int dummy; } ;
struct file {char const* file_name; char const* out_name; int status_code; void (* alloc ) (struct file*,int) ;void* write_errno; int * out; void* read_errno; int * file; void* alloc_ptr; int * idat; int * chunk; int state; scalar_t__ read_count; struct global* global; } ;


 int FUNC_0 (struct file) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* VAR_3 ;
 void* FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_4, struct global *VAR_5, const char *VAR_6,
   const char *VAR_7, void *VAR_8, void (*VAR_9)(struct file*,int))




{
   FUNC_0(*VAR_4);
   VAR_4->global = VAR_5;

   VAR_4->file_name = VAR_6;
   VAR_4->out_name = VAR_7;
   VAR_4->status_code = 0;
   VAR_4->read_errno = 0;
   VAR_4->write_errno = 0;

   VAR_4->file = ((void*)0);
   VAR_4->out = ((void*)0);


   VAR_4->read_count = 0;
   VAR_4->state = VAR_1;

   VAR_4->chunk = ((void*)0);
   VAR_4->idat = ((void*)0);

   VAR_4->alloc_ptr = VAR_8;
   VAR_4->alloc = VAR_9;


   FUNC_1(VAR_6 != ((void*)0));
   VAR_4->file = FUNC_2(VAR_6, "rb");

   if (VAR_4->file == ((void*)0))
   {
      VAR_4->read_errno = VAR_3;
      VAR_4->status_code |= VAR_0;

      FUNC_3(VAR_6);
      return VAR_0;
   }

   if (VAR_7 != ((void*)0))
   {
      VAR_4->out = FUNC_2(VAR_7, "wb");

      if (VAR_4->out == ((void*)0))
      {
         VAR_4->write_errno = VAR_3;
         VAR_4->status_code |= VAR_2;
         FUNC_3(VAR_7);
         return VAR_2;
      }
   }

   return 0;
}
