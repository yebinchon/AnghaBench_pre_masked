
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int len_chanlist; } ;
struct comedi_device {int minor; } ;
typedef int differencial ;
struct TYPE_4__ {int usemux; } ;
struct TYPE_3__ {scalar_t__ n_aichand; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (char*,int ,int,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5, int VAR_6,
         unsigned int *VAR_7, int VAR_8, int VAR_9)
{
 unsigned int VAR_10, VAR_11 = 0, VAR_12 = 0;


 if (VAR_6 < 1) {
  FUNC_3(VAR_4, "range/channel list is empty!");
  return 0;
 }
 if ((VAR_8 + VAR_6 + VAR_9) > VAR_5->len_chanlist) {
  FUNC_4
      ("comedi%d: range/channel list is too long for actual configuration (%d>%d)!",
       VAR_4->minor, VAR_6, VAR_5->len_chanlist - VAR_8 - VAR_9);
  return 0;
 }

 if (FUNC_0(VAR_7[0]) == VAR_0)
  VAR_11 = 1;
 if (FUNC_2(VAR_7[0]) < VAR_1)
  VAR_12 = 1;
 if (VAR_6 > 1)
  for (VAR_10 = 1; VAR_10 < VAR_6; VAR_10++) {
   if ((FUNC_0(VAR_7[VAR_10]) == VAR_0) !=
       (VAR_11)) {
    FUNC_3(VAR_4,
          "Differencial and single ended inputs cann't be mixtured!");
    return 0;
   }
   if ((FUNC_2(VAR_7[VAR_10]) < VAR_1) !=
       (VAR_12)) {
    FUNC_3(VAR_4,
          "Bipolar and unipolar ranges cann't be mixtured!");
    return 0;
   }
   if ((!VAR_2->usemux) & (VAR_11) &
       (FUNC_1(VAR_7[VAR_10]) >= VAR_3->n_aichand)) {
    FUNC_3(VAR_4,
          "If AREF_DIFF is used then is available only first 8 channels!");
    return 0;
   }
  }

 return 1;
}
