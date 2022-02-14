
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_map_data {struct bio_map_data* sgvecs; struct bio_map_data* iovecs; } ;


 int FUNC_0 (struct bio_map_data*) ;

__attribute__((used)) static void FUNC_1(struct bio_map_data *VAR_0)
{
 FUNC_0(VAR_0->iovecs);
 FUNC_0(VAR_0->sgvecs);
 FUNC_0(VAR_0);
}
