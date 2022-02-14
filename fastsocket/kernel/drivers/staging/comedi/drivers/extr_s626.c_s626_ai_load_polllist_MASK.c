
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(uint8_t * VAR_3, struct comedi_cmd *VAR_4)
{

 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->chanlist_len; VAR_5++) {
  if (FUNC_1((VAR_4->chanlist)[VAR_5]) == 0)
   VAR_3[VAR_5] = (FUNC_0((VAR_4->chanlist)[VAR_5])) | (VAR_2);
  else
   VAR_3[VAR_5] = (FUNC_0((VAR_4->chanlist)[VAR_5])) | (VAR_1);
 }
 if (VAR_5 != 0)
  VAR_3[VAR_5 - 1] |= VAR_0;

 return VAR_5;
}
