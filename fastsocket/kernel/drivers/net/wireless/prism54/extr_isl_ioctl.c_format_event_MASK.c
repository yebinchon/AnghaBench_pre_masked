
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct obj_mlme {int code; int address; } ;
struct TYPE_3__ {scalar_t__ iw_mode; } ;
typedef TYPE_1__ islpci_private ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,char*,char const*,char*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(islpci_private *VAR_2, char *VAR_3, const char *VAR_4,
      const struct obj_mlme *VAR_5, u16 *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_1(VAR_3, VAR_0,
    "%s %s %pM %s (%2.2X)",
    VAR_4,
    ((VAR_2->iw_mode == VAR_1) ? "from" : "to"),
    VAR_5->address,
    (VAR_7 ? (VAR_5->code ? " : REJECTED " : " : ACCEPTED ")
     : ""), VAR_5->code);
 FUNC_0(VAR_8 > VAR_0);
 *VAR_6 = VAR_8;
}
