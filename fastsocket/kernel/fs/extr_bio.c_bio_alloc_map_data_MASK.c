
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {int dummy; } ;
struct bio_vec {int dummy; } ;
struct bio_map_data {struct bio_map_data* iovecs; void* sgvecs; } ;
typedef int gfp_t ;


 int FUNC_0 (struct bio_map_data*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static struct bio_map_data *FUNC_2(int VAR_0, int VAR_1,
            gfp_t VAR_2)
{
 struct bio_map_data *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_2);

 if (!VAR_3)
  return ((void*)0);

 VAR_3->iovecs = FUNC_1(sizeof(struct bio_vec) * VAR_0, VAR_2);
 if (!VAR_3->iovecs) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->sgvecs = FUNC_1(sizeof(struct sg_iovec) * VAR_1, VAR_2);
 if (VAR_3->sgvecs)
  return VAR_3;

 FUNC_0(VAR_3->iovecs);
 FUNC_0(VAR_3);
 return ((void*)0);
}
