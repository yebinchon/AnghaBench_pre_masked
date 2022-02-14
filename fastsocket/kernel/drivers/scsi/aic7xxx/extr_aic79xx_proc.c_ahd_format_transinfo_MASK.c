
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct info_str {int dummy; } ;
struct ahd_transinfo {scalar_t__ period; scalar_t__ offset; int width; int ppr_options; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct info_str*,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct info_str *VAR_6, struct ahd_transinfo *VAR_7)
{
 u_int VAR_8;
 u_int VAR_9;
 u_int VAR_10;

 if (VAR_7->period == VAR_0) {
  FUNC_1(VAR_6, "Renegotiation Pending\n");
  return;
 }
        VAR_8 = 3300;
        VAR_9 = 0;
 if (VAR_7->offset != 0) {
  VAR_9 = FUNC_0(VAR_7->period);
  VAR_8 = VAR_9;
 }
 VAR_8 *= (0x01 << VAR_7->width);
        VAR_10 = VAR_8 / 1000;
        if (VAR_10 > 0)
  FUNC_1(VAR_6, "%d.%03dMB/s transfers", VAR_10, VAR_8 % 1000);
        else
  FUNC_1(VAR_6, "%dKB/s transfers", VAR_8);

 if (VAR_9 != 0) {
  int VAR_11;

  VAR_11 = 0;
  FUNC_1(VAR_6, " (%d.%03dMHz", VAR_9 / 1000, VAR_9 % 1000);
  if ((VAR_7->ppr_options & VAR_4) != 0) {
   FUNC_1(VAR_6, " RDSTRM");
   VAR_11++;
  }
  if ((VAR_7->ppr_options & VAR_1) != 0) {
   FUNC_1(VAR_6, "%s", VAR_11 ? "|DT" : " DT");
   VAR_11++;
  }
  if ((VAR_7->ppr_options & VAR_2) != 0) {
   FUNC_1(VAR_6, "%s", VAR_11 ? "|IU" : " IU");
   VAR_11++;
  }
  if ((VAR_7->ppr_options & VAR_5) != 0) {
   FUNC_1(VAR_6, "%s",
      VAR_11 ? "|RTI" : " RTI");
   VAR_11++;
  }
  if ((VAR_7->ppr_options & VAR_3) != 0) {
   FUNC_1(VAR_6, "%s",
      VAR_11 ? "|QAS" : " QAS");
   VAR_11++;
  }
 }

 if (VAR_7->width > 0) {
  if (VAR_9 != 0) {
   FUNC_1(VAR_6, ", ");
  } else {
   FUNC_1(VAR_6, " (");
  }
  FUNC_1(VAR_6, "%dbit)", 8 * (0x01 << VAR_7->width));
 } else if (VAR_9 != 0) {
  FUNC_1(VAR_6, ")");
 }
 FUNC_1(VAR_6, "\n");
}
