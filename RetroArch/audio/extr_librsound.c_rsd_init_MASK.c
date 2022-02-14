
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cond; void* cond_mutex; void* mutex; } ;
struct TYPE_7__ {int socket; int ctl_socket; } ;
struct TYPE_9__ {TYPE_2__ thread; void* cb_lock; TYPE_1__ conn; } ;
typedef TYPE_3__ rsound_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int*) ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(rsound_t** VAR_8)
{
   *VAR_8 = FUNC_0(1, sizeof(rsound_t));
   if ( *VAR_8 == ((void*)0) )
      return -1;

   FUNC_2(VAR_8 != ((void*)0));

   (*VAR_8)->conn.socket = -1;
   (*VAR_8)->conn.ctl_socket = -1;

   (*VAR_8)->thread.mutex = FUNC_5();
   (*VAR_8)->thread.cond_mutex = FUNC_5();
   (*VAR_8)->cb_lock = FUNC_5();
   (*VAR_8)->thread.cond = FUNC_4();


   int VAR_9 = VAR_6;
   FUNC_3(*VAR_8, VAR_3, &VAR_9);

   FUNC_3(*VAR_8, VAR_4, VAR_1);
   FUNC_3(*VAR_8, VAR_5, VAR_2);
   return 0;
}
