
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static pte_t FUNC_3(struct page *VAR_1, pgprot_t VAR_2)
{ return FUNC_0((FUNC_1(VAR_1) << (VAR_0-4)) | FUNC_2(VAR_2)); }
