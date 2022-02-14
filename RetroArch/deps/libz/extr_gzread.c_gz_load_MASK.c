
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
struct TYPE_4__ {int eof; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(gz_statep VAR_1, unsigned char *VAR_2, unsigned VAR_3, unsigned *VAR_4)
{
   int VAR_5;

   *VAR_4 = 0;
   do {
      VAR_5 = FUNC_1(VAR_1->fd, VAR_2 + *VAR_4, VAR_3 - *VAR_4);
      if (VAR_5 <= 0)
         break;
      *VAR_4 += VAR_5;
   } while (*VAR_4 < VAR_3);
   if (VAR_5 < 0) {
      FUNC_0(VAR_1, VAR_0, FUNC_2());
      return -1;
   }
   if (VAR_5 == 0)
      VAR_1->eof = 1;
   return 0;
}
