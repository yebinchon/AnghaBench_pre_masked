
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csr1212_csr {int max_rom; int bus_info_len; int bus_info_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;

void FUNC_2(struct csr1212_csr *VAR_0,
       const u32 *VAR_1, int VAR_2)
{
 static const int VAR_3[] = { 4, 64, 1024, 0 };

 FUNC_0(VAR_2 & ~0x3);
 VAR_0->max_rom = VAR_3[VAR_2];
 FUNC_1(VAR_0->bus_info_data, VAR_1, VAR_0->bus_info_len);
}
