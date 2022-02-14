
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {scalar_t__ kn_filter; int kn_filtid; struct bpf_d* kn_hook; int kn_data; void* kn_flags; } ;
struct TYPE_2__ {int si_note; } ;
struct bpf_d {int bd_flags; TYPE_1__ bd_sel; int * bd_bif; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct bpf_d* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int *,struct knote*) ;
 struct bpf_d** VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct knote*,struct bpf_d*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;

int
FUNC_6(dev_t VAR_11, struct knote *VAR_12)
{
 struct bpf_d *VAR_13;
 int VAR_14;




 if (FUNC_4(VAR_11) != VAR_3 ||
     VAR_12->kn_filter != VAR_7) {
  VAR_12->kn_flags = VAR_8;
  VAR_12->kn_data = VAR_4;
  return (0);
 }

 FUNC_2(VAR_10);

 VAR_13 = VAR_9[FUNC_5(VAR_11)];

 if (VAR_13 == ((void*)0) || VAR_13 == VAR_1 ||
     (VAR_13->bd_flags & VAR_0) != 0 ||
     VAR_13->bd_bif == ((void*)0)) {
  FUNC_3(VAR_10);
  VAR_12->kn_flags = VAR_8;
  VAR_12->kn_data = VAR_5;
  return (0);
 }

 VAR_12->kn_hook = VAR_13;
 VAR_12->kn_filtid = VAR_6;
 FUNC_0(&VAR_13->bd_sel.si_note, VAR_12);
 VAR_13->bd_flags |= VAR_2;


 VAR_14 = FUNC_1(VAR_12, VAR_13);

 FUNC_3(VAR_10);

 return (VAR_14);
}
