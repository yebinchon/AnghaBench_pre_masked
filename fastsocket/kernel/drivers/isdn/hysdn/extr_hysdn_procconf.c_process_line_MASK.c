
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct conf_writedata {unsigned char* conf_line; int channel; TYPE_1__* card; } ;
struct TYPE_3__ {int debug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2(struct conf_writedata *VAR_4)
{
 unsigned char *VAR_5 = VAR_4->conf_line;
 int VAR_6;

 if (VAR_4->card->debug_flags & VAR_2)
  FUNC_0(VAR_4->card, "conf line: %s", VAR_5);

 if (*VAR_5 == '-') {
  VAR_5++;

  if (*VAR_5++ != 'c')
   return (0);
  VAR_6 = 0;
  while ((*VAR_5 <= '9') && (*VAR_5 >= '0'))
   VAR_6 = VAR_6 * 10 + *VAR_5++ - '0';
  if (VAR_6 > 65535) {
   if (VAR_4->card->debug_flags & VAR_3)
    FUNC_0(VAR_4->card, "conf channel invalid  %d", VAR_6);
   return (-VAR_0);
  }
  VAR_4->channel = VAR_6 & 0xFFFF;
  return (0);
 }
 if (*VAR_5 == '*') {
  if (VAR_4->card->debug_flags & VAR_1)
   FUNC_0(VAR_4->card, "conf chan=%d %s", VAR_4->channel, VAR_5);
  return (FUNC_1(VAR_4->card, VAR_4->conf_line + 1,
      VAR_4->channel));
 }
 return (0);
}
