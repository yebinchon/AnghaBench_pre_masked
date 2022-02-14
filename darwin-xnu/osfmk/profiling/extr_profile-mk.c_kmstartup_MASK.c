
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int profil_buckets; int max_cpu; scalar_t__ my_cpu; } ;
struct TYPE_3__ {int highpc; int lowpc; int text_len; int profil_len; int counter_size; int scale; } ;
struct profile_vars {int debug; int init; int active; int use_profil; int check_funcs; scalar_t__ use_dci; TYPE_2__ stats; TYPE_1__ profil_info; int profil_buf; int page_size; } ;
typedef int prof_uptrint_t ;
typedef int LHISTCOUNTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct profile_vars* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct profile_vars*,int,int ) ;
 int FUNC_4 (struct profile_vars*,int ,int ) ;
 int FUNC_5 () ;
 int * VAR_5 ;
 int FUNC_6 (char*,long,long,long,long,int ) ;
 int * VAR_6 ;

void
FUNC_7(void)
{
 prof_uptrint_t VAR_7;
 prof_uptrint_t VAR_8;
 prof_uptrint_t VAR_9;
 prof_uptrint_t VAR_10;
 struct profile_vars *VAR_11;






 VAR_9 = FUNC_1((prof_uptrint_t)&VAR_6[0], VAR_1*sizeof(LHISTCOUNTER));
 VAR_10 = FUNC_2((prof_uptrint_t)&VAR_5[0], VAR_1*sizeof(LHISTCOUNTER));
 VAR_7 = VAR_10 - VAR_9;
 VAR_8 = (VAR_7 / VAR_1) * sizeof(LHISTCOUNTER);

 VAR_11 = FUNC_0(0);




 VAR_11->page_size = VAR_2;
 FUNC_4(VAR_11, VAR_4, VAR_3);


 VAR_11->profil_buf = FUNC_3 (VAR_11, VAR_8, VAR_0);
 VAR_11->profil_info.highpc = VAR_10;
 VAR_11->profil_info.lowpc = VAR_9;
 VAR_11->profil_info.text_len = VAR_7;
 VAR_11->profil_info.profil_len = VAR_8;
 VAR_11->profil_info.counter_size = sizeof(LHISTCOUNTER);
 VAR_11->profil_info.scale = 0x10000 / VAR_1;
 VAR_11->stats.profil_buckets = VAR_8 / sizeof(LHISTCOUNTER);


 VAR_11->stats.my_cpu = 0;
 VAR_11->stats.max_cpu = 1;
 VAR_11->init = 1;
 VAR_11->active = 1;
 VAR_11->use_dci = 0;
 VAR_11->use_profil = 1;
 VAR_11->check_funcs = 1;

 if (VAR_11->debug) {
  FUNC_6("Profiling kernel, s_textsize=%ld, monsize=%ld [0x%lx..0x%lx], cpu = %d\n",
    (long)VAR_7,
   (long)VAR_8,
   (long)VAR_9,
   (long)VAR_10,
   0);
 }

 FUNC_5();
}
