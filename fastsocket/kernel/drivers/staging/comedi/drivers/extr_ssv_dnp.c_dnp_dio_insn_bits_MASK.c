
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7,
        struct comedi_insn *VAR_8, unsigned int *VAR_9)
{

 if (VAR_8->n != 2)
  return -VAR_2;
 if (VAR_9[0]) {

  FUNC_1(VAR_3, VAR_1);
  FUNC_1((FUNC_0(VAR_0)
        & ~(u8) (VAR_9[0] & 0x0000FF))
       | (u8) (VAR_9[1] & 0x0000FF), VAR_0);

  FUNC_1(VAR_4, VAR_1);
  FUNC_1((FUNC_0(VAR_0)
        & ~(u8) ((VAR_9[0] & 0x00FF00) >> 8))
       | (u8) ((VAR_9[1] & 0x00FF00) >> 8), VAR_0);

  FUNC_1(VAR_5, VAR_1);
  FUNC_1((FUNC_0(VAR_0)
        & ~(u8) ((VAR_9[0] & 0x0F0000) >> 12))
       | (u8) ((VAR_9[1] & 0x0F0000) >> 12), VAR_0);
 }


 FUNC_1(VAR_3, VAR_1);
 VAR_9[0] = FUNC_0(VAR_0);
 FUNC_1(VAR_4, VAR_1);
 VAR_9[0] += FUNC_0(VAR_0) << 8;
 FUNC_1(VAR_5, VAR_1);
 VAR_9[0] += ((FUNC_0(VAR_0) & 0xF0) << 12);

 return 2;

}
