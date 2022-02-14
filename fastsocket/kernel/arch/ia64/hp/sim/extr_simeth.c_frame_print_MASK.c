
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0("%s: (%d) %02x", VAR_0, VAR_2, VAR_1[0] & 0xff);
 for(VAR_3=1; VAR_3 < 6; VAR_3++ ) {
  FUNC_0(":%02x", VAR_1[VAR_3] &0xff);
 }
 FUNC_0(" %2x", VAR_1[6] &0xff);
 for(VAR_3=7; VAR_3 < 12; VAR_3++ ) {
  FUNC_0(":%02x", VAR_1[VAR_3] &0xff);
 }
 FUNC_0(" [%02x%02x]\n", VAR_1[12], VAR_1[13]);

 for(VAR_3=14; VAR_3 < VAR_2; VAR_3++ ) {
  FUNC_0("%02x ", VAR_1[VAR_3] &0xff);
  if ( (VAR_3%10)==0) FUNC_0("\n");
 }
 FUNC_0("\n");
}
