
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unioxx5_subd_priv {int* usp_module_type; } ;
struct comedi_subdevice {struct unioxx5_subd_priv* private; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int minor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct unioxx5_subd_priv*,unsigned int*,int,int ) ;
 int FUNC_2 (struct unioxx5_subd_priv*,unsigned int*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 struct unioxx5_subd_priv *VAR_5 = VAR_2->private;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_3->chanspec);
 VAR_7 = VAR_5->usp_module_type[VAR_6 / 2];

 if (VAR_7 == VAR_0) {
  if (!FUNC_2(VAR_5, VAR_4, VAR_6, VAR_1->minor))
   return -1;
 } else {
  if (!FUNC_1(VAR_5, VAR_4, VAR_6, VAR_1->minor))
   return -1;
 }

 return 1;
}
