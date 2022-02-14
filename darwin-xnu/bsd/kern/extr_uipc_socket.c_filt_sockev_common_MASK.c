
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct socket {int so_state; int so_flags; scalar_t__ so_error; int so_rcv; TYPE_1__* so_proto; } ;
struct knote {int kn_fflags; int kn_hookid; scalar_t__ kn_data; int kn_sfflags; int kn_flags; } ;
struct TYPE_2__ {int pr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 long VAR_20 ;
 long VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 long VAR_24 ;
 long VAR_25 ;
 long VAR_26 ;
 long VAR_27 ;
 long VAR_28 ;
 long VAR_29 ;
 long VAR_30 ;
 long VAR_31 ;
 long VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,int *) ;
 scalar_t__ FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_37, struct socket *VAR_38, long VAR_39)
{
 int VAR_40 = 0;
 uint32_t VAR_41 = 0;

 if (VAR_39 & VAR_24) {
  VAR_37->kn_fflags |= VAR_7;
 }
 if (VAR_39 & VAR_32) {
  VAR_37->kn_fflags |= VAR_16;
 }
 if (VAR_39 & VAR_28) {
  VAR_37->kn_fflags |= VAR_11;
 }
 if (VAR_39 & VAR_26) {
  VAR_37->kn_fflags |= VAR_9;
 }
 if (VAR_39 & VAR_27) {
  VAR_37->kn_fflags |= VAR_10;
 }
 if (VAR_39 & VAR_21) {
  VAR_37->kn_fflags |= VAR_4;
 }
 if (VAR_39 & VAR_20) {
  VAR_37->kn_fflags |= VAR_3;
 }
 if ((VAR_39 & VAR_22) ||
     (VAR_38->so_state & VAR_35)) {
  VAR_37->kn_fflags |= VAR_5;
  VAR_41 |= VAR_5;
 }
 if ((VAR_39 & VAR_25) ||
     (VAR_38->so_state & VAR_36)) {
  VAR_37->kn_fflags |= VAR_8;
  VAR_41 |= VAR_8;
 }
 if (VAR_39 & VAR_23) {
  if (VAR_38->so_proto != ((void*)0) &&
      (VAR_38->so_proto->pr_flags & VAR_18))
   VAR_37->kn_fflags |= VAR_6;
 }

 if ((VAR_39 & VAR_29) ||
     FUNC_2(VAR_38)) {
  VAR_37->kn_fflags |= VAR_12;
 }

 if ((VAR_38->so_state & VAR_33)



     ) {
  VAR_37->kn_fflags |= VAR_13;
  VAR_41 |= VAR_13;
 }

 if (VAR_38->so_state & VAR_34) {
  VAR_37->kn_fflags |= VAR_17;
  VAR_41 |= VAR_17;
 }

 if ((VAR_39 & VAR_31) ||
     (VAR_38->so_flags & VAR_19)) {
  VAR_37->kn_fflags &= ~(VAR_15 | VAR_14);


  VAR_37->kn_hookid &= ~VAR_14;

  VAR_37->kn_fflags |= VAR_15;
  VAR_41 |= VAR_15;
 }

 if ((VAR_39 & VAR_30) ||
     (VAR_38->so_flags & VAR_19) == 0) {
  VAR_37->kn_fflags &= ~(VAR_15 | VAR_14);


  VAR_37->kn_hookid &= ~VAR_15;

  VAR_37->kn_fflags |= VAR_14;
  VAR_41 |= VAR_14;
 }

 if (VAR_38->so_error != 0) {
  VAR_40 = 1;
  VAR_37->kn_data = VAR_38->so_error;
  VAR_37->kn_flags |= VAR_2;
 } else {
  FUNC_1(VAR_38, (u_int32_t *)&(VAR_37->kn_data));
 }


 VAR_37->kn_fflags &= (VAR_37->kn_sfflags & VAR_0);
 VAR_41 &= (VAR_37->kn_sfflags & VAR_0);


 VAR_41 &= VAR_37->kn_hookid;
 VAR_41 &= VAR_1;


 if ((VAR_37->kn_fflags & ~VAR_41) != 0)
  VAR_40 = 1;

 return (VAR_40);
}
