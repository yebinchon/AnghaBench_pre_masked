
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5, int VAR_6,
         u8 * VAR_7, int VAR_8)
{
 static const int VAR_9 = 1000;
 int VAR_10, VAR_11;
 FUNC_5(0x80 | VAR_6,
        VAR_4->mite->daq_io_addr + VAR_1);
 FUNC_5(0xc0 | VAR_6,
        VAR_4->mite->daq_io_addr + VAR_1);
 for (VAR_10 = 0;
      (FUNC_2(VAR_4->mite->daq_io_addr +
      VAR_3) & 0x2) == 0 && VAR_10 < VAR_9; ++VAR_10) {
  FUNC_4(1);
 }
 if (VAR_10 == VAR_9) {
  FUNC_1
      ("ni_pcidio: failed to load fpga %i, waiting for status 0x2\n",
       VAR_6);
  return -VAR_0;
 }
 FUNC_5(0x80 | VAR_6,
        VAR_4->mite->daq_io_addr + VAR_1);
 for (VAR_10 = 0;
      FUNC_2(VAR_4->mite->daq_io_addr + VAR_3) !=
      0x3 && VAR_10 < VAR_9; ++VAR_10) {
  FUNC_4(1);
 }
 if (VAR_10 == VAR_9) {
  FUNC_1
      ("ni_pcidio: failed to load fpga %i, waiting for status 0x3\n",
       VAR_6);
  return -VAR_0;
 }
 for (VAR_11 = 0; VAR_11 + 1 < VAR_8;) {
  unsigned int VAR_12 = VAR_7[VAR_11++];
  VAR_12 |= VAR_7[VAR_11++] << 8;
  FUNC_5(VAR_12,
         VAR_4->mite->daq_io_addr + VAR_2);
  for (VAR_10 = 0;
       (FUNC_2(VAR_4->mite->daq_io_addr +
       VAR_3) & 0x2) == 0
       && VAR_10 < VAR_9; ++VAR_10) {
   FUNC_4(1);
  }
  if (VAR_10 == VAR_9) {
   FUNC_1("ni_pcidio: failed to load word into fpga %i\n",
          VAR_6);
   return -VAR_0;
  }
  if (FUNC_0())
   FUNC_3();
 }
 FUNC_5(0x0, VAR_4->mite->daq_io_addr + VAR_1);
 return 0;
}
