
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {unsigned int bd_size; scalar_t__ bd; } ;
typedef void bcom_bd ;



__attribute__((used)) static inline struct bcom_bd
*FUNC_0(struct bcom_task *VAR_0, unsigned int VAR_1)
{


 return ((void *)VAR_0->bd) + (VAR_1 * VAR_0->bd_size);
}
