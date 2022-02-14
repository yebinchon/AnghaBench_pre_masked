
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int dummy; } ;
struct hardware_path {int mod; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct parisc_device* FUNC_0 (unsigned long,struct hardware_path*) ;
 struct parisc_device* FUNC_1 (unsigned long) ;
 int FUNC_2 (struct device*,struct hardware_path*) ;
 int FUNC_3 (struct parisc_device*) ;
 int FUNC_4 (struct parisc_device*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2, unsigned long VAR_3,
                            struct device *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 unsigned long VAR_7 = VAR_2;
 struct hardware_path VAR_8;

 FUNC_2(VAR_4, &VAR_8);
 do {
  for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++, VAR_7 += VAR_1) {
   struct parisc_device *VAR_9;


   VAR_9 = FUNC_1(VAR_7);
   if (!VAR_9) {
    VAR_8.mod = VAR_5;
    VAR_9 = FUNC_0(VAR_7, &VAR_8);
    if (!VAR_9)
     continue;

    FUNC_3(VAR_9);
    VAR_6++;
   }
   FUNC_4(VAR_9);
  }
 } while(!VAR_6 && VAR_7 < VAR_3);
}
