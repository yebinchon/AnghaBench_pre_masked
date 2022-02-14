
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct parisc_device {int dummy; } ;
struct ioc {int cujo20_bug; int* res_map; unsigned int res_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ioc* FUNC_1 (struct parisc_device*) ;
 struct parisc_device* FUNC_2 (struct parisc_device*) ;

void FUNC_3(struct parisc_device *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;
 struct parisc_device *VAR_4 = FUNC_2(VAR_1);
 struct ioc *VAR_5 = FUNC_1(VAR_4);
 u8 *VAR_6;

 VAR_5->cujo20_bug = 1;
 VAR_6 = VAR_5->res_map;
 VAR_3 = FUNC_0(VAR_2) >> 3;

 while (VAR_3 < VAR_5->res_size) {
   VAR_6[VAR_3] |= 0xff;
  VAR_3 += FUNC_0(VAR_0) >> 3;
 }
}
