
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct console {int dummy; } ;
struct TYPE_8__ {void* next; } ;
struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct list_head*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_7 (void*,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned char const*,unsigned int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(struct console *VAR_11, const char *VAR_12,
     unsigned int VAR_13)
{
 unsigned long VAR_14;
 void *VAR_15;
 int VAR_16;

 if (VAR_13 == 0)
  return;
 FUNC_10(&VAR_3, VAR_14);




 do {

  if (VAR_8 == ((void*)0)) {
   if (FUNC_3(&VAR_4))
    VAR_9++;
   while (FUNC_3(&VAR_4)) {
    if (VAR_5)
     goto out;
    if (FUNC_6())
     break;
    FUNC_11(&VAR_3, VAR_14);
    FUNC_8();
    FUNC_10(&VAR_3, VAR_14);
   }
   VAR_15 = VAR_4.next;
   FUNC_2((struct list_head *) VAR_15);
   VAR_8 = FUNC_7(VAR_15, VAR_2,
             VAR_7);
  }

  VAR_16 = FUNC_9(VAR_8, (const unsigned char *)
         VAR_12, VAR_13);
  if (VAR_16 == VAR_13)
   break;





  FUNC_11(&VAR_3, VAR_14);
  FUNC_5();
  FUNC_10(&VAR_3, VAR_14);
  VAR_12 += VAR_16;
  VAR_13 -= VAR_16;
 } while (VAR_13 > 0);

 if (VAR_8 != ((void*)0) && FUNC_4(VAR_8) != 0 &&
     !FUNC_12(&VAR_6)) {
  FUNC_1(&VAR_6);
  VAR_6.function = VAR_10;
  VAR_6.data = 0UL;
  VAR_6.expires = VAR_1 + VAR_0/10;
  FUNC_0(&VAR_6);
 }
out:
 FUNC_11(&VAR_3, VAR_14);
}
