
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amd64_pvt {int dclr0; int dbam0; int dbam1; } ;
struct TYPE_2__ {int x86; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct amd64_pvt *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;


 if (VAR_1.x86 == 0x10 && (VAR_2->dclr0 & VAR_0))
  return 2;
 FUNC_2("Data width is not 128 bits - need more decoding\n");






 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  u32 VAR_6 = (VAR_3 ? VAR_2->dbam1 : VAR_2->dbam0);

  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   if (FUNC_0(VAR_4, VAR_6) > 0) {
    VAR_5++;
    break;
   }
  }
 }

 if (VAR_5 > 2)
  VAR_5 = 2;

 FUNC_1("MCT channel count: %d\n", VAR_5);

 return VAR_5;
}
