
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct poll_wqueues {int error; int pt; } ;
struct file_operations {unsigned long (* poll ) (struct file*,int *) ;} ;
struct file {struct file_operations* f_op; } ;
typedef int poll_table ;
typedef int ktime_t ;
struct TYPE_4__ {unsigned long* in; unsigned long* out; unsigned long* ex; unsigned long* res_in; unsigned long* res_out; unsigned long* res_ex; } ;
typedef TYPE_1__ fd_set_bits ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 struct file* FUNC_1 (int,int*) ;
 int FUNC_2 (struct file*,int) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (struct poll_wqueues*) ;
 int FUNC_5 (struct poll_wqueues*) ;
 int FUNC_6 (struct poll_wqueues*,int ,int *,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned long FUNC_9 (struct timespec*) ;
 scalar_t__ FUNC_10 (int ) ;
 unsigned long FUNC_11 (struct file*,int *) ;
 int FUNC_12 (struct timespec) ;
 int FUNC_13 (int *,unsigned long,unsigned long,unsigned long) ;

int FUNC_14(int VAR_7, fd_set_bits *VAR_8, struct timespec *VAR_9)
{
 ktime_t VAR_10, *VAR_11 = ((void*)0);
 struct poll_wqueues VAR_12;
 poll_table *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;
 unsigned long VAR_17 = 0;

 FUNC_7();
 VAR_14 = FUNC_3(VAR_7, VAR_8);
 FUNC_8();

 if (VAR_14 < 0)
  return VAR_14;
 VAR_7 = VAR_14;

 FUNC_5(&VAR_12);
 VAR_13 = &VAR_12.pt;
 if (VAR_9 && !VAR_9->tv_sec && !VAR_9->tv_nsec) {
  VAR_13 = ((void*)0);
  VAR_16 = 1;
 }

 if (VAR_9 && !VAR_16)
  VAR_17 = FUNC_9(VAR_9);

 VAR_14 = 0;
 for (;;) {
  unsigned long *VAR_18, *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;

  VAR_21 = VAR_8->in; VAR_22 = VAR_8->out; VAR_23 = VAR_8->ex;
  VAR_18 = VAR_8->res_in; VAR_19 = VAR_8->res_out; VAR_20 = VAR_8->res_ex;

  for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_18, ++VAR_19, ++VAR_20) {
   unsigned long VAR_24, VAR_25, VAR_26, VAR_27, VAR_28 = 1, VAR_29, VAR_30;
   unsigned long VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
   const struct file_operations *VAR_34 = ((void*)0);
   struct file *VAR_35 = ((void*)0);

   VAR_24 = *VAR_21++; VAR_25 = *VAR_22++; VAR_26 = *VAR_23++;
   VAR_27 = VAR_24 | VAR_25 | VAR_26;
   if (VAR_27 == 0) {
    VAR_15 += VAR_5;
    continue;
   }

   for (VAR_30 = 0; VAR_30 < VAR_5; ++VAR_30, ++VAR_15, VAR_28 <<= 1) {
    int VAR_36;
    if (VAR_15 >= VAR_7)
     break;
    if (!(VAR_28 & VAR_27))
     continue;
    VAR_35 = FUNC_1(VAR_15, &VAR_36);
    if (VAR_35) {
     VAR_34 = VAR_35->f_op;
     VAR_29 = VAR_0;
     if (VAR_34 && VAR_34->poll) {
      FUNC_13(VAR_13, VAR_24, VAR_25, VAR_28);
      VAR_29 = (*VAR_34->poll)(VAR_35, VAR_13);
     }
     FUNC_2(VAR_35, VAR_36);
     if ((VAR_29 & VAR_2) && (VAR_24 & VAR_28)) {
      VAR_31 |= VAR_28;
      VAR_14++;
      VAR_13 = ((void*)0);
     }
     if ((VAR_29 & VAR_3) && (VAR_25 & VAR_28)) {
      VAR_32 |= VAR_28;
      VAR_14++;
      VAR_13 = ((void*)0);
     }
     if ((VAR_29 & VAR_1) && (VAR_26 & VAR_28)) {
      VAR_33 |= VAR_28;
      VAR_14++;
      VAR_13 = ((void*)0);
     }
    }
   }
   if (VAR_31)
    *VAR_18 = VAR_31;
   if (VAR_32)
    *VAR_19 = VAR_32;
   if (VAR_33)
    *VAR_20 = VAR_33;
   FUNC_0();
  }
  VAR_13 = ((void*)0);
  if (VAR_14 || VAR_16 || FUNC_10(VAR_6))
   break;
  if (VAR_12.error) {
   VAR_14 = VAR_12.error;
   break;
  }






  if (VAR_9 && !VAR_11) {
   VAR_10 = FUNC_12(*VAR_9);
   VAR_11 = &VAR_10;
  }

  if (!FUNC_6(&VAR_12, VAR_4,
        VAR_11, VAR_17))
   VAR_16 = 1;
 }

 FUNC_4(&VAR_12);

 return VAR_14;
}
