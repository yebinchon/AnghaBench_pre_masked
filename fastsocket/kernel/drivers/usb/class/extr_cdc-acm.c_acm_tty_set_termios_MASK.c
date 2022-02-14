
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_cdc_line_coding {int bCharFormat; int bParityType; int bDataBits; scalar_t__ dwDTERate; } ;
struct tty_struct {struct ktermios* termios; struct acm* driver_data; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_4__ {scalar_t__ dwDTERate; } ;
struct acm {int ctrlout; int clocal; TYPE_1__ line; } ;


 int VAR_0 ;
 int FUNC_0 (struct acm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct acm*,int) ;
 int FUNC_2 (struct acm*,TYPE_1__*) ;
 int * VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int,int,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,struct usb_cdc_line_coding*,int) ;
 int FUNC_7 (TYPE_1__*,struct usb_cdc_line_coding*,int) ;
 int FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_8,
      struct ktermios *VAR_9)
{
 struct acm *VAR_10 = VAR_8->driver_data;
 struct ktermios *VAR_11 = VAR_8->termios;
 struct usb_cdc_line_coding VAR_12;
 int VAR_13 = VAR_10->ctrlout;

 if (!FUNC_0(VAR_10))
  return;

 VAR_12.dwDTERate = FUNC_3(FUNC_8(VAR_8));
 VAR_12.bCharFormat = VAR_11->c_cflag & VAR_4 ? 2 : 0;
 VAR_12.bParityType = VAR_11->c_cflag & VAR_5 ?
    (VAR_11->c_cflag & VAR_6 ? 1 : 2) +
    (VAR_11->c_cflag & VAR_2 ? 2 : 0) : 0;
 VAR_12.bDataBits = VAR_7[(VAR_11->c_cflag & VAR_3) >> 4];

 VAR_10->clocal = ((VAR_11->c_cflag & VAR_1) != 0);

 if (!VAR_12.dwDTERate) {
  VAR_12.dwDTERate = VAR_10->line.dwDTERate;
  VAR_13 &= ~VAR_0;
 } else
  VAR_13 |= VAR_0;

 if (VAR_13 != VAR_10->ctrlout)
  FUNC_1(VAR_10, VAR_10->ctrlout = VAR_13);

 if (FUNC_6(&VAR_10->line, &VAR_12, sizeof VAR_12)) {
  FUNC_7(&VAR_10->line, &VAR_12, sizeof VAR_12);
  FUNC_4("set line: %d %d %d %d", FUNC_5(VAR_12.dwDTERate),
   VAR_12.bCharFormat, VAR_12.bParityType,
   VAR_12.bDataBits);
  FUNC_2(VAR_10, &VAR_10->line);
 }
}
