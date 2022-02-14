
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAmcc; int tsk_Current; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
 struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 VAR_7->tsk_Current = VAR_6;



 if (VAR_11[0] == VAR_0) {
  VAR_11[2] = VAR_11[2] << 4;
  VAR_11[3] = VAR_11[3] << 4;
  FUNC_0(VAR_11[2],
   VAR_7->i_IobaseAmcc + VAR_2 +
   VAR_3);
  FUNC_0(VAR_11[3],
   VAR_7->i_IobaseAmcc + VAR_2 +
   VAR_4);
  if (VAR_11[1] == VAR_1) {
   FUNC_0(0x4,
    VAR_7->i_IobaseAmcc + VAR_2 +
    VAR_5);
  }
  else {
   FUNC_0(0x6,
    VAR_7->i_IobaseAmcc + VAR_2 +
    VAR_5);
  }
 }
 else {
  FUNC_0(0x0,
   VAR_7->i_IobaseAmcc + VAR_2 +
   VAR_3);
  FUNC_0(0x0,
   VAR_7->i_IobaseAmcc + VAR_2 +
   VAR_4);
  FUNC_0(0x0,
   VAR_7->i_IobaseAmcc + VAR_2 +
   VAR_5);
 }

 return VAR_10->n;
}
