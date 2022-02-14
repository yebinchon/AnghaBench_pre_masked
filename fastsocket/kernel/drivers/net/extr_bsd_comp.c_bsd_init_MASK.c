
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bsd_db {scalar_t__ maxbits; int* lens; int hsize; int unit; int debug; scalar_t__ mru; TYPE_1__* dict; } ;
struct TYPE_2__ {scalar_t__ cptr; int codem1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bsd_db*) ;

__attribute__((used)) static int FUNC_3 (void *VAR_4, unsigned char *VAR_5,
       int VAR_6, int VAR_7, int VAR_8, int VAR_9)
  {
    struct bsd_db *VAR_10 = VAR_4;
    int VAR_11;

    if ((VAR_6 != 3) || (VAR_5[0] != VAR_2) || (VAR_5[1] != 3)
 || (FUNC_1(VAR_5[2]) != VAR_1)
 || (FUNC_0(VAR_5[2]) != VAR_10->maxbits)
 || (VAR_9 && VAR_10->lens == ((void*)0)))
      {
 return 0;
      }

    if (VAR_9)
      {
 VAR_11 = VAR_3;
 do
   {
     VAR_10->lens[VAR_11] = 1;
   }
 while (VAR_11-- > 0);
      }

    VAR_11 = VAR_10->hsize;
    while (VAR_11-- != 0)
      {
 VAR_10->dict[VAR_11].codem1 = VAR_0;
 VAR_10->dict[VAR_11].cptr = 0;
      }

    VAR_10->unit = VAR_7;
    VAR_10->mru = 0;

    if (VAR_8)

      VAR_10->debug = 1;

    FUNC_2(VAR_10);

    return 1;
  }
