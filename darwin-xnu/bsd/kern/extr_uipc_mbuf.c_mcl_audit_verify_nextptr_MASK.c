
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mca_addr; } ;
typedef TYPE_1__ mcache_audit_t ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,void*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, mcache_audit_t *VAR_5)
{
 if (VAR_4 != ((void*)0) && !FUNC_0(VAR_4) &&
     (VAR_4 != (void *)VAR_0 || !VAR_3)) {
  FUNC_2("mcl_audit: buffer %p modified after free at offset 0: "
      "%p out of range [%p-%p)\n%s\n",
      VAR_5->mca_addr, VAR_4, VAR_2, VAR_1, FUNC_1(VAR_5));

 }
}
