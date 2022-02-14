
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobj_attribute {int dummy; } ;
struct event_counter {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_6__ {TYPE_4__ attr; int store; int show; } ;
struct TYPE_5__ {TYPE_4__** attrs; } ;


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
 TYPE_4__** VAR_14 ;
 int * VAR_15 ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_19 ;
 void* FUNC_1 (int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,TYPE_1__*) ;

void FUNC_6(void)
{
 int VAR_22;

 if (VAR_15)
  return;

 VAR_21 = VAR_12;
 VAR_20 = VAR_21 + VAR_5 + VAR_11;

 VAR_14 = FUNC_1(sizeof(struct attribute *) * (VAR_20 + 1),
   VAR_10);
 if (VAR_14 == ((void*)0))
  return;

 VAR_15 = FUNC_1(sizeof(struct event_counter) * (VAR_20),
    VAR_10);
 if (VAR_15 == ((void*)0))
  goto fail;

 VAR_16 = FUNC_1(sizeof(struct kobj_attribute) * (VAR_20),
   VAR_10);
 if (VAR_16 == ((void*)0))
  goto fail;

 for (VAR_22 = 0; VAR_22 < VAR_20; ++VAR_22) {
  char VAR_23[12];
  char *VAR_24;

  if (VAR_22 < VAR_21)
   FUNC_2(VAR_23, "gpe%02X", VAR_22);
  else if (VAR_22 == VAR_21 + VAR_1)
   FUNC_2(VAR_23, "ff_pmtimer");
  else if (VAR_22 == VAR_21 + VAR_0)
   FUNC_2(VAR_23, "ff_gbl_lock");
  else if (VAR_22 == VAR_21 + VAR_2)
   FUNC_2(VAR_23, "ff_pwr_btn");
  else if (VAR_22 == VAR_21 + VAR_4)
   FUNC_2(VAR_23, "ff_slp_btn");
  else if (VAR_22 == VAR_21 + VAR_3)
   FUNC_2(VAR_23, "ff_rt_clk");
  else if (VAR_22 == VAR_21 + VAR_5 + VAR_7)
   FUNC_2(VAR_23, "gpe_all");
  else if (VAR_22 == VAR_21 + VAR_5 + VAR_8)
   FUNC_2(VAR_23, "sci");
  else if (VAR_22 == VAR_21 + VAR_5 + VAR_9)
   FUNC_2(VAR_23, "sci_not");
  else if (VAR_22 == VAR_21 + VAR_5 + VAR_6)
   FUNC_2(VAR_23, "error");
  else
   FUNC_2(VAR_23, "bug%02X", VAR_22);

  VAR_24 = FUNC_1(FUNC_3(VAR_23) + 1, VAR_10);
  if (VAR_24 == ((void*)0))
   goto fail;
  FUNC_4(VAR_24, VAR_23, FUNC_3(VAR_23) + 1);

  VAR_16[VAR_22].attr.name = VAR_24;
  VAR_16[VAR_22].attr.mode = 0644;
  VAR_16[VAR_22].show = VAR_18;
  VAR_16[VAR_22].store = VAR_17;

  VAR_14[VAR_22] = &VAR_16[VAR_22].attr;
 }

 VAR_19.attrs = VAR_14;
 if (!FUNC_5(VAR_13, &VAR_19))
  return;

fail:
 FUNC_0();
 return;
}
