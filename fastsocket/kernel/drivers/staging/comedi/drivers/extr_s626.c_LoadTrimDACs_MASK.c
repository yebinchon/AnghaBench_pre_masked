
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct comedi_device {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,size_t,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 register uint8_t VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  FUNC_2(VAR_2, VAR_3, FUNC_1(VAR_2, VAR_0[VAR_3]));
}
