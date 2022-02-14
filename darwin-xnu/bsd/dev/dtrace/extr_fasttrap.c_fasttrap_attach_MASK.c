
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong_t ;
typedef int fasttrap_bucket_t ;
struct TYPE_12__ {int fth_nent; int fth_mask; TYPE_3__* fth_table; } ;
struct TYPE_11__ {int fth_nent; int fth_mask; TYPE_2__* fth_table; } ;
struct TYPE_10__ {int fth_nent; int fth_mask; TYPE_1__* fth_table; } ;
struct TYPE_9__ {int ftb_mtx; } ;
struct TYPE_8__ {int ftb_mtx; } ;
struct TYPE_7__ {int ftb_mtx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (char*,int *,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_6__ VAR_17 ;
 TYPE_5__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_4__ VAR_21 ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_6(void)
{
 ulong_t VAR_23;
 unsigned int VAR_24;




 VAR_9 = &VAR_11;
 VAR_8 = &VAR_10;
 VAR_7 = &VAR_10;






 VAR_14 = (VAR_22 >> 28) * 100000;

 if (VAR_14 == 0)
  VAR_14 = 50000;

 VAR_20 = 0;
 VAR_19 = 0;
 VAR_23 = VAR_4;


 if (VAR_23 <= 0 || VAR_23 > 0x1000000)
  VAR_23 = VAR_4;

 if ((VAR_23 & (VAR_23 - 1)) == 0)
  VAR_21.fth_nent = VAR_23;
 else
  VAR_21.fth_nent = 1 << FUNC_3(VAR_23);
 FUNC_0(VAR_21.fth_nent > 0);
 VAR_21.fth_mask = VAR_21.fth_nent - 1;
 VAR_21.fth_table = FUNC_4(VAR_21.fth_nent *
     sizeof (fasttrap_bucket_t), VAR_5);
 FUNC_0(VAR_21.fth_table != ((void*)0));

 for (VAR_24 = 0; VAR_24 < VAR_21.fth_nent; VAR_24++) {
  FUNC_5(&VAR_21.fth_table[VAR_24].ftb_mtx, VAR_13, VAR_12);
 }




 VAR_23 = VAR_3;
 if ((VAR_23 & (VAR_23 - 1)) == 0)
  VAR_18.fth_nent = VAR_23;
 else
  VAR_18.fth_nent = 1 << FUNC_3(VAR_23);
 FUNC_0(VAR_18.fth_nent > 0);
 VAR_18.fth_mask = VAR_18.fth_nent - 1;
 VAR_18.fth_table = FUNC_4(VAR_18.fth_nent *
     sizeof (fasttrap_bucket_t), VAR_5);
 FUNC_0(VAR_18.fth_table != ((void*)0));

 for (VAR_24 = 0; VAR_24 < VAR_18.fth_nent; VAR_24++) {
  FUNC_5(&VAR_18.fth_table[VAR_24].ftb_mtx, VAR_13, VAR_12);
 }




 VAR_23 = VAR_2;
 if ((VAR_23 & (VAR_23 - 1)) == 0)
  VAR_17.fth_nent = VAR_23;
 else
  VAR_17.fth_nent = 1 << FUNC_3(VAR_23);
 FUNC_0(VAR_17.fth_nent > 0);
 VAR_17.fth_mask = VAR_17.fth_nent - 1;
 VAR_17.fth_table = FUNC_4(VAR_17.fth_nent *
     sizeof (fasttrap_bucket_t), VAR_5);
 FUNC_0(VAR_17.fth_table != ((void*)0));


 for (VAR_24 = 0; VAR_24 < VAR_17.fth_nent; VAR_24++) {
  FUNC_5(&VAR_17.fth_table[VAR_24].ftb_mtx, VAR_13, VAR_12);
 }


 (void) FUNC_2("fasttrap", &VAR_16, ((void*)0),
     &VAR_15);
}
