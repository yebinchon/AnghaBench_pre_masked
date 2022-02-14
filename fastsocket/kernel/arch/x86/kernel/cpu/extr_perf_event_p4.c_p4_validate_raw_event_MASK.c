
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int config; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_6__ {unsigned int escr_emask; scalar_t__ shared; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 () ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_7)
{
 unsigned int VAR_8, VAR_9;


 VAR_8 = FUNC_4(VAR_7->attr.config);
 if (VAR_8 >= FUNC_0(VAR_5))
  return -VAR_2;


 if (!FUNC_6(VAR_8))
  return -VAR_2;
 if (FUNC_7() && VAR_5[VAR_8].shared) {
  if (FUNC_8() && !FUNC_1(VAR_0))
   return -VAR_1;
 }


 VAR_9 = FUNC_3(VAR_7->attr.config) & VAR_3;
 if (VAR_9 & ~VAR_5[VAR_8].escr_emask)
  return -VAR_2;




 if (FUNC_2(VAR_7->attr.config, VAR_4))
  return -VAR_2;

 VAR_8 = FUNC_5(VAR_7->attr.config);
 if (VAR_8 >= FUNC_0(VAR_6))
  return -VAR_2;

 return 0;
}
