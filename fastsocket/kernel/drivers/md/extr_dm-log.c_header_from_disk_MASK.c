
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_header_disk {int nr_regions; int version; int magic; } ;
struct log_header_core {int nr_regions; void* version; void* magic; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct log_header_core *VAR_0, struct log_header_disk *VAR_1)
{
 VAR_0->magic = FUNC_0(VAR_1->magic);
 VAR_0->version = FUNC_0(VAR_1->version);
 VAR_0->nr_regions = FUNC_1(VAR_1->nr_regions);
}
