
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io {unsigned long error_bits; TYPE_1__* client; void* context; int (* callback ) (unsigned long,void*) ;scalar_t__ sleeper; int count; } ;
typedef int (* io_notify_fn ) (unsigned long,void*) ;
struct TYPE_2__ {int pool; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct io*,int ) ;
 int FUNC_2 (unsigned int,unsigned long*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct io *VAR_0, unsigned int VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_2(VAR_1, &VAR_0->error_bits);

 if (FUNC_0(&VAR_0->count)) {
  if (VAR_0->sleeper)
   FUNC_3(VAR_0->sleeper);

  else {
   unsigned long VAR_3 = VAR_0->error_bits;
   io_notify_fn VAR_4 = VAR_0->callback;
   void *VAR_5 = VAR_0->context;

   FUNC_1(VAR_0, VAR_0->client->pool);
   VAR_4(VAR_3, VAR_5);
  }
 }
}
