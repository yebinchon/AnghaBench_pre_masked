
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_sg_pool {int pool; } ;
struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 struct scatterlist* FUNC_0 (int ,int ) ;
 struct scsi_host_sg_pool* VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static struct scatterlist *FUNC_2(unsigned int VAR_1, gfp_t VAR_2)
{
 struct scsi_host_sg_pool *VAR_3;

 VAR_3 = VAR_0 + FUNC_1(VAR_1);
 return FUNC_0(VAR_3->pool, VAR_2);
}
