
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {scalar_t__ bv_len; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct bio_vec *VAR_1)
{
 return VAR_1->bv_len != VAR_0;
}
