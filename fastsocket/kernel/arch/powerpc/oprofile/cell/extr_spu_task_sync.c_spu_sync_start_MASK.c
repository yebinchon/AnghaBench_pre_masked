
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ last_guard_val; scalar_t__ ctx_sw_seen; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_6 (int,int) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_8(void)
{
 int VAR_11;
 int VAR_12 = VAR_1;
 int VAR_13;
 unsigned long VAR_14 = 0;

 VAR_8 = FUNC_1();
 VAR_5 = VAR_8 * 8;
 FUNC_0(&VAR_9, VAR_10);




 VAR_12 = FUNC_2();
 if (VAR_12)
  goto out;

 FUNC_4(&VAR_4, VAR_14);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  FUNC_6(VAR_0, VAR_11);
  FUNC_6(VAR_2, VAR_11);
  FUNC_6(VAR_5, VAR_11);
 }
 FUNC_5(&VAR_4, VAR_14);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_7[VAR_11].ctx_sw_seen = 0;
  VAR_7[VAR_11].last_guard_val = 0;
 }


 VAR_13 = FUNC_7(&VAR_6);
 if (VAR_13) {
  VAR_12 = VAR_3;
  goto out;
 }

 FUNC_3("spu_sync_start -- running.\n");
out:
 return VAR_12;
}
