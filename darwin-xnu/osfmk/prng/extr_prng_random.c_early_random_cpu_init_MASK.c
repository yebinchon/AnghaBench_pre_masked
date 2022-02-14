
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ccdrbg_state {int dummy; } ;
typedef int nonce ;
typedef int cpu ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int seed; TYPE_2__ drbg_info; struct ccdrbg_state** drbg_states; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_2__*,struct ccdrbg_state*,int,int ,int,int *,int,int*) ;
 TYPE_1__ VAR_1 ;
 struct ccdrbg_state* FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(int VAR_3)
{
 uint64_t VAR_4;
 int VAR_5;
 struct ccdrbg_state * VAR_6;





 FUNC_0(VAR_3 != VAR_2);
 FUNC_0(VAR_1.drbg_states[VAR_3] == ((void*)0));

 VAR_6 = FUNC_3(VAR_1.drbg_info.size);
 if (VAR_6 == ((void*)0)) {
  FUNC_5("prng_init kalloc failed\n");
 }
 VAR_1.drbg_states[VAR_3] = VAR_6;





 VAR_4 = FUNC_4();
 VAR_5 = FUNC_2(&VAR_1.drbg_info, VAR_6, sizeof(VAR_1.seed), VAR_1.seed, sizeof(VAR_4), &VAR_4, sizeof(VAR_3), &VAR_3);
 FUNC_1(sizeof(VAR_4), &VAR_4);
 if (VAR_5 != VAR_0)
  FUNC_5("ccdrbg_init() returned %d", VAR_5);
}
