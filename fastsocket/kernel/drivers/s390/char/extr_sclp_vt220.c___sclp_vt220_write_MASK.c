
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_7__ {scalar_t__ next; } ;
struct TYPE_6__ {unsigned long data; scalar_t__ expires; int function; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned char const*,int,int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__ VAR_4 ;
 int * FUNC_7 (void*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(const unsigned char *VAR_9, int VAR_10, int VAR_11,
     int VAR_12, int VAR_13)
{
 unsigned long VAR_14;
 void *VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_10 <= 0)
  return 0;
 VAR_17 = 0;
 FUNC_8(&VAR_5, VAR_14);
 do {

  if (VAR_3 == ((void*)0)) {
   if (FUNC_2(&VAR_4))
    VAR_2++;
   while (FUNC_2(&VAR_4)) {
    if (VAR_13 || VAR_6)
     goto out;
    if (FUNC_5())
     break;
    FUNC_9(&VAR_5, VAR_14);

    FUNC_3();
    FUNC_8(&VAR_5, VAR_14);
   }
   VAR_15 = (void *) VAR_4.next;
   FUNC_1((struct list_head *) VAR_15);
   VAR_3 =
    FUNC_7(VAR_15);
  }

  VAR_16 = FUNC_4(VAR_3,
          VAR_9, VAR_10, VAR_12);
  VAR_17 += VAR_16;
  if (VAR_16 == VAR_10)
   break;





  FUNC_9(&VAR_5, VAR_14);
  FUNC_6();
  FUNC_8(&VAR_5, VAR_14);
  VAR_9 += VAR_16;
  VAR_10 -= VAR_16;
 } while (VAR_10 > 0);

 if (VAR_3 != ((void*)0) &&
     !FUNC_10(&VAR_8) && VAR_11) {
  VAR_8.function = VAR_7;
  VAR_8.data = 0UL;
  VAR_8.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_8);
 }
out:
 FUNC_9(&VAR_5, VAR_14);
 return VAR_17;
}
