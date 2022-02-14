
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ftp_ccount; scalar_t__ ftp_mcount; scalar_t__ ftp_rcount; struct TYPE_5__* ftp_next; scalar_t__ ftp_marked; int ftp_provid; int ftp_mtx; int ftp_retired; } ;
typedef TYPE_1__ fasttrap_provider_t ;
struct TYPE_6__ {int ftb_mtx; int ftb_data; } ;
typedef TYPE_2__ fasttrap_bucket_t ;
typedef int dtrace_provider_id_t ;
struct TYPE_7__ {unsigned int fth_nent; TYPE_2__* fth_table; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned int
FUNC_5(void)
{
 fasttrap_provider_t **VAR_3, *VAR_4;
 fasttrap_bucket_t *VAR_5;
 dtrace_provider_id_t VAR_6;
 unsigned int VAR_7 = 0, VAR_8;







 for (VAR_8 = 0; VAR_8 < VAR_1.fth_nent; VAR_8++) {
  VAR_5 = &VAR_1.fth_table[VAR_8];
  FUNC_3(&VAR_5->ftb_mtx);
  VAR_3 = (fasttrap_provider_t **)&VAR_5->ftb_data;

  while ((VAR_4 = *VAR_3) != ((void*)0)) {
   if (!VAR_4->ftp_marked) {
    VAR_3 = &VAR_4->ftp_next;
    continue;
   }

   FUNC_3(&VAR_4->ftp_mtx);







   if (VAR_4->ftp_ccount != 0 ||
       VAR_4->ftp_mcount != 0) {
    VAR_4->ftp_marked = 0;
    FUNC_4(&VAR_4->ftp_mtx);
    continue;
   }

   if (!VAR_4->ftp_retired || VAR_4->ftp_rcount != 0)
    VAR_4->ftp_marked = 0;

   FUNC_4(&VAR_4->ftp_mtx);
   VAR_6 = VAR_4->ftp_provid;
   if (FUNC_1(VAR_6) != 0) {
    if (VAR_2 > VAR_0 / 2)
     (void) FUNC_0(VAR_6);
    VAR_7 += VAR_4->ftp_marked;
    VAR_3 = &VAR_4->ftp_next;
   } else {
    *VAR_3 = VAR_4->ftp_next;
    FUNC_2(VAR_4);
   }
  }
  FUNC_4(&VAR_5->ftb_mtx);
 }

 return VAR_7;
}
