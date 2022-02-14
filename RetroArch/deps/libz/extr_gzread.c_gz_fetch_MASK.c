
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef TYPE_3__* gz_statep ;
struct TYPE_8__ {scalar_t__ have; int next; } ;
struct TYPE_9__ {int avail_out; int next_out; scalar_t__ avail_in; } ;
struct TYPE_10__ {int how; int size; int out; TYPE_1__ x; int eof; TYPE_2__ strm; } ;





 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(gz_statep VAR_0)
{
   z_streamp VAR_1 = &(VAR_0->strm);

   do {
      switch(VAR_0->how) {
         case 130:
            if (FUNC_2(VAR_0) == -1)
               return -1;
            if (VAR_0->how == 130)
               return 0;
            break;
         case 129:
            if (FUNC_1(VAR_0, VAR_0->out, VAR_0->size << 1, &(VAR_0->x.have))
                  == -1)
               return -1;
            VAR_0->x.next = VAR_0->out;
            return 0;
         case 128:
            VAR_1->avail_out = VAR_0->size << 1;
            VAR_1->next_out = VAR_0->out;
            if (FUNC_0(VAR_0) == -1)
               return -1;
      }
   } while (VAR_0->x.have == 0 && (!VAR_0->eof || VAR_1->avail_in));
   return 0;
}
