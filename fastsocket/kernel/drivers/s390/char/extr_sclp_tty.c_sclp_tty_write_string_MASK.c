
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sclp_buffer {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_8__ {void* next; } ;
struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sclp_buffer*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct list_head*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (struct sclp_buffer*) ;
 struct sclp_buffer* FUNC_6 (void*,int ,int ) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 struct sclp_buffer* VAR_8 ;
 int FUNC_8 (struct sclp_buffer*,unsigned char const*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(const unsigned char *VAR_9, int VAR_10, int VAR_11)
{
 unsigned long VAR_12;
 void *VAR_13;
 int VAR_14;
 int VAR_15;
 struct sclp_buffer *VAR_16;

 if (VAR_10 <= 0)
  return 0;
 VAR_15 = 0;
 FUNC_9(&VAR_4, VAR_12);
 do {

  if (VAR_8 == ((void*)0)) {
   while (FUNC_4(&VAR_5)) {
    FUNC_10(&VAR_4, VAR_12);
    if (VAR_11)
     goto out;
    else
     FUNC_7();
    FUNC_9(&VAR_4, VAR_12);
   }
   VAR_13 = VAR_5.next;
   FUNC_3((struct list_head *) VAR_13);
   VAR_8 = FUNC_6(VAR_13, VAR_3,
             VAR_1);
  }

  VAR_14 = FUNC_8(VAR_8, VAR_9, VAR_10);
  VAR_15 += VAR_14;
  if (VAR_14 == VAR_10)
   break;





  VAR_16 = VAR_8;
  VAR_8 = ((void*)0);
  FUNC_10(&VAR_4, VAR_12);
  FUNC_0(VAR_16);
  FUNC_9(&VAR_4, VAR_12);
  VAR_9 += VAR_14;
  VAR_10 -= VAR_14;
 } while (VAR_10 > 0);

 if (VAR_8 && FUNC_5(VAR_8) &&
     !FUNC_11(&VAR_7)) {
  FUNC_2(&VAR_7);
  VAR_7.function = VAR_6;
  VAR_7.data = 0UL;
  VAR_7.expires = VAR_2 + VAR_0/10;
  FUNC_1(&VAR_7);
 }
 FUNC_10(&VAR_4, VAR_12);
out:
 return VAR_15;
}
