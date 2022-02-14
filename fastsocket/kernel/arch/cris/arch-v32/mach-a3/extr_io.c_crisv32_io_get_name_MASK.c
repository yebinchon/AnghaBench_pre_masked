
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crisv32_iopin {int bit; TYPE_1__* port; } ;
struct TYPE_2__ {int pin_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (char const*,int *,int) ;
 char FUNC_2 (char const) ;

int FUNC_3(struct crisv32_iopin *VAR_4, const char *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (FUNC_2(*VAR_5) == 'P')
  VAR_5++;

 if (FUNC_2(*VAR_5) < 'A' || FUNC_2(*VAR_5) > 'E')
  return -VAR_0;

 VAR_6 = FUNC_2(*VAR_5) - 'A';
 VAR_5++;
 VAR_7 = FUNC_1(VAR_5, ((void*)0), 10);

 if (VAR_7 < 0 || VAR_7 > VAR_2[VAR_6].pin_count)
  return -VAR_0;

 VAR_4->bit = 1 << VAR_7;
 VAR_4->port = &VAR_2[VAR_6];

 if (FUNC_0(VAR_6, VAR_7, VAR_7, VAR_3))
  return -VAR_1;

 return 0;
}
