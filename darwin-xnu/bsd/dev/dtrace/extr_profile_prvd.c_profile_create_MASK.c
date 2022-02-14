
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prof_kind; int prof_id; int prof_cyclic; scalar_t__ prof_interval; int prof_name; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int profile_probe_percpu_t ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int ,int *,int *,char const*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,char const*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_5(hrtime_t VAR_10, const char *VAR_11, int VAR_12)
{
 profile_probe_t *VAR_13;

 if (VAR_10 < VAR_7)
  return;

 if (FUNC_2(VAR_6, ((void*)0), ((void*)0), VAR_11) != 0)
  return;

 FUNC_0(&VAR_9, 1);
 if (VAR_9 > VAR_8) {
  FUNC_0(&VAR_9, -1);
  return;
 }

 if (VAR_4 == VAR_12)
  VAR_13 = FUNC_3(sizeof (profile_probe_t), VAR_1);
 else
  VAR_13 = FUNC_3(sizeof (profile_probe_t) + VAR_2*sizeof(profile_probe_percpu_t), VAR_1);

 (void) FUNC_4(VAR_13->prof_name, VAR_11, sizeof(VAR_13->prof_name));
 VAR_13->prof_interval = VAR_10;
 VAR_13->prof_cyclic = VAR_0;
 VAR_13->prof_kind = VAR_12;
 VAR_13->prof_id = FUNC_1(VAR_6,
     ((void*)0), ((void*)0), VAR_11,
     VAR_5 ? VAR_5 : VAR_3, VAR_13);
}
