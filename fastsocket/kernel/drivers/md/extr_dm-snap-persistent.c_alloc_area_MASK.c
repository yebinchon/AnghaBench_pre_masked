
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pstore {void* area; void* zero_area; void* header_area; TYPE_1__* store; } ;
struct TYPE_2__ {size_t chunk_size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;

__attribute__((used)) static int FUNC_3(struct pstore *VAR_2)
{
 int VAR_3 = -VAR_0;
 size_t VAR_4;

 VAR_4 = VAR_2->store->chunk_size << VAR_1;





 VAR_2->area = FUNC_1(VAR_4);
 if (!VAR_2->area)
  goto err_area;

 VAR_2->zero_area = FUNC_2(VAR_4);
 if (!VAR_2->zero_area)
  goto err_zero_area;

 VAR_2->header_area = FUNC_1(VAR_4);
 if (!VAR_2->header_area)
  goto err_header_area;

 return 0;

err_header_area:
 FUNC_0(VAR_2->zero_area);

err_zero_area:
 FUNC_0(VAR_2->area);

err_area:
 return VAR_3;
}
