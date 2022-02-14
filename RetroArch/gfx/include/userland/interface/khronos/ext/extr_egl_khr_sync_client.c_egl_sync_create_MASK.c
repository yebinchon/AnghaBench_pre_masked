
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int* name; int master; int serversync; scalar_t__ status; scalar_t__ type; scalar_t__ threshold; scalar_t__ condition; } ;
typedef scalar_t__ EGLint ;
typedef scalar_t__ EGLenum ;
typedef TYPE_1__ EGL_SYNC_T ;
typedef scalar_t__ EGLSyncKHR ;
typedef int CLIENT_THREAD_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (int *,int*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static EGL_SYNC_T *FUNC_11(EGLSyncKHR VAR_6, EGLenum VAR_7,
      EGLint VAR_8, EGLint VAR_9, EGLint VAR_10)
{
   CLIENT_THREAD_STATE_T *VAR_11 = FUNC_0();
   EGL_SYNC_T *VAR_12 = (EGL_SYNC_T *)FUNC_7(sizeof(EGL_SYNC_T), "EGL_SYNC_T");
   uint64_t VAR_13 = FUNC_10(VAR_11);
   uint32_t VAR_14;

   if (!VAR_12)
      return 0;

   VAR_12->condition = VAR_8;
   VAR_12->threshold = VAR_9;
   VAR_12->type = VAR_7;
   VAR_12->status = VAR_10;

   VAR_12->name[0] = (int)VAR_13;
   VAR_12->name[1] = (int)(VAR_13 >> 32);
   VAR_12->name[2] = (int)VAR_6;

   if (FUNC_8(&VAR_12->master, VAR_12->name, 0) != VAR_3) {
      FUNC_6(VAR_12);
      return 0;
   }

   VAR_14 = (uint32_t) VAR_6;
   {
      VAR_12->serversync = FUNC_5(FUNC_2(VAR_5,
                                                 VAR_11,
                                                 VAR_1,
                                                 FUNC_4(VAR_7),
                                                 FUNC_4(VAR_8),
                                                 FUNC_3(VAR_9),
                                                 FUNC_4(VAR_14)));
      if (!VAR_12->serversync) {
         FUNC_9(&VAR_12->master);
         FUNC_6(VAR_12);
         return 0;
      }
   }
   return VAR_12;
}
