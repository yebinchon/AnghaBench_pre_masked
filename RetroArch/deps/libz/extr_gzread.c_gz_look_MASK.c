
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef TYPE_3__* gz_statep ;
struct TYPE_9__ {int have; unsigned char* next; } ;
struct TYPE_10__ {int avail_in; int* next_in; void* opaque; void* zfree; void* zalloc; } ;
struct TYPE_11__ {int size; unsigned char* in; int want; unsigned char* out; int direct; int eof; int how; TYPE_1__ x; TYPE_2__ strm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,int*,int) ;

__attribute__((used)) static int FUNC_7(gz_statep VAR_5)
{
   z_streamp VAR_6 = &(VAR_5->strm);


   if (VAR_5->size == 0) {

      VAR_5->in = (unsigned char *)FUNC_5(VAR_5->want);
      VAR_5->out = (unsigned char *)FUNC_5(VAR_5->want << 1);
      if (VAR_5->in == ((void*)0) || VAR_5->out == ((void*)0)) {
         if (VAR_5->out != ((void*)0))
            FUNC_0(VAR_5->out);
         if (VAR_5->in != ((void*)0))
            FUNC_0(VAR_5->in);
         FUNC_2(VAR_5, VAR_2, "out of memory");
         return -1;
      }
      VAR_5->size = VAR_5->want;


      VAR_5->strm.zalloc = VAR_3;
      VAR_5->strm.zfree = VAR_3;
      VAR_5->strm.opaque = VAR_3;
      VAR_5->strm.avail_in = 0;
      VAR_5->strm.next_in = VAR_3;
      if (FUNC_3(&(VAR_5->strm), 15 + 16) != VAR_4) {
         FUNC_0(VAR_5->out);
         FUNC_0(VAR_5->in);
         VAR_5->size = 0;
         FUNC_2(VAR_5, VAR_2, "out of memory");
         return -1;
      }
   }


   if (VAR_6->avail_in < 2) {
      if (FUNC_1(VAR_5) == -1)
         return -1;
      if (VAR_6->avail_in == 0)
         return 0;
   }
   if (VAR_6->avail_in > 1 &&
         VAR_6->next_in[0] == 31 && VAR_6->next_in[1] == 139) {
      FUNC_4(VAR_6);
      VAR_5->how = VAR_1;
      VAR_5->direct = 0;
      return 0;
   }



   if (VAR_5->direct == 0) {
      VAR_6->avail_in = 0;
      VAR_5->eof = 1;
      VAR_5->x.have = 0;
      return 0;
   }




   VAR_5->x.next = VAR_5->out;
   if (VAR_6->avail_in) {
      FUNC_6(VAR_5->x.next, VAR_6->next_in, VAR_6->avail_in);
      VAR_5->x.have = VAR_6->avail_in;
      VAR_6->avail_in = 0;
   }
   VAR_5->how = VAR_0;
   VAR_5->direct = 1;
   return 0;
}
