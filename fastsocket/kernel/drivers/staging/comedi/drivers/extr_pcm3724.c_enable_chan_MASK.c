
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv_pcm3724 {unsigned int dio_1; unsigned int dio_2; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; scalar_t__ private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_6, struct comedi_subdevice *VAR_7,
   int VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 struct priv_pcm3724 *VAR_11;

 VAR_10 = 0;
 VAR_11 = (struct priv_pcm3724 *)(VAR_6->private);

 VAR_9 = 1 << FUNC_0(VAR_8);
 if (VAR_7 == VAR_6->subdevices) {
  VAR_11->dio_1 |= VAR_9;
 } else {
  VAR_11->dio_2 |= VAR_9;
 }
 if (VAR_11->dio_1 & 0xff0000) {
  VAR_10 |= VAR_4;
 }
 if (VAR_11->dio_1 & 0xff00) {
  VAR_10 |= VAR_2;
 }
 if (VAR_11->dio_1 & 0xff) {
  VAR_10 |= VAR_0;
 }
 if (VAR_11->dio_2 & 0xff0000) {
  VAR_10 |= VAR_5;
 }
 if (VAR_11->dio_2 & 0xff00) {
  VAR_10 |= VAR_3;
 }
 if (VAR_11->dio_2 & 0xff) {
  VAR_10 |= VAR_1;
 }

 FUNC_1(VAR_10, VAR_6->iobase + 9);
}
