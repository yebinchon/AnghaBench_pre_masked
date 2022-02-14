
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t grant_ref_t ;


 size_t VAR_0 ;
 size_t** VAR_1 ;

__attribute__((used)) static inline grant_ref_t *FUNC_0(grant_ref_t VAR_2)
{
 return &VAR_1[(VAR_2) / VAR_0][(VAR_2) % VAR_0];
}
