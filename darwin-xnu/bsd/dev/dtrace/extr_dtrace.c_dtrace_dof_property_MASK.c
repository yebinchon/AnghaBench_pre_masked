
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_6__ {unsigned int dofh_loadsz; } ;
typedef TYPE_1__ dof_hdr_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,TYPE_1__*,unsigned int*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* FUNC_5 (unsigned int,int,int ) ;

__attribute__((used)) static dof_hdr_t *
FUNC_6(const char *VAR_2)
{
 unsigned int VAR_3 = 0;
 dof_hdr_t *VAR_4;

 if (FUNC_4() && !FUNC_1()) {
  return ((void*)0);
 }

 if (!FUNC_0(VAR_2, ((void*)0), &VAR_3)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_5(VAR_3, 8, VAR_0);

 if (!FUNC_0(VAR_2, VAR_4, &VAR_3)) {
  FUNC_2(VAR_4);
  FUNC_3(((void*)0), "unreadable DOF");
  return ((void*)0);
 }

 if (VAR_3 < sizeof (dof_hdr_t)) {
  FUNC_2(VAR_4);
  FUNC_3(((void*)0), "truncated header");
  return (((void*)0));
 }

 if (VAR_3 < VAR_4->dofh_loadsz) {
  FUNC_2(VAR_4);
  FUNC_3(((void*)0), "truncated DOF");
  return (((void*)0));
 }

 if (VAR_3 != VAR_4->dofh_loadsz) {
  FUNC_2(VAR_4);
  FUNC_3(((void*)0), "invalid DOF size");
  return (((void*)0));
 }

 if (VAR_4->dofh_loadsz >= (uint64_t)VAR_1) {
  FUNC_2(VAR_4);
  FUNC_3(((void*)0), "oversized DOF");
  return (((void*)0));
 }

 return (VAR_4);
}
