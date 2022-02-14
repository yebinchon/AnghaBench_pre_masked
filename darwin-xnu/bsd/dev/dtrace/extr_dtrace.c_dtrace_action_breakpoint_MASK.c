
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* dtpv_name; } ;
typedef TYPE_1__ dtrace_provider_t ;
struct TYPE_6__ {char* dtpr_mod; char* dtpr_func; char* dtpr_name; TYPE_1__* dtpr_provider; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_7__ {TYPE_2__* dte_probe; } ;
typedef TYPE_3__ dtrace_ecb_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(dtrace_ecb_t *VAR_3)
{
 dtrace_probe_t *VAR_4 = VAR_3->dte_probe;
 dtrace_provider_t *VAR_5 = VAR_4->dtpr_provider;
 char VAR_6[VAR_0 + 80], *VAR_7;
 const char *VAR_8 = "dtrace: breakpoint action at probe ";
 const char *VAR_9 = " (ecb ";
 uintptr_t VAR_10 = (0xf << (sizeof (uintptr_t) * VAR_1 / 4));
 uintptr_t VAR_11 = (uintptr_t)VAR_3;
 int VAR_12 = (sizeof (uintptr_t) * VAR_1) - 4, VAR_13 = 0;

 if (VAR_2)
  return;




 FUNC_0(VAR_4 != ((void*)0));
 while (*VAR_8 != '\0')
  VAR_6[VAR_13++] = *VAR_8++;

 for (VAR_7 = VAR_5->dtpv_name; *VAR_7 != '\0'; VAR_7++)
  VAR_6[VAR_13++] = *VAR_7;
 VAR_6[VAR_13++] = ':';

 for (VAR_7 = VAR_4->dtpr_mod; *VAR_7 != '\0'; VAR_7++)
  VAR_6[VAR_13++] = *VAR_7;
 VAR_6[VAR_13++] = ':';

 for (VAR_7 = VAR_4->dtpr_func; *VAR_7 != '\0'; VAR_7++)
  VAR_6[VAR_13++] = *VAR_7;
 VAR_6[VAR_13++] = ':';

 for (VAR_7 = VAR_4->dtpr_name; *VAR_7 != '\0'; VAR_7++)
  VAR_6[VAR_13++] = *VAR_7;

 while (*VAR_9 != '\0')
  VAR_6[VAR_13++] = *VAR_9++;

 while (VAR_12 >= 0) {
  VAR_10 = (uintptr_t)0xf << VAR_12;

  if (VAR_11 >= ((uintptr_t)1 << VAR_12))
   VAR_6[VAR_13++] = "0123456789abcdef"[(VAR_11 & VAR_10) >> VAR_12];
  VAR_12 -= 4;
 }

 VAR_6[VAR_13++] = ')';
 VAR_6[VAR_13] = '\0';

 FUNC_1(VAR_6);
}
