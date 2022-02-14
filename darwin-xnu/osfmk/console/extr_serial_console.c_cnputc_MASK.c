
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ PAB_active; scalar_t__ cpu_console_buf; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_8__ {char* buf_base; char* buf_ptr; } ;
typedef TYPE_2__ console_buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int write_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_6__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_2__*,char) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void
FUNC_14(char VAR_4)
{
 console_buf_t * VAR_5;
 cpu_data_t * VAR_6;
 boolean_t VAR_7;
 boolean_t VAR_8 = VAR_1;
 char * VAR_9;

restart:
 FUNC_10();
 VAR_6 = FUNC_8();
 VAR_5 = (console_buf_t *)VAR_6->cpu_console_buf;
 if (VAR_3 || VAR_5 == ((void*)0)) {
  FUNC_11();

  FUNC_0(&VAR_4, 1);
  return;
 }
 VAR_7 = FUNC_9(VAR_0);







 if (VAR_8 && !FUNC_6(VAR_5, VAR_4)) {
  FUNC_12(&VAR_2.write_lock);

  if (FUNC_7(VAR_5) > FUNC_4()) {
   FUNC_13(&VAR_2.write_lock);
   FUNC_1(VAR_7);
   FUNC_11();

   FUNC_5();
   goto restart;
  }

  for (VAR_9 = VAR_5->buf_base; VAR_9 < VAR_5->buf_ptr; VAR_9++)
   FUNC_3(*VAR_9);
  VAR_5->buf_ptr = VAR_5->buf_base;
  FUNC_13(&VAR_2.write_lock);

  FUNC_6(VAR_5, VAR_4);
 }

 VAR_8 = VAR_0;

 if (VAR_4 != '\n') {
  FUNC_1(VAR_7);
  FUNC_11();
  return;
 }


 FUNC_12(&VAR_2.write_lock);
 if (FUNC_7(VAR_5) > FUNC_4()) {
  FUNC_13(&VAR_2.write_lock);
  FUNC_1(VAR_7);
  FUNC_11();

  FUNC_5();

  goto restart;
 }

 for (VAR_9 = VAR_5->buf_base; VAR_9 < VAR_5->buf_ptr; VAR_9++)
  FUNC_3(*VAR_9);

 VAR_5->buf_ptr = VAR_5->buf_base;
 FUNC_13(&VAR_2.write_lock);

 FUNC_1(VAR_7);
 FUNC_11();

 FUNC_5();

 return;
}
