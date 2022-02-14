
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int * pDacWBuf; int Dacpol; } ;


 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_15, uint32_t VAR_16)
{
 FUNC_0(VAR_15, VAR_2, VAR_14->Dacpol);






 *VAR_14->pDacWBuf = VAR_16;






 FUNC_1(VAR_6, VAR_3);







 FUNC_4(VAR_5, VAR_1);







 while ((FUNC_2(VAR_6) & VAR_3) != 0) ;
 FUNC_3(0, VAR_13 | VAR_9 | VAR_10);







 while ((FUNC_2(VAR_7) & VAR_11) == 0) ;







 FUNC_3(0, VAR_13 | VAR_12 | VAR_8 | VAR_10 | VAR_0);
 if ((FUNC_2(VAR_4) & 0xFF000000) != 0) {






  while ((FUNC_2(VAR_4) & 0xFF000000) != 0) ;
 }
 FUNC_3(0, VAR_9 | VAR_10 | VAR_0);





 while ((FUNC_2(VAR_4) & 0xFF000000) == 0) ;
}
