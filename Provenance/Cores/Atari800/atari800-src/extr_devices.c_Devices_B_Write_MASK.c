
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_2__ {int pos; int* url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 UBYTE VAR_6;

 VAR_6 = VAR_2;

 if (VAR_5)
  FUNC_0("B: WRITE ([%d] %02X, '%c')", VAR_4.pos, VAR_6, VAR_6);

 if (VAR_6 == 0x9b)
  VAR_6 = '\0';

 if (VAR_4.pos >= sizeof(VAR_4.url) - 1) {
  VAR_3 = 135;
  VAR_1;
  return;
 }
 VAR_4.url[VAR_4.pos++] = VAR_6;

 VAR_3 = 1;
 VAR_0;
}
