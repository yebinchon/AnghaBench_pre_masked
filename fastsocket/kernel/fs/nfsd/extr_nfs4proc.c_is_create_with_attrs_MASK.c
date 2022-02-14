
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {scalar_t__ op_create; scalar_t__ op_createmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct nfsd4_open *VAR_4)
{
 return VAR_4->op_create == VAR_3
  && (VAR_4->op_createmode == VAR_2
      || VAR_4->op_createmode == VAR_1
      || VAR_4->op_createmode == VAR_0);
}
