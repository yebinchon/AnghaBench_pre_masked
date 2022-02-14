
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qib_pportdata {size_t port; scalar_t__ link_speed_supported; TYPE_1__* cpspec; } ;
struct qib_devdata {size_t num_pports; size_t unit; struct qib_pportdata* pport; } ;
struct TYPE_2__ {size_t no_eep; size_t h1_val; } ;


 scalar_t__ FUNC_0 (struct qib_devdata*) ;
 scalar_t__ FUNC_1 (struct qib_devdata*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qib_pportdata*,int) ;
 int FUNC_3 (struct qib_pportdata*,int ,int ) ;
 void* FUNC_4 (char*,char**,int ) ;
 char* VAR_4 ;

__attribute__((used)) static void FUNC_5(struct qib_devdata *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0, VAR_16;
 int VAR_17;

 VAR_8 = VAR_4;


 VAR_12 = FUNC_4(VAR_8, &VAR_7, 0);
 for (VAR_9 = 0; VAR_9 < VAR_5->num_pports; ++VAR_9)
  VAR_5->pport[VAR_9].cpspec->no_eep = VAR_12;

 VAR_17 = VAR_3 + VAR_1;
 if (FUNC_0(VAR_5) || FUNC_1(VAR_5))
  VAR_17 += VAR_2;

 while (*VAR_7 && VAR_7[1]) {
  VAR_8 = ++VAR_7;
  VAR_10 = FUNC_4(VAR_8, &VAR_7, 0);
  if (VAR_7 == VAR_8 || !*VAR_7 || *VAR_7 != ',') {
   while (*VAR_7 && *VAR_7++ != ' ')
    ;
   continue;
  }
  VAR_8 = ++VAR_7;
  VAR_11 = FUNC_4(VAR_8, &VAR_7, 0);
  if (VAR_7 == VAR_8 || *VAR_7 != '=') {
   while (*VAR_7 && *VAR_7++ != ' ')
    ;
   continue;
  }
  VAR_8 = ++VAR_7;
  VAR_14 = FUNC_4(VAR_8, &VAR_7, 0);
  if (VAR_7 == VAR_8) {
   while (*VAR_7 && *VAR_7++ != ' ')
    ;
   continue;
  }
  if (VAR_14 >= VAR_17)
   continue;
  VAR_16 = 0;
  VAR_13 = 0;
  if (*VAR_7 == ',' && VAR_7[1]) {
   VAR_8 = ++VAR_7;
   VAR_13 = (u32)FUNC_4(VAR_8, &VAR_7, 0);
   if (VAR_7 == VAR_8)
    while (*VAR_7 && *VAR_7++ != ' ')
     ;
   else
    VAR_16 = 1;
  }
  for (VAR_9 = 0; VAR_5->unit == VAR_10 && VAR_9 < VAR_5->num_pports;
       ++VAR_9) {
   struct qib_pportdata *VAR_18 = &VAR_5->pport[VAR_9];

   if (VAR_18->port != VAR_11 || !VAR_18->link_speed_supported)
    continue;
   VAR_18->cpspec->no_eep = VAR_14;
   if (VAR_16)
    VAR_18->cpspec->h1_val = VAR_13;

   FUNC_2(VAR_18, 1);



   if (FUNC_1(VAR_5) || FUNC_0(VAR_5))
    FUNC_3(VAR_18, 0,
         VAR_0);
   VAR_15++;
  }
  if (*VAR_7 == '\n')
   break;
 }
 if (VAR_6 && !VAR_15) {




  for (VAR_9 = 0; VAR_9 < VAR_5->num_pports; ++VAR_9)
   if (VAR_5->pport[VAR_9].link_speed_supported)
    FUNC_2(&VAR_5->pport[VAR_9], 0);
 }
}
