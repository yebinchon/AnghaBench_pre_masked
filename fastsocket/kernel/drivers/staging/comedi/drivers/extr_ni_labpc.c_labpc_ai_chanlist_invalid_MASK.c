
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;

 int FUNC_3 (struct comedi_device const*,char*) ;
 int FUNC_4 (struct comedi_cmd const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const struct comedi_device *VAR_1,
         const struct comedi_cmd *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_2->chanlist == ((void*)0))
  return 0;

 VAR_3 = FUNC_4(VAR_2);

 if (VAR_3 == VAR_0)
  return 0;

 if (VAR_3 == 128) {
  if (VAR_2->chanlist_len > 0xff) {
   FUNC_3(VAR_1,
         "ni_labpc: chanlist too long for single channel interval mode\n");
   return 1;
  }
 }

 VAR_4 = FUNC_1(VAR_2->chanlist[0]);
 VAR_5 = FUNC_2(VAR_2->chanlist[0]);
 VAR_6 = FUNC_0(VAR_2->chanlist[0]);

 for (VAR_7 = 0; VAR_7 < VAR_2->chanlist_len; VAR_7++) {

  switch (VAR_3) {
  case 128:
   if (FUNC_1(VAR_2->chanlist[VAR_7]) != VAR_4) {
    FUNC_3(VAR_1,
          "channel scanning order specified in chanlist is not supported by hardware.\n");
    return 1;
   }
   break;
  case 129:
   if (FUNC_1(VAR_2->chanlist[VAR_7]) != VAR_7) {
    FUNC_3(VAR_1,
          "channel scanning order specified in chanlist is not supported by hardware.\n");
    return 1;
   }
   break;
  case 130:
   if (FUNC_1(VAR_2->chanlist[VAR_7]) !=
       VAR_2->chanlist_len - VAR_7 - 1) {
    FUNC_3(VAR_1,
          "channel scanning order specified in chanlist is not supported by hardware.\n");
    return 1;
   }
   break;
  default:
   FUNC_5("ni_labpc: bug! in chanlist check\n");
   return 1;
   break;
  }

  if (FUNC_2(VAR_2->chanlist[VAR_7]) != VAR_5) {
   FUNC_3(VAR_1,
         "entries in chanlist must all have the same range\n");
   return 1;
  }

  if (FUNC_0(VAR_2->chanlist[VAR_7]) != VAR_6) {
   FUNC_3(VAR_1,
         "entries in chanlist must all have the same reference\n");
   return 1;
  }
 }

 return 0;
}
