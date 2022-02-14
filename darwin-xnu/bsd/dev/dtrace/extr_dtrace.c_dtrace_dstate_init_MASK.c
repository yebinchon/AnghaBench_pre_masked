
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* dtdv_next; } ;
typedef TYPE_2__ dtrace_dynvar_t ;
typedef int dtrace_dynhash_t ;
struct TYPE_10__ {size_t dtds_chunksize; size_t dtds_size; size_t dtds_hashsize; TYPE_2__* dtdsc_free; struct TYPE_10__* dtds_percpu; TYPE_1__* dtds_hash; TYPE_1__* dtds_base; } ;
typedef TYPE_3__ dtrace_dstate_t ;
typedef int dtrace_dstate_percpu_t ;
struct TYPE_11__ {scalar_t__ dtdv_hashval; } ;
struct TYPE_8__ {TYPE_5__* dtdh_chain; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 void* FUNC_5 (size_t,int ) ;

__attribute__((used)) static int
FUNC_6(dtrace_dstate_t *VAR_11, size_t VAR_12)
{
 size_t VAR_13, VAR_14, VAR_15, VAR_16 = VAR_11->dtds_chunksize;
 void *VAR_17;
 uintptr_t VAR_18;
 dtrace_dynvar_t *VAR_19, *VAR_20, *VAR_21;
 size_t VAR_22;

 FUNC_1(&VAR_9, VAR_5);
 FUNC_0(VAR_11->dtds_base == ((void*)0) && VAR_11->dtds_percpu == ((void*)0));

 FUNC_3(VAR_11, sizeof (dtrace_dstate_t));

 if ((VAR_11->dtds_chunksize = VAR_16) == 0)
  VAR_11->dtds_chunksize = VAR_1;

 FUNC_2(VAR_11->dtds_chunksize < (VAR_6 - sizeof (dtrace_dynhash_t)));

 if (VAR_12 < (VAR_15 = VAR_11->dtds_chunksize + sizeof (dtrace_dynhash_t)))
  VAR_12 = VAR_15;

 if ((VAR_17 = FUNC_5(VAR_12, VAR_3)) == ((void*)0))
  return (VAR_2);

 VAR_11->dtds_size = VAR_12;
 VAR_11->dtds_base = VAR_17;
 VAR_11->dtds_percpu = FUNC_4(VAR_10, VAR_4);
 FUNC_3(VAR_11->dtds_percpu, (int)VAR_7 * sizeof (dtrace_dstate_percpu_t));

 VAR_13 = VAR_12 / (VAR_11->dtds_chunksize + sizeof (dtrace_dynhash_t));

 if (VAR_13 != 1 && (VAR_13 & 1))
  VAR_13--;

 VAR_11->dtds_hashsize = VAR_13;
 VAR_11->dtds_hash = VAR_11->dtds_base;
 for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++)
  VAR_11->dtds_hash[VAR_22].dtdh_chain = &VAR_8;

 if (VAR_8.dtdv_hashval != VAR_0)
  VAR_8.dtdv_hashval = VAR_0;





 VAR_21 = (dtrace_dynvar_t *)
     ((uintptr_t)VAR_17 + VAR_13 * sizeof (dtrace_dynhash_t));
 VAR_18 = (uintptr_t)VAR_17 + VAR_12;

 FUNC_2((uintptr_t)VAR_21 < VAR_18);
 FUNC_2((uintptr_t)VAR_21 >= (uintptr_t)VAR_17);

 VAR_14 = (VAR_18 - (uintptr_t)VAR_21) / (int)VAR_7;
 VAR_14 = (VAR_14 / VAR_11->dtds_chunksize) * VAR_11->dtds_chunksize;

 for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
  VAR_11->dtds_percpu[VAR_22].dtdsc_free = VAR_19 = VAR_21;
  if (VAR_14 == 0 || VAR_22 == VAR_7 - 1) {
   VAR_18 = (uintptr_t)VAR_17 + VAR_12;
   VAR_21 = ((void*)0);
  } else {
   VAR_18 = (uintptr_t)VAR_21 + VAR_14;
   VAR_21 = (dtrace_dynvar_t *)VAR_18;
  }

  FUNC_2(VAR_18 <= (uintptr_t)VAR_17 + VAR_12);

  for (;;) {
   VAR_20 = (dtrace_dynvar_t *)((uintptr_t)VAR_19 +
       VAR_11->dtds_chunksize);

   if ((uintptr_t)VAR_20 + VAR_11->dtds_chunksize >= VAR_18)
    break;

   FUNC_2((uintptr_t)VAR_19 >= (uintptr_t)VAR_17 &&
       (uintptr_t)VAR_19 <= (uintptr_t)VAR_17 + VAR_12);
   VAR_19->dtdv_next = VAR_20;
   VAR_19 = VAR_20;
  }

  if (VAR_14 == 0)
   break;
 }

 return (0);
}
