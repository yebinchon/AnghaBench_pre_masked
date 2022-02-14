
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_2__ {int used; int buffer; int len; int read_ptr; int read_lock; int write_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(void)
{

 boolean_t VAR_7 = (FUNC_7() == VAR_0);


 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 do {

  if (VAR_7)
   FUNC_4();






  if (!FUNC_9(&VAR_4.read_lock)) {







   FUNC_3(1);
   return;
  }

  boolean_t VAR_11 = FUNC_8(VAR_0);


  (void)FUNC_5(&VAR_3, 1);

  FUNC_10(&VAR_4.write_lock);


  VAR_8 = FUNC_0(VAR_4.used, VAR_1);


  VAR_10 = (int)((VAR_4.buffer + VAR_4.len) - VAR_4.read_ptr);
  if (VAR_8 > VAR_10)
   VAR_8 = VAR_10;

  if (VAR_8 > 0) {
   FUNC_1(VAR_4.read_ptr, VAR_8);
   VAR_4.read_ptr =
       VAR_4.buffer + ((VAR_4.read_ptr - VAR_4.buffer + VAR_8) % VAR_4.len);
   VAR_4.used -= VAR_8;
   VAR_9 += VAR_8;
  }

  FUNC_11(&VAR_4.write_lock);

  (void)FUNC_6(&VAR_3, 1);

  FUNC_11(&VAR_4.read_lock);

  FUNC_2(VAR_11);






  if (!VAR_6 && !VAR_5 && (VAR_9 >= VAR_2))
   break;

 } while (VAR_8 > 0);
}
