
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef TYPE_3__* gz_statep ;
struct TYPE_8__ {unsigned int have; scalar_t__ next; } ;
struct TYPE_9__ {unsigned int avail_out; scalar_t__ avail_in; char* msg; scalar_t__ next_out; } ;
struct TYPE_10__ {int how; TYPE_1__ x; TYPE_2__ strm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(gz_statep VAR_9)
{
   int VAR_10 = VAR_6;
   unsigned VAR_11;
   z_streamp VAR_12 = &(VAR_9->strm);


   VAR_11 = VAR_12->avail_out;
   do {

      if (VAR_12->avail_in == 0 && FUNC_0(VAR_9) == -1)
         return -1;
      if (VAR_12->avail_in == 0) {
         FUNC_1(VAR_9, VAR_1, "unexpected end of file");
         break;
      }


      VAR_10 = FUNC_2(VAR_12, VAR_5);
      if (VAR_10 == VAR_8 || VAR_10 == VAR_4) {
         FUNC_1(VAR_9, VAR_8,
               "internal error: inflate stream corrupt");
         return -1;
      }
      if (VAR_10 == VAR_3) {
         FUNC_1(VAR_9, VAR_3, "out of memory");
         return -1;
      }
      if (VAR_10 == VAR_2) {
         FUNC_1(VAR_9, VAR_2,
               VAR_12->msg == ((void*)0) ? "compressed data error" : VAR_12->msg);
         return -1;
      }
   } while (VAR_12->avail_out && VAR_10 != VAR_7);


   VAR_9->x.have = VAR_11 - VAR_12->avail_out;
   VAR_9->x.next = VAR_12->next_out - VAR_9->x.have;


   if (VAR_10 == VAR_7)
      VAR_9->how = VAR_0;


   return 0;
}
