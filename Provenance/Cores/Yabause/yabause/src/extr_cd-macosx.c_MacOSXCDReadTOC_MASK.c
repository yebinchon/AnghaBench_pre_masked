
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
typedef int s32 ;
struct TYPE_6__ {TYPE_1__* descriptors; } ;
struct TYPE_5__ {int point; int control; int adr; int p; } ;
typedef TYPE_1__ CDTOCDescriptor ;
typedef TYPE_2__ CDTOC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static s32 FUNC_4(u32 *VAR_0)
{
   int VAR_1 = 150, VAR_2 = 0;
 u_char VAR_3;
 int VAR_4, VAR_5 = 0;
 CDTOC *VAR_6 = FUNC_2();
 CDTOCDescriptor *VAR_7;
 VAR_7 = VAR_6->descriptors;

 FUNC_3(VAR_0, 0xFF, 0xCC * 2);


 for( VAR_4 = 3; VAR_4 < FUNC_1(VAR_6); VAR_4++ ) {
         VAR_3 = VAR_7[VAR_4].point;
  VAR_5 = FUNC_0(VAR_7[VAR_4].p) + VAR_1;
  if ((VAR_3 > 99) || (VAR_3 < 1))
   continue;
  VAR_0[VAR_4-3] = (VAR_7[VAR_4].control << 28 | VAR_7[VAR_4].adr << 24 | VAR_5);
  VAR_2++;
 }


 VAR_0[99] = VAR_7[0].control << 28 | VAR_7[0].adr << 24 | 1 << 16;

 VAR_0[100] = VAR_7[1].control << 28 | VAR_7[1].adr << 24 | VAR_2 << 16;

 VAR_0[101] = VAR_7[2].control << 28 | VAR_7[2].adr << 24 | FUNC_0(VAR_7[2].p) + VAR_1;


 return (0xCC * 2);
}
