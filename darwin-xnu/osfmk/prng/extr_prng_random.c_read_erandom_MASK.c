
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ccdrbg_state {int dummy; } ;
struct TYPE_2__ {int seed; int drbg_info; struct ccdrbg_state** drbg_states; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct ccdrbg_state*,int ,void*,int ,int *) ;
 int FUNC_3 (int *,struct ccdrbg_state*,int,int ,int ,int *) ;
 int FUNC_4 () ;
 size_t FUNC_5 (int ,size_t) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void
FUNC_9(void * VAR_4, u_int VAR_5)
{
 int VAR_6;
 int VAR_7;
 size_t VAR_8;
 struct ccdrbg_state * VAR_9;

 FUNC_6();
 VAR_6 = FUNC_4();
 VAR_9 = VAR_3.drbg_states[VAR_6];
 FUNC_0(VAR_9);
 for (;;) {

  VAR_7 = FUNC_2(&VAR_3.drbg_info, VAR_9, VAR_5, VAR_4, 0, ((void*)0));
  if (VAR_7 == VAR_1)
   break;
  if (VAR_7 == VAR_0) {

   VAR_8 = FUNC_5(VAR_3.seed, VAR_2);
   FUNC_0(VAR_8 >= VAR_2);
   VAR_7 = FUNC_3(&VAR_3.drbg_info, VAR_9, sizeof(VAR_3.seed), VAR_3.seed, 0, ((void*)0));
   FUNC_1(sizeof(VAR_3.seed), VAR_3.seed);
   if (VAR_7 == VAR_1)
    continue;
   FUNC_8("read_erandom reseed error %d\n", VAR_7);
  }
  FUNC_8("read_erandom ccdrbg error %d\n", VAR_7);
 }
 FUNC_7();
}
