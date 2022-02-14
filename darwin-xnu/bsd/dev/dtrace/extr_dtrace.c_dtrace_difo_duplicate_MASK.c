
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dtrace_vstate_t ;
typedef int dtrace_difv_t ;
struct TYPE_6__ {scalar_t__ dtdo_refcnt; int dtdo_len; size_t dtdo_strlen; int dtdo_intlen; int dtdo_varlen; int * dtdo_vartab; int * dtdo_inttab; int * dtdo_strtab; int * dtdo_buf; } ;
typedef TYPE_1__ dtrace_difo_t ;
typedef int dif_instr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 void* FUNC_3 (size_t,int ) ;
 TYPE_1__* FUNC_4 (int,int ) ;

__attribute__((used)) static dtrace_difo_t *
FUNC_5(dtrace_difo_t *VAR_1, dtrace_vstate_t *VAR_2)
{
 dtrace_difo_t *VAR_3;
 size_t VAR_4;

 FUNC_0(VAR_1->dtdo_buf != ((void*)0));
 FUNC_0(VAR_1->dtdo_refcnt != 0);

 VAR_3 = FUNC_4(sizeof (dtrace_difo_t), VAR_0);

 FUNC_0(VAR_1->dtdo_buf != ((void*)0));
 VAR_4 = VAR_1->dtdo_len * sizeof (dif_instr_t);
 VAR_3->dtdo_buf = FUNC_3(VAR_4, VAR_0);
 FUNC_1(VAR_1->dtdo_buf, VAR_3->dtdo_buf, VAR_4);
 VAR_3->dtdo_len = VAR_1->dtdo_len;

 if (VAR_1->dtdo_strtab != ((void*)0)) {
  FUNC_0(VAR_1->dtdo_strlen != 0);
  VAR_3->dtdo_strtab = FUNC_3(VAR_1->dtdo_strlen, VAR_0);
  FUNC_1(VAR_1->dtdo_strtab, VAR_3->dtdo_strtab, VAR_1->dtdo_strlen);
  VAR_3->dtdo_strlen = VAR_1->dtdo_strlen;
 }

 if (VAR_1->dtdo_inttab != ((void*)0)) {
  FUNC_0(VAR_1->dtdo_intlen != 0);
  VAR_4 = VAR_1->dtdo_intlen * sizeof (uint64_t);
  VAR_3->dtdo_inttab = FUNC_3(VAR_4, VAR_0);
  FUNC_1(VAR_1->dtdo_inttab, VAR_3->dtdo_inttab, VAR_4);
  VAR_3->dtdo_intlen = VAR_1->dtdo_intlen;
 }

 if (VAR_1->dtdo_vartab != ((void*)0)) {
  FUNC_0(VAR_1->dtdo_varlen != 0);
  VAR_4 = VAR_1->dtdo_varlen * sizeof (dtrace_difv_t);
  VAR_3->dtdo_vartab = FUNC_3(VAR_4, VAR_0);
  FUNC_1(VAR_1->dtdo_vartab, VAR_3->dtdo_vartab, VAR_4);
  VAR_3->dtdo_varlen = VAR_1->dtdo_varlen;
 }

 FUNC_2(VAR_3, VAR_2);
 return (VAR_3);
}
