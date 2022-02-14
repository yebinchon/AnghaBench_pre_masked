
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t processorid_t ;
struct TYPE_5__ {size_t cpu_id; struct TYPE_5__* cpu_next; } ;
typedef TYPE_1__ dtrace_cpu_t ;
struct TYPE_6__ {size_t dtb_size; size_t dtb_cur_limit; size_t dtb_limit; int dtb_flags; int * dtb_xamot; int * dtb_tomax; scalar_t__ dtb_drops; scalar_t__ dtb_offset; } ;
typedef TYPE_2__ dtrace_buffer_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (size_t) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int *,size_t) ;
 void* FUNC_6 (size_t,int ) ;

__attribute__((used)) static int
FUNC_7(dtrace_buffer_t *VAR_14, size_t VAR_15, size_t VAR_16, int VAR_17,
    processorid_t VAR_18)
{
 dtrace_cpu_t *VAR_19;
 dtrace_buffer_t *VAR_20;
 size_t VAR_21 = VAR_10;

 FUNC_2(&VAR_9, VAR_6);
 FUNC_2(&VAR_12, VAR_6);

 if (VAR_16 > (size_t)VAR_13 &&
     !FUNC_3(FUNC_1(), VAR_7, VAR_0))
  return (VAR_3);

 VAR_19 = VAR_8;

 do {
  if (VAR_18 != VAR_2 && VAR_18 != VAR_19->cpu_id)
   continue;

  VAR_20 = &VAR_14[VAR_19->cpu_id];






  if (VAR_20->dtb_tomax != ((void*)0)) {
   FUNC_0(VAR_20->dtb_size == VAR_16);
   continue;
  }

  FUNC_0(VAR_20->dtb_xamot == ((void*)0));


  if (FUNC_4(VAR_16) == VAR_0)
   goto err;
  if ((VAR_20->dtb_tomax = FUNC_6(VAR_16, VAR_5)) == ((void*)0))
   goto err;
  VAR_10 += VAR_16;


  VAR_15 = VAR_15 == VAR_16 ? VAR_15 - 1 : VAR_15;
  VAR_20->dtb_cur_limit = VAR_15;
  VAR_20->dtb_limit = VAR_15;
  VAR_20->dtb_size = VAR_16;
  VAR_20->dtb_flags = VAR_17;
  VAR_20->dtb_offset = 0;
  VAR_20->dtb_drops = 0;

  if (VAR_17 & VAR_1)
   continue;


  if (FUNC_4(VAR_16) == VAR_0)
   goto err;
  if ((VAR_20->dtb_xamot = FUNC_6(VAR_16, VAR_5)) == ((void*)0))
   goto err;
  VAR_10 += VAR_16;
 } while ((VAR_19 = VAR_19->cpu_next) != VAR_8);

 FUNC_0(VAR_10 <= VAR_11);

 return (0);

err:
 VAR_19 = VAR_8;

 do {
  if (VAR_18 != VAR_2 && VAR_18 != VAR_19->cpu_id)
   continue;

  VAR_20 = &VAR_14[VAR_19->cpu_id];

  if (VAR_20->dtb_xamot != ((void*)0)) {
   FUNC_0(VAR_20->dtb_tomax != ((void*)0));
   FUNC_0(VAR_20->dtb_size == VAR_16);
   FUNC_5(VAR_20->dtb_xamot, VAR_16);
  }

  if (VAR_20->dtb_tomax != ((void*)0)) {
   FUNC_0(VAR_20->dtb_size == VAR_16);
   FUNC_5(VAR_20->dtb_tomax, VAR_16);
  }

  VAR_20->dtb_tomax = ((void*)0);
  VAR_20->dtb_xamot = ((void*)0);
  VAR_20->dtb_size = 0;
 } while ((VAR_19 = VAR_19->cpu_next) != VAR_8);


 VAR_10 = VAR_21;

 return (VAR_4);
}
