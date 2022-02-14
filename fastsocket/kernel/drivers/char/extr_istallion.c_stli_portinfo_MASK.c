
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stliport {int dummy; } ;
struct stlibrd {int state; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int hwid; int signals; scalar_t__ rxoverrun; scalar_t__ rxbreaks; scalar_t__ rxparity; scalar_t__ rxframing; scalar_t__ rxtotal; scalar_t__ txtotal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct seq_file*,char*,char,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int *,struct stliport*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_7, struct stlibrd *VAR_8, struct stliport *VAR_9, int VAR_10)
{
 char *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(((void*)0), VAR_9);

 VAR_11 = "UNKNOWN";
 if (VAR_8->state & VAR_0) {
  switch (VAR_6.hwid) {
  case 0: VAR_11 = "2681"; break;
  case 1: VAR_11 = "SC26198"; break;
  default:VAR_11 = "CD1400"; break;
  }
 }
 FUNC_0(VAR_7, "%d: uart:%s ", VAR_10, VAR_11);

 if ((VAR_8->state & VAR_0) && (VAR_12 >= 0)) {
  char VAR_13;

  FUNC_0(VAR_7, "tx:%d rx:%d", (int) VAR_6.txtotal,
   (int) VAR_6.rxtotal);

  if (VAR_6.rxframing)
   FUNC_0(VAR_7, " fe:%d",
    (int) VAR_6.rxframing);
  if (VAR_6.rxparity)
   FUNC_0(VAR_7, " pe:%d",
    (int) VAR_6.rxparity);
  if (VAR_6.rxbreaks)
   FUNC_0(VAR_7, " brk:%d",
    (int) VAR_6.rxbreaks);
  if (VAR_6.rxoverrun)
   FUNC_0(VAR_7, " oe:%d",
    (int) VAR_6.rxoverrun);

  VAR_13 = ' ';
  if (VAR_6.signals & VAR_5) {
   FUNC_0(VAR_7, "%c%s", VAR_13, "RTS");
   VAR_13 = '|';
  }
  if (VAR_6.signals & VAR_2) {
   FUNC_0(VAR_7, "%c%s", VAR_13, "CTS");
   VAR_13 = '|';
  }
  if (VAR_6.signals & VAR_4) {
   FUNC_0(VAR_7, "%c%s", VAR_13, "DTR");
   VAR_13 = '|';
  }
  if (VAR_6.signals & VAR_1) {
   FUNC_0(VAR_7, "%c%s", VAR_13, "DCD");
   VAR_13 = '|';
  }
  if (VAR_6.signals & VAR_3) {
   FUNC_0(VAR_7, "%c%s", VAR_13, "DSR");
   VAR_13 = '|';
  }
 }
 FUNC_1(VAR_7, '\n');
}
