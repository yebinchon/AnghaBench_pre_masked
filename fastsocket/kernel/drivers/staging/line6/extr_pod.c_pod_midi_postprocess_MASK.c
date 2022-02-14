
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int dumpreq; int midi_postprocess; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct usb_line6_pod *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 int VAR_8;

 if (!VAR_5->midi_postprocess)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8) {
  if (VAR_6[VAR_8] == (VAR_2 | VAR_0)) {
   FUNC_0(&VAR_5->dumpreq);
   break;
  } else if ((VAR_6[VAR_8] == (VAR_1 | VAR_0)) && (VAR_8 < VAR_7 - 1))
   if ((VAR_6[VAR_8 + 1] == VAR_3) || (VAR_6[VAR_8 + 1] == VAR_4)) {
    FUNC_0(&VAR_5->dumpreq);
    break;
   }
 }
}
