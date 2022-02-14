
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ccdrbg_state {int dummy; } ;
typedef int result ;
typedef int ps ;
typedef int nonce ;
struct TYPE_8__ {scalar_t__ buffer; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int seedset; TYPE_2__ drbg_info; int seed; struct ccdrbg_state** drbg_states; scalar_t__ master_drbg_state; int drbg_custom; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,struct ccdrbg_state*,int,int *,int ,int *) ;
 int FUNC_5 (TYPE_2__*,struct ccdrbg_state*,int,int ,int,int *,int,int*) ;
 int FUNC_6 (int *,int ) ;
 TYPE_1__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int *,int) ;

uint64_t
FUNC_10(void)
{
 uint32_t VAR_5 = 0;
 uint64_t VAR_6;
 uint64_t VAR_7;
 int VAR_8;
 int VAR_9;
 struct ccdrbg_state * VAR_10;

 if (!VAR_3.seedset) {
  VAR_3.seedset = 1;
  VAR_5 = FUNC_0((unsigned char *)VAR_2.buffer, sizeof(VAR_2.buffer));

  if (VAR_5 < sizeof(VAR_2.buffer)) {




   FUNC_8("EntropyData needed %lu bytes, but got %u.\n", sizeof(VAR_2.buffer), VAR_5);
  }

  FUNC_6(&VAR_3.seed, VAR_1);


  FUNC_3(&VAR_3.drbg_info, &VAR_3.drbg_custom);
  FUNC_1(VAR_3.drbg_info.size <= sizeof(VAR_3.master_drbg_state));
  VAR_10 = (struct ccdrbg_state *)VAR_3.master_drbg_state;
  VAR_3.drbg_states[VAR_4] = VAR_10;





  FUNC_1(sizeof(VAR_3.seed) > sizeof(VAR_7));
  VAR_7 = FUNC_7();
  VAR_9 = 0;
  VAR_8 = FUNC_5(&VAR_3.drbg_info, VAR_10, sizeof(VAR_3.seed), VAR_3.seed, sizeof(VAR_7), &VAR_7, sizeof(VAR_9), &VAR_9);
  FUNC_2(sizeof(VAR_7), &VAR_7);
  if (VAR_8 != VAR_0)
   FUNC_8("ccdrbg_init() returned %d", VAR_8);


  VAR_8 = FUNC_4(&VAR_3.drbg_info, VAR_10, sizeof(VAR_6), &VAR_6, 0, ((void*)0));
  if (VAR_8 != VAR_0)
   FUNC_8("ccdrbg_generate() returned %d", VAR_8);

  return VAR_6;
 };

 FUNC_9(&VAR_6, sizeof(VAR_6));

 return VAR_6;
}
