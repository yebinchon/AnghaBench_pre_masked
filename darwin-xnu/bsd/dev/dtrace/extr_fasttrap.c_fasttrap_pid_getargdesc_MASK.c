
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t ftp_nargs; int* ftp_argmap; char* ftp_ntypes; char* ftp_xtypes; TYPE_1__* ftp_prov; } ;
typedef TYPE_2__ fasttrap_probe_t ;
typedef int dtrace_id_t ;
struct TYPE_7__ {char* dtargd_native; char* dtargd_xlate; size_t dtargd_ndx; } ;
typedef TYPE_3__ dtrace_argdesc_t ;
struct TYPE_5__ {scalar_t__ ftp_retired; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, dtrace_id_t VAR_2, void *VAR_3,
    dtrace_argdesc_t *VAR_4)
{
#pragma unused(arg, id)
 fasttrap_probe_t *VAR_5 = VAR_3;
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_4->dtargd_native[0] = '\0';
 VAR_4->dtargd_xlate[0] = '\0';

 if (VAR_5->ftp_prov->ftp_retired != 0 ||
     VAR_4->dtargd_ndx >= VAR_5->ftp_nargs) {
  VAR_4->dtargd_ndx = VAR_0;
  return;
 }

 VAR_8 = (VAR_5->ftp_argmap != ((void*)0)) ?
  VAR_5->ftp_argmap[VAR_4->dtargd_ndx] : VAR_4->dtargd_ndx;

 VAR_6 = VAR_5->ftp_ntypes;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 += FUNC_1(VAR_6) + 1;
 }

 (void) FUNC_0(VAR_4->dtargd_native, VAR_6, sizeof(VAR_4->dtargd_native));

 if (VAR_5->ftp_xtypes == ((void*)0))
  return;

 VAR_6 = VAR_5->ftp_xtypes;
 for (VAR_7 = 0; VAR_7 < VAR_4->dtargd_ndx; VAR_7++) {
  VAR_6 += FUNC_1(VAR_6) + 1;
 }

 (void) FUNC_0(VAR_4->dtargd_xlate, VAR_6, sizeof(VAR_4->dtargd_xlate));
}
